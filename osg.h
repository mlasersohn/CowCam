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

MyViewer *open_osg(int num_files, char **model_file, int ww, int hh);
