#include <stdio.h>
#include <iostream>
#include <sstream>
#include <cassert>
#include <mutex>
#include <atomic>

#include <cef_app.h>
#include <cef_client.h>
#include <cef_parser.h>
#include <cef_render_handler.h>
#include <cef_life_span_handler.h>
#include <cef_load_handler.h>
#include <wrapper/cef_helpers.h>

#include	<FL/Fl.H>
#include	<FL/Fl_Window.H>
#include	<FL/Fl_Double_Window.H>
#include	<FL/Fl_Box.H>
#include	<FL/Fl_Input.H>
#include	<FL/Fl_Button.H>
#include	<FL/Fl_Menu_Button.H>
#include	<FL/Fl_Choice.H>
#include	<FL/Fl_Image.H>
#include	<FL/Fl_Shared_Image.H>
#include	<FL/Fl_PNG_Image.H>
#include	<FL/fl_draw.H>

#include	"html_window.h"

std::string GetDataURI(const std::string& data, const std::string& mime_type) {
  return "data:" + mime_type + ";base64," +
         CefURIEncode(CefBase64Encode(data.data(), data.size()), false)
             .ToString();
}

void	html_win_shutdown(Fl_Widget *w, void *v)
{
	HTML_Win *html = (HTML_Win *)v;
	delete html;
}

HTML_Win::HTML_Win(char *in_url, char *in_html, int ww, int hh)
{
	width = ww;
	height = hh;

	renderHandler = nullptr;
	browserClient = nullptr;
	browser = nullptr;

	raw = NULL;
	load(in_url, in_html);
}

HTML_Win::~HTML_Win()
{
	shutdown();
}

void	HTML_Win::resize(int ww, int hh)
{
	renderHandler->resize(ww, hh);
	browser->GetHost()->WasResized();
	ww = renderHandler->m_width;
	hh = renderHandler->m_height;
	width = ww;
	height = hh;
}

void	bgr2rgb(unsigned char *ptr, unsigned char *out, int ww, int hh)
{
int     xx, yy;

	unsigned char *p1 = ptr;
	unsigned char *p2 = out;
	for(xx = 0;xx < ww;xx++)
	{
		for(yy = 0;yy < hh;yy++)
		{
			unsigned char b = *p1;
			unsigned char g = *(p1 + 1);
			unsigned char r = *(p1 + 2);
			*p2 = r;
			*(p2 + 1) = g;
			*(p2 + 2) = b;
			p1 += 4;
			p2 += 3;
		}
	}
}

void    HTML_Win::Draw()
{
	if(renderHandler != nullptr)
	{
		if(renderHandler->raw != NULL)
		{
			int ww = renderHandler->use_w;
			int hh = renderHandler->use_h;
			raw = renderHandler->raw;
		}
	}
}

void    my_html_window_cb(void *v)
{
	HTML_Win *win = (HTML_Win *)v;

	CefDoMessageLoopWork();
	if(win->renderHandler->redraw_flag == 1)
	{
		win->Draw();
		win->renderHandler->redraw_flag = 0;
	}
	Fl::repeat_timeout(0.03, my_html_window_cb, win);
}

int initialize_cef(int html, int argc, char *argv[])
{
	CefMainArgs args(argc, argv);
	int result = CefExecuteProcess(args, nullptr, nullptr);
	if(result >= 0)
	{
		exit(result);
	}
	if(html == 1) 
	{
		CefSettings settings;
		settings.windowless_rendering_enabled = true;

		if(!CefInitialize(args, settings, nullptr, nullptr))
		{
			return EXIT_FAILURE;
		}
    }
	return(0);
}

int HTML_Win::load(char *url, char *html_source)
{
	renderHandler = new RenderHandler(width, height);
	assert(renderHandler != nullptr);

	browserClient = new BrowserClient(renderHandler);
	assert(browserClient != nullptr);

	CefBrowserSettings browserSettings;
	browserSettings.windowless_frame_rate = 60;

	CefWindowInfo window_info;
	window_info.SetAsWindowless(true);

	if(url != NULL)
	{
		browser = CefBrowserHost::CreateBrowserSync(window_info, browserClient.get(), url, browserSettings, nullptr, nullptr);
	}
	else
	{
		browser = CefBrowserHost::CreateBrowserSync(window_info, browserClient.get(), "about:blank", browserSettings, nullptr, nullptr);
		std::string cow = GetDataURI(html_source, "text/html");
		CefRefPtr<CefFrame> frame = browser->GetMainFrame();
		frame->LoadURL(cow);
	}
	assert(browser != nullptr);

	Fl::add_timeout(0.03, my_html_window_cb, this);
	return(0);
}

int HTML_Win::shutdown()
{
	Fl::remove_timeout(my_html_window_cb, this);

	browser->GetHost()->CloseBrowser(false);
	while(!browserClient->closeAllowed())
	{
		CefDoMessageLoopWork();
		usleep(10000);
	}
	browser = nullptr;
	browserClient = nullptr;
	renderHandler = nullptr;
	return(0);
}

void	shutdown_cef()
{
	CefShutdown();
}
