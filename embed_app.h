class   EmbedAppWindow : public Fl_Window
{
public:
		EmbedAppWindow(Fl_Window *, int, int, int, int);
		EmbedAppWindow(Fl_Window *, int, int);
		~EmbedAppWindow();
	void	draw();
	void	my_hide();
	void	my_show();

	int		EmbedApp(char *, char **argv, int& fw, int& fh);
	void	RestoreOldParent();
	void	AdjustSize(int in_w, int in_h);
	int		TestWindow();

	Fl_Window	*my_window;
	Window		child_win;
	pid_t pid;
	int	old_w;
	int	old_h;
	Window	my_hwnd;
	Window	old_parent;
	char	title[256];
	int	my_x;
	int	my_y;
	int	my_w;
	int	my_h;
	int	viz;
};

