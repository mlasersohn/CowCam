#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#include <FL/x.H>
#include <string.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <linux/if.h>
#include <sys/wait.h>
#include <signal.h>
#include <paths.h>
#include <errno.h>
#include <spawn.h>

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>

#include "embed_app.h"

extern char **environ;

EmbedAppWindow::EmbedAppWindow(Fl_Window *in_win, int xx, int yy, int ww, int hh) : Fl_Window(xx, yy, ww, hh)
{
	end();
	my_window = in_win;
	my_hwnd = None;
	old_parent = None;
	my_x = xx;
	my_y = yy;
	my_w = ww;
	my_h = hh;
	viz = 1;
	pid = 0;
	child_win = None;
}

EmbedAppWindow::EmbedAppWindow(Fl_Window *in_win, int ww, int hh) : Fl_Window(ww, hh)
{
	end();
	my_window = in_win;
	my_hwnd = None;
	old_parent = None;
	my_x = x();
	my_y = y();
	my_w = ww;
	my_h = hh;
	pid = 0;
	child_win = None;
}

EmbedAppWindow::~EmbedAppWindow()
{
	if(pid != 0)
	{
		kill(pid, SIGTERM);
	}
}

void	EmbedAppWindow::draw()
{
	Fl_Window::draw();
}

void	EmbedAppWindow::my_hide()
{
	viz = 0;
	resize(x(), y(), 0, 0);
}

void	EmbedAppWindow::my_show()
{
	viz = 1;
	resize(x(), y(), my_w, my_h);
}

void	EmbedAppWindow::AdjustSize(int in_w, int in_h)
{
	my_w = in_w;
	my_h = in_h;
	int yy = (my_window->h() - my_h) - 25;
	resize(x(), yy, my_w, my_h);
	my_y = yy;
	color(fl_lighter(FL_BLACK));
}

intptr_t	FindProcessWindow(intptr_t process_id)
{
	intptr_t r = 0;
	Window win = None;
	Window get_pid_window(pid_t);
	if(process_id != 0)
	{
		win = get_pid_window((pid_t)process_id);
		if(win != None)
		{
			r = (intptr_t)win;
		}
	}
	return(r);
}

int	EmbedAppWindow::TestWindow()
{
Window get_pid_window(pid_t);

	int alive = 0;
	int nn = kill(pid, 0);
	if(nn == 0)
	{
		int status;
		pid_t w = waitpid(pid, &status, WUNTRACED | WCONTINUED | WNOHANG);
		if((w != -1) && (w != 0))
		{
			if(WIFEXITED(status))
			{
				printf("exited, status=%d\n", WEXITSTATUS(status));
				alive = -1;
			} 
			else if(WIFSIGNALED(status)) 
			{
				printf("killed by signal %d\n", WTERMSIG(status));
				int nn = WTERMSIG(status);
				if((nn == SIGHUP)
				|| (nn == SIGINT)
				|| (nn == SIGQUIT)
				|| (nn == SIGILL)
				|| (nn == SIGTRAP)
				|| (nn == SIGABRT)
				|| (nn == SIGIOT)
				|| (nn == SIGBUS)
				|| (nn == SIGFPE)
				|| (nn == SIGKILL)
				|| (nn == SIGUSR1)
				|| (nn == SIGSEGV)
				|| (nn == SIGUSR2)
				|| (nn == SIGPIPE)
				|| (nn == SIGALRM)
				|| (nn == SIGTERM)
				|| (nn == SIGSTKFLT)
				|| (nn == SIGXCPU)
				|| (nn == SIGXFSZ)
				|| (nn == SIGVTALRM)
				|| (nn == SIGPROF)
				|| (nn == SIGIO)
				|| (nn == SIGPOLL)
				|| (nn == SIGPWR)
				|| (nn == SIGSYS))
				{
					alive = -2;
				}
			}
		}
		if(alive == 0)
		{
			Window win = child_win;
			if(win != None)
			{
				Window root = None;
				int dx = 0;
				int dy = 0;
				unsigned int dw = 0;
				unsigned int dh = 0;
				unsigned int border = 0;
				unsigned int depth = 0;
				XGetGeometry(fl_display, win, &root, &dx, &dy, &dw, &dh, &border, &depth);
				if((dw > 0) && (dh > 0))
				{
					alive = 1;
				}
			}
		}
		else
		{
			alive = 0;
		}
	}
	return(alive);
}

int	EmbedAppWindow::EmbedApp(char *path, char **argv, int& fw, int &fh)
{
XKeyEvent createKeyEvent(Window &, bool, int, int);
void SendKey (Display *, KeySym, KeySym);  
Window get_pid_window(pid_t);
int get_state(Window);
Window	get_parent(Window win);
Window	get_root(Window win);
int loop;

	int succeed = 0;
	strcpy(title, "Title");
	int status = posix_spawnp(&pid, path, NULL, NULL, argv, environ);
	if(pid != 0)
	{
		if(argv[0] != NULL)
		{
			strcpy(title, argv[0]);
		}
		pid_t return_pid = -1;
		while(return_pid == -1)
		{
			int status = 0;
			return_pid = waitpid(pid, &status, WNOHANG | WUNTRACED);
			sleep(1);
		}
		int cnt = 0;
		Window win = None;
		while((win == None) && (cnt < 10))
		{
			win = get_pid_window(pid);
			if(win != None)
			{
				old_parent = get_parent(win);
				int dx = 0;
				int dy = 0;
				unsigned int dw = 0;
				unsigned int dh = 0;
				unsigned int border = 0;
				unsigned int depth = 0;
				Window root = None;

				double scale = Fl::screen_scale(0);

				XGetGeometry(fl_display, win, &root, &dx, &dy, &dw, &dh, &border, &depth);
				old_w = dw;
				old_h = dh;

				fw = dw;
				fh = dh;

				XSetWindowAttributes attributes;
				attributes.override_redirect = True;
				XChangeWindowAttributes(fl_display, win, CWOverrideRedirect, &attributes);

				AdjustSize(dw / scale, dh / scale);
				XFlush(fl_display);
				XSync(fl_display, False);

				int done = 0;
				int cnt = 0;
				while((cnt < 100) && (done == 0))
				{
					XReparentWindow(fl_display, win, fl_xid(this), 0, 0);
					XFlush(fl_display);
					XSync(fl_display, False);
					usleep(50000);
					if(get_parent(win) == fl_xid(this))
					{
						if(scale == 0.0) scale = 1.0;
						done = 1;
						succeed = 1;
						child_win = win;
					}
					cnt++;
				}
				XMapWindow(fl_display, win);
				XFlush(fl_display);
				XSync(fl_display, False);
				my_hwnd = win;
			}
			else
			{
				sleep(1);
				cnt++;
			}
		}
	}
	return(succeed);
}

void    EmbedAppWindow::RestoreOldParent()
{
	if(old_parent != None)
	{
		int dx = 0;
		int dy = 0;
		unsigned int dw = 0;
		unsigned int dh = 0;
		unsigned int border = 0;
		unsigned int depth = 0;
		Window root = None;
		XGetGeometry(fl_display, old_parent, &root, &dx, &dy, &dw, &dh, &border, &depth);

		XResizeWindow(fl_display, my_hwnd, old_w, old_h);
		XReparentWindow(fl_display, my_hwnd, old_parent, 0, 0);
		XResizeWindow(fl_display, my_hwnd, old_w, old_h);
		XMapWindow(fl_display, my_hwnd);
		XSync(fl_display, False);
	}
	parent()->remove(this);
	hide();
}

void	SendKeyToWindow(intptr_t in_win, int key, int mod)
{
	void SendKey (Display *, KeySym, KeySym);  
	Window win = (Window)in_win;
	if(win != None)
	{
		if(XSetInputFocus(fl_display, win, RevertToNone, CurrentTime))
		{
			SendKey(fl_display, key, mod);  
		}
	}
}

Window *winlist(Display *disp, unsigned long *len) 
{
Atom type;
int form;
unsigned long remain;
unsigned char *list;

	Atom prop = XInternAtom(disp, "_NET_CLIENT_LIST", False);
	if(XGetWindowProperty(disp, XDefaultRootWindow(disp), prop, 0, 1024, False, XA_WINDOW, &type, &form, len, &remain, &list) != Success) 
	{
		perror("winlist() -- GetWinProp");
		return 0;
	}
	return (Window*)list;
}

char *winame(Display *disp, Window win) 
{
Atom type;
int form;
unsigned long remain, len;
unsigned char *list;
 
	Atom prop = XInternAtom(disp, "WM_NAME", False);
	if(XGetWindowProperty(disp, win, prop, 0, 1024, False, XA_STRING,  &type, &form, &len, &remain, &list) != Success) 
	{
		perror("winlist() -- GetWinProp");
		return NULL;
	}
	return (char*)list;
}

Window	FindWindow(char *in_name)
{
int	loop;

	unsigned long length = 0;
	Window r = None;
	Window *list = winlist(fl_display, &length);
	if(list != NULL)
	{
		for(loop = 0;loop < length;loop++)
		{
			if(list[loop] != None)
			{
				char *name = winame(fl_display, list[loop]);
				if(name != NULL)
				{
					if(strcasecmp(name, in_name) == 0)
					{
						r = list[loop];
					}
					free(name);
				}
			}
		}
		XFree(list);
	}
	return(r);
}

int	get_id(Window win)
{
Atom           type;
int            format;
unsigned long  nItems;
unsigned long  bytesAfter;
unsigned char *propPID = 0;
Atom           _atomPID;

	unsigned long pid = 0;
	_atomPID = XInternAtom(fl_display, "_NET_WM_PID", True);
    	if(Success == XGetWindowProperty(fl_display, win, _atomPID, 0, 1, False, XA_CARDINAL, &type, &format, &nItems, &bytesAfter, &propPID))
    	{
    		if(propPID != 0)
    		{
			pid = *((unsigned long *)propPID);
    			XFree(propPID);
    		}
    	}
	return((int)pid);
}

int	get_state(Window win)
{
Atom           type;
int            format;
unsigned long  nItems;
unsigned long  bytesAfter;
unsigned char *propPID = 0;
Atom           _atomPID;

	long pid = 0;
	_atomPID = XInternAtom(fl_display, "WM_STATE", True);
    	if(Success == XGetWindowProperty(fl_display, win, _atomPID, 0L, 2L, False, _atomPID, &type, &format, &nItems, &bytesAfter, &propPID))
    	{
    		if(propPID != 0)
    		{
			pid = *((long *)propPID);
    			XFree(propPID);
		}
    	}
	return((int)pid);
}

Window	get_parent(Window win)
{
	Window parent = None;
	Window root;
	Window *child;
	unsigned int num;
	if(XQueryTree(fl_display, win, &root, &parent, &child, &num))
	{
		if(child != NULL)
		{
			XFree(child);
		}
	}
	return(parent);
}

Window	get_root(Window win)
{
	Window parent = None;
	Window root;
	Window *child;
	unsigned int num;
	if(XQueryTree(fl_display, win, &root, &parent, &child, &num))
	{
		if(child != NULL)
		{
			XFree(child);
		}
	}
	return(root);
}

Window	get_pid_window(pid_t find_pid)
{
Window *list;
char *name;
unsigned long len;
int i;

	Window r_win = None;
	list = (Window*)winlist(fl_display, &len);
	for(i = 0; i < (int)len; i++) 
	{
		name = winame(fl_display, list[i]);
		int pid = get_id(list[i]);
		free(name);
		if(pid == find_pid)
		{
			r_win = list[i];
		}
	}
	XFree(list);
	return(r_win);
}

int my_check()
{
	FILE *fp = popen("ps -C gcalctool --format '%P %p'" , "r");
	if(fp == NULL)
	{
		printf("ERROR!\n");
	}
	char parentID[256];
	char processID[256];
	while(fscanf(fp, "%s %s", parentID, processID) != EOF)
	{
		printf("PID: %s  Parent: %s\n", processID, parentID);
	}
	pclose(fp);
	return 1;
}

// Function to create a keyboard event
XKeyEvent createKeyEvent(Window &win, bool press, int keycode, int modifiers)
{
   XKeyEvent event;

   Window winRoot = XDefaultRootWindow(fl_display);
   event.display     = fl_display;
   event.window      = win;
   event.root        = winRoot;
   event.subwindow   = None;
   event.time        = CurrentTime;
   event.x           = 1;
   event.y           = 1;
   event.x_root      = 1;
   event.y_root      = 1;
   event.same_screen = True;
   event.keycode     = XKeysymToKeycode(fl_display, keycode);
   event.state       = modifiers;

   if(press)
      event.type = KeyPress;
   else
      event.type = KeyRelease;

   return event;
}

#include <X11/Xlib.h>  
#include <X11/extensions/XTest.h>  
#include <unistd.h>  

void	MousePosition(int xx, int yy)
{
	XTestFakeMotionEvent(fl_display, 0, xx, yy, CurrentTime);  
	XSync(fl_display, 0);
}
  
void SendKey (Display * disp, KeySym keysym, KeySym modsym)  
{  
KeyCode keycode = 0, modcode = 0;  
  
	keycode = XKeysymToKeycode(disp, keysym);  
	if (keycode == 0) return;  
 	 
	XTestGrabControl(disp, True);  
 	 
	//  Generate modkey press
	if(modsym != 0)  
	{  
 		modcode = XKeysymToKeycode(disp, modsym);  
 		XTestFakeKeyEvent(disp, modcode, True, 0);  
	}  
 	 
	// Generate regular key press and release
	XTestFakeKeyEvent(disp, keycode, True, 0);  
	XTestFakeKeyEvent(disp, keycode, False, 0);  
 	 
	// Generate modkey release
	if (modsym != 0)  XTestFakeKeyEvent(disp, modcode, False, 0);  
 	 
	XSync(disp, False);  
	XTestGrabControl(disp, False);  
}  

#include <sys/types.h>
#include <signal.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

intptr_t FindProcessByName(char *name) {
    pid_t p;
    intptr_t r = 0;
    size_t i;
    char* s = (char*)malloc(264);
    char buf[128];
    FILE* st;
    DIR* d = opendir("/proc");
    if (d == NULL) { free(s); return false; }
    struct dirent* f;
    while ((f = readdir(d)) != NULL) {
        if (f->d_name[0] == '.') continue;
        for (i = 0; isdigit(f->d_name[i]); i++);
        if (i < strlen(f->d_name)) continue;
        strcpy(s, "/proc/");
        strcat(s, f->d_name);
        strcat(s, "/status");
        st = fopen(s, "r");
        if (st == NULL) { closedir(d); free(s); return false; }
        do {
            if (fgets(buf, 128, st) == NULL) { fclose(st); closedir(d); free(s); return false; }
        } while (strncmp(buf, "Name:", 5));
        fclose(st);
        for (i = 5; isspace(buf[i]); i++);
        *strchr(buf, '\n') = 0;
        if (!strcmp(&(buf[i]), name)) {
            sscanf(&(s[6]), "%d", &p);
            r = (intptr_t)p;
        }
    }
    closedir(d);
    free(s);
    return(r);
}

void MouseButton(int button)
{
    int b = 0;
    if(button == 0)
    {
        XTestFakeButtonEvent(fl_display, 1, False, CurrentTime);  
        XTestFakeButtonEvent(fl_display, 2, False, CurrentTime);  
        XTestFakeButtonEvent(fl_display, 2, False, CurrentTime);  
    }
    else if(button == 1)
    {
		b = 1;
    	XTestFakeButtonEvent(fl_display, b, True,  CurrentTime);  
    }
    else if(button == 2)
    {
		b = 2;
    	XTestFakeButtonEvent(fl_display, b, True,  CurrentTime);  
    }
    else if(button == 3)
    {
		b = 3;
    	XTestFakeButtonEvent(fl_display, b, True,  CurrentTime);  
    }
    if(button == -1)
    {
		b = 1;
        XTestFakeButtonEvent(fl_display, b, False, CurrentTime);  
    }
    else if(button == -2)
    {
		b = 2;
        XTestFakeButtonEvent(fl_display, b, False, CurrentTime);  
    }
    else if(button == -3)
    {
		b = 3;
        XTestFakeButtonEvent(fl_display, b, False, CurrentTime);  
    }
}

/* COW REMOVED
void	tick_cb(void *v)
{
char	*arg[3];

	EmbedAppWindow *win = (EmbedAppWindow *)v;
	arg[0] = "my_visca";
	arg[1] = "/dev/ttyUSB0";
	arg[2] = NULL;
	win->EmbedApp("/home/laser/SSD/OpenCV/my_visca", arg);
}

int	main()
{

	Fl_Window *mine = new Fl_Window(1200, 1200);
	mine->end();
	EmbedAppWindow *win = new EmbedAppWindow(10, 10, 450 * 2, 270 * 2);
	mine->add(win);
	mine->show();

	Fl::add_timeout(1.0, tick_cb, win);
	Fl::run();
	return(0);
}
*/
