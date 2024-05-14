class   MyViewer : public osgViewer::Viewer
{
public:
                    MyViewer();
                    ~MyViewer();

        osg::Image  *image;
    	osg::MatrixTransform *center = NULL;
    	osg::MatrixTransform *outer_rotate = NULL;
    	osg::MatrixTransform *translate = NULL;
    	osg::MatrixTransform *rotate = NULL;
    	osg::MatrixTransform *scale = NULL;
};

extern "C"
{
osg::Group	*OSG_get_scene_data(MyViewer *viewer);
void		OSG_Translate(osg::MatrixTransform *matrix, double cx, double cy, double cz);
void		OSG_Rotate(osg::MatrixTransform *matrix, double cx, double cy, double cz);
void		OSG_Scale(osg::MatrixTransform *matrix, double cx, double cy, double cz);
MyViewer	*open_osg(int num_files, char **model_file, int ww, int hh);
}
