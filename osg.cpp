#include <osg/MatrixTransform>
#include <osgViewer/Viewer>
#include <osgViewer/CompositeViewer>
#include <osgViewer/ViewerEventHandlers>
#include <osgGA/TrackballManipulator>
#include <osgGA/TerrainManipulator>
#include <osgGA/FlightManipulator>
#include <osgGA/DriveManipulator>
#include <osgDB/ReadFile>

#include <FL/Fl.H>
#include <FL/Fl_Gl_Window.H>
#include <FL/Fl_PNG_Image.H>
#include <FL/fl_draw.H>
#include <FL/fl_draw.H>
#include <FL/gl.h>

#include "osg.h"

#include <iostream>
#include <unistd.h>

extern unsigned char *global_image;

MyViewer::MyViewer() : osgViewer::Viewer()
{
}

MyViewer::~MyViewer()
{
}

void idle_cb(void *v)
{
	osgViewer::Viewer *my_viewer = (osgViewer::Viewer *)v;
	my_viewer->frame();
    Fl::redraw();
	Fl::repeat_timeout(0.01, idle_cb, v);
}

struct MyCameraPostDrawCallback : public osg::Camera::DrawCallback
{
    MyCameraPostDrawCallback(osg::Image *in_image): image(in_image)
    {
    }
    virtual void operator() (const osg::Camera& camera) const
    {
        if((image && image->getPixelFormat() == GL_RGBA) && (image->getDataType() == GL_UNSIGNED_BYTE))
        {
			image->flipVertical();
		}
	}
	osg::Image *image;
};

int	walk_tree(osg::Group *start, int limit, int total, osg::Node **list)
{
int	loop;

	std::string str = start->getName();
	if(str.c_str() != NULL)
	{
		if(total < (limit - 1))
		{
			list[total] = start;
			total++;
		}
	}
	int nn = start->getNumChildren();
	for(loop = 0;loop < nn;loop++)
	{
		osg::Node *nd = start->getChild(loop);
		osg::Group *grp = nd->asGroup();
		if(grp != NULL)
		{
			total = walk_tree(grp, limit, total, list);
		}
	}
	return(total);
}

osg::Group	*instrument(char *name, osg::Node *item)
{
char	buf[4096];

	osg::Group *grp = new osg::Group();
	sprintf(buf, "Group_%s", name);
	grp->setName(buf);

   	osg::MatrixTransform *item_center = new osg::MatrixTransform();
    item_center->setMatrix(osg::Matrix::translate(osg::Vec3(0.0, 0.0, 0.0)));
	sprintf(buf, "Center %s", name);
	item_center->setName(buf);

   	osg::MatrixTransform *outer_item_rotate = new osg::MatrixTransform();
    outer_item_rotate->setMatrix(osg::Matrix::rotate(0.0, osg::Vec3(0, 0, 1)));
	sprintf(buf, "Outer Rotate %s", name);
	outer_item_rotate->setName(buf);

   	osg::MatrixTransform *item_translate = new osg::MatrixTransform();
    item_translate->setMatrix(osg::Matrix::translate(osg::Vec3(0.0, 0.0, 0.0)));
	sprintf(buf, "Translate %s", name);
	item_translate->setName(buf);

   	osg::MatrixTransform *item_rotate = new osg::MatrixTransform();
    item_rotate->setMatrix(osg::Matrix::rotate(0.0, osg::Vec3(0, 0, 1)));
	sprintf(buf, "Rotate %s", name);
	item_rotate->setName(buf);

   	osg::MatrixTransform *item_scale = new osg::MatrixTransform();
    item_scale->setMatrix(osg::Matrix::scale(1.0, 1.0, 1.0));
	sprintf(buf, "Scale %s", name);
	item_scale->setName(buf);

    grp->addChild(item_center);
	item_center->addChild(outer_item_rotate);
	outer_item_rotate->addChild(item_translate);
    item_translate->addChild(item_rotate);
    item_rotate->addChild(item_scale);

	item_scale->addChild(item);

	return(grp);
}


MyViewer *open_osg(int num_files, char **model_file, int ww, int hh)
{
int	loop;

	osg::Group *grp = new osg::Group();

   	osg::MatrixTransform *item_center = new osg::MatrixTransform();
    item_center->setMatrix(osg::Matrix::translate(osg::Vec3(0.0, 0.0, 0.0)));
	item_center->setName("World Center");

   	osg::MatrixTransform *outer_item_rotate = new osg::MatrixTransform();
    outer_item_rotate->setMatrix(osg::Matrix::rotate(0.0, osg::Vec3(0, 0, 1)));
	outer_item_rotate->setName("World Rotate");

   	osg::MatrixTransform *item_translate = new osg::MatrixTransform();
    item_translate->setMatrix(osg::Matrix::translate(osg::Vec3(0.0, 0.0, 0.0)));
	item_translate->setName("World Translate");

   	osg::MatrixTransform *item_rotate = new osg::MatrixTransform();
    item_rotate->setMatrix(osg::Matrix::rotate(0.0, osg::Vec3(0, 0, 1)));
	item_rotate->setName("Local Rotate");

   	osg::MatrixTransform *item_scale = new osg::MatrixTransform();
    item_scale->setMatrix(osg::Matrix::scale(1.0, 1.0, 1.0));
	item_scale->setName("World Scale");

    grp->addChild(item_center);
	item_center->addChild(outer_item_rotate);
	outer_item_rotate->addChild(item_translate);
    item_translate->addChild(item_rotate);
    item_rotate->addChild(item_scale);

	for(loop = 0;loop < num_files; loop++)
	{
    	std::string str(model_file[loop]);
    	osg::ref_ptr<osg::Node> loadedModel = osgDB::readNodeFile(str);
		if(loadedModel != NULL)
		{
			osg::Group *item_group = instrument(model_file[loop], loadedModel);
			item_scale->addChild(item_group);
		}
	}
	MyViewer *my_viewer = NULL;
    if(grp)
    {
        osg::ref_ptr<osg::GraphicsContext::Traits> traits = new osg::GraphicsContext::Traits;
        traits->x = 0;
        traits->y = 0;
        traits->width = ww;
        traits->height = hh;

        traits->red = 8;
        traits->green = 8;
        traits->blue = 8;
        traits->alpha = 8;
        traits->windowDecoration = false;
        traits->pbuffer = true;

        traits->doubleBuffer = true;
        traits->sharedContext = 0;

        osg::GraphicsContext *m_pbuffer = osg::GraphicsContext::createGraphicsContext(traits.get());

		my_viewer = new MyViewer();
		osg::Camera *camera = my_viewer->getCamera();
		my_viewer->center = item_center;
		my_viewer->outer_rotate = outer_item_rotate;
		my_viewer->translate = item_translate;
		my_viewer->rotate = item_rotate;
		my_viewer->scale = item_scale;

		camera->setGraphicsContext(m_pbuffer);
		camera->setProjectionMatrixAsPerspective(30.0f, static_cast<double>(ww)/static_cast<double>(hh), 1.0f, 10000.0f);
        camera->setViewport(new osg::Viewport(0, 0, ww, hh));
		
		osg::Image *image = new osg::Image;
		image->allocateImage(ww, hh, 1, GL_RGBA, GL_UNSIGNED_BYTE);
		my_viewer->image = image;

        camera->setClearMask(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        camera->setClearColor(osg::Vec4(0.0f, 0.0f, 0.0f, 0.0f));

		camera->attach(osg::Camera::COLOR_BUFFER, image, 0, 0);
		camera->setPostDrawCallback(new MyCameraPostDrawCallback(image));

        my_viewer->setSceneData(grp);

        my_viewer->setCameraManipulator(new osgGA::TrackballManipulator);
        my_viewer->addEventHandler(new osgViewer::StatsHandler);

		my_viewer->realize();
    }
    return(my_viewer);
}
