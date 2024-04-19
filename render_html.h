
class MyApp : public ultralight::LoadListener, public ultralight::Logger 
{
	ultralight::RefPtr<ultralight::Renderer> renderer_;
	ultralight::RefPtr<ultralight::View> view_;
	bool done_ = false;
public:
	ultralight::BitmapSurface *bitmap_surface;
	MyApp(char *url, int width, int height);
	virtual ~MyApp();
	void	Run();
        virtual void OnFinishLoading(ultralight::View *caller, uint64_t frame_id, bool is_main_frame, const ultralight::String& url) override
        {
                if(is_main_frame)
                {
                        done_ = true;
                }
        }
        virtual void OnBeginLoading(ultralight::View *caller, uint64_t frame_id, bool is_main_frame, const ultralight::String& url) override
        {
	}
	virtual void OnFailLoading(ultralight::View *caller, uint64_t frame_id, bool is_main_frame, const ultralight::String &url, const ultralight::String &description, const ultralight::String &error_domain, int error_code)
        {
	}
        virtual void LogMessage(ultralight::LogLevel log_level, const ultralight::String& message) override
        {
                std::cout << "> " << message.utf8().data() << std::endl << std::endl;
        }
};

class	HTML
{
public:
		HTML(char *url, int in_w, int in_h);
		~HTML();

	void	draw();

	MyApp		*app;
	unsigned char	*raw;
	int		width;
	int		height;
};
