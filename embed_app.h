class   EmbedAppWindow : public Fl_Window
{
public:
		EmbedAppWindow(int, int, int, int);
		EmbedAppWindow(int, int);
		~EmbedAppWindow();
	void	draw();
	void	my_hide();
	void	my_show();

	void    EmbedApp(char *, char **argv);
	void	RestoreOldParent();

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

