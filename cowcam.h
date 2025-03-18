#define	NUMBER_OF_INTERFACES		9
#define	NUMBER_OF_CAMERAS			7
#define	NUMBER_OF_PRESETS			21

#define	RECORD_MODE			1
#define	FOLLOW_MODE			(1 << 1)
#define	MOTION_MODE			(1 << 2)
#define	TIMESTAMP_MODE			(1 << 3)
#define	ENCODE_MODE			(1 << 4)
#define	MAIN_DETAIL_MODE		(1 << 5)
#define	SHOW_DEBUG_MODE			(1 << 6)
#define	SHOW_MOTION_DEBUG_MODE		(1 << 7)
#define	REVIEW_MODE			(1 << 8)
#define	SNAPSHOT_MODE			(1 << 9)
#define	RESIZE_DETAIL_MODE		(1 << 10)
#define	ZOOM_BOX_MODE			(1 << 11)
#define	SET_INTEREST_MODE		(1 << 12)
#define	CLEAR_INTEREST_MODE		(1 << 13)
#define	RESET_MODE			(1 << 14)
#define	SPLIT_MODE			(1 << 15)
#define	NEW_SOURCE_MODE			(1 << 16)
#define	RESIZE_CAPTURE_MODE		(1 << 17)
#define	SETTINGS_MODE			(1 << 18)
#define	FLIP_HORIZONTAL_MODE		(1 << 19)
#define	FLIP_VERTICAL_MODE		(1 << 20)
#define	SAVE_INTEREST_MODE		(1 << 21)
#define	LOAD_INTEREST_MODE		(1 << 22)
#define	QUIT_MODE			(1 << 23)

#define	PTZ_UP			1
#define	PTZ_DOWN		2
#define	PTZ_RIGHT		4
#define	PTZ_LEFT		8
#define	PTZ_UP_LEFT		(PTZ_UP | PTZ_LEFT)
#define	PTZ_UP_RIGHT		(PTZ_UP | PTZ_RIGHT)
#define	PTZ_DOWN_LEFT		(PTZ_DOWN | PTZ_LEFT)
#define	PTZ_DOWN_RIGHT		(PTZ_DOWN | PTZ_RIGHT)
#define	PTZ_ZOOM_IN		16
#define	PTZ_ZOOM_OUT		17
#define	PTZ_FOCUS_FAR		18
#define	PTZ_FOCUS_NEAR		19
#define	PTZ_HOME		20
#define	VISCA_QUIT		21
#define	PTZ_PAN_STOP		22
#define	PTZ_ZOOM_STOP		23
#define	PTZ_FOCUS_STOP		24
#define	PTZ_RELATIVE_POSITION	25
#define	PTZ_APERTURE_OPEN	26
#define	PTZ_APERTURE_CLOSE	27
#define	PTZ_ZOOM		28
#define	PTZ_ABSOLUTE_POSITION	29
#define	PTZ_FOCUS		30
#define	PTZ_ZOOM_AND_FOCUS	31

#define	PTZ_LITTLE_MOTION_MODE			0
#define	PTZ_LITTLE_ZOOM_MODE			1
#define	PTZ_LITTLE_FOCUS_MODE			2
#define	PTZ_LITTLE_ZOOM_AND_FOCUS_MODE		3

#define	PTZ_WINDOW_LIMIT	6

#define	V4L_STOP	0
#define	V4L_RIGHT	1
#define	V4L_LEFT	2
#define	V4L_DOWN	4
#define	V4L_UP		8
#define	V4L_ZOOM_OUT	16
#define	V4L_ZOOM_IN	32
#define	V4L_FOCUS_FAR	64
#define	V4L_FOCUS_NEAR	128
#define	V4L_AUTOFOCUS	256

#define	USE_YOLO_MODEL_OPEN_IMAGES	0
#define	USE_YOLO_MODEL_COCO		1

#define	YOLO_CFG_FILENAME	"yolov3-openimages.cfg"
#define	YOLO_WEIGHTS_FILENAME	"yolov3-openimages.weights"
#define	YOLO_NAMES_FILENAME	"openimages.names"

#define	YOLO_ALT_CFG_FILENAME		"yolov3.cfg"
#define	YOLO_ALT_WEIGHTS_FILENAME	"yolov3.weights"
#define	YOLO_ALT_NAMES_FILENAME		"coco.names"

#define	MULTIPIP_SIDE_RIGHT	1
#define	MULTIPIP_SIDE_LEFT	2
#define	MULTIPIP_SIDE_TOP	3
#define	MULTIPIP_SIDE_BOTTOM	4

#define	CAMERA_TYPE_CAMERA				0
#define	CAMERA_TYPE_TEXT				1
#define	CAMERA_TYPE_PIPED				2
#define	CAMERA_TYPE_DESKTOP				3
#define	CAMERA_TYPE_IMAGE				4
#define	CAMERA_TYPE_BLANK				5
#define	CAMERA_TYPE_WINDOW				6
#define	CAMERA_TYPE_AV					7
#define	CAMERA_TYPE_HTML				8
#define	CAMERA_TYPE_PSEUDO				9
#define	CAMERA_TYPE_PLUGIN				10
#define	CAMERA_TYPE_SOURCED				11
#define	CAMERA_TYPE_ALTERNATING			12
#define	CAMERA_TYPE_ALL					13
#define	CAMERA_TYPE_SINGLE_FRAME_FILE	14
#define	CAMERA_TYPE_EDGE_DETECT			15
#define	CAMERA_TYPE_CHROMAKEY			16
#define	CAMERA_TYPE_OSG					17
#define	CAMERA_TYPE_TIMER				18
#define	CAMERA_TYPE_CLOCK				19
#define	CAMERA_TYPE_DYNAMIC_TEXT		20
#define	CAMERA_TYPE_ALERT				21
#define	CAMERA_TYPE_SLIDESHOW			22
#define	CAMERA_TYPE_VECTOR				23
#define	CAMERA_TYPE_SPLIT				24

#define	MODE_MOVING		1
#define	MODE_RESIZING	2
#define	MODE_TRIMMING	3
#define	MODE_ROTATING	4

#define	TRANSITION_NONE				0
#define	TRANSITION_BLEND			1
#define	TRANSITION_L2R_WIPE			2
#define	TRANSITION_R2L_WIPE			3
#define	TRANSITION_T2B_WIPE			4
#define	TRANSITION_B2T_WIPE			5
#define	TRANSITION_FADE_FROM_BLACK	6
#define	TRANSITION_FADE_TO_BLACK	7
#define	TRANSITION_PLUGIN			8

#define	DRAWING_MODE_NONE					0
#define	DRAWING_MODE_GENERAL				1
#define	DRAWING_MODE_TEXT					2
#define	DRAWING_MODE_LINE					3
#define	DRAWING_MODE_RECTANGLE				4
#define	DRAWING_MODE_POLYGON				5
#define	DRAWING_MODE_FREEHAND				6
#define	DRAWING_MODE_DELETE					7
#define	DRAWING_MODE_HIDE					8
#define	DRAWING_MODE_SHOW_ALL				9
#define	DRAWING_MODE_HIDE_ALL				10
#define	DRAWING_MODE_LOOP					11
#define	DRAWING_MODE_ELLIPSE				12
#define	DRAWING_MODE_IMAGE					13
#define	DRAWING_MODE_PIXELATE				14
#define	DRAWING_MODE_RECTANGLE_PASSTHRU		15
#define	DRAWING_MODE_POLYGON_PASSTHRU		16
#define	DRAWING_MODE_ELLIPSE_PASSTHRU		17

#define	FREEHAND_SHAPE_SQUARE			0
#define	FREEHAND_SHAPE_CIRCLE			1
#define	FREEHAND_SHAPE_STAMP			2
#define	FREEHAND_SHAPE_KEY				3
#define	FREEHAND_SHAPE_ERASE_SQUARE		4
#define	FREEHAND_SHAPE_ERASE_CIRCLE		5

#define	PIXELATE_MODE_PIXELATE		0
#define PIXELATE_MODE_BLUR		1

#define	MY_CAP_ARROW			8
#define	MY_TYPE_CURVES			16

#define	POINT_TYPE_CURVE		1

#define	KEY_TOGGLE_RECORD					0
#define	KEY_DELETE_IMMEDIATE				1
#define	KEY_TOGGLE_PTZ_JOYSTICK				2
#define	KEY_INCREASE_PTZ_LITTLE_SPEED		3
#define	KEY_DECREASE_PTZ_LITTLE_SPEED		4
#define	KEY_CYCLE_PTZ_LITTLE_MODE			5
#define	KEY_PTZ_HOME						6
#define	KEY_CYCLE_DOWN_THUMBGROUP			7
#define	KEY_CYCLE_UP_THUMBGROUP				8
#define	KEY_DISPLAY_THUMBGROUP_0			9
#define	KEY_DISPLAY_THUMBGROUP_1			10
#define	KEY_DISPLAY_THUMBGROUP_2			11
#define	KEY_DISPLAY_THUMBGROUP_3			12
#define	KEY_DISPLAY_THUMBGROUP_4			13
#define	KEY_DISPLAY_THUMBGROUP_5			14
#define	KEY_DISPLAY_THUMBGROUP_6			15
#define	KEY_DISPLAY_THUMBGROUP_7			16
#define	KEY_DISPLAY_THUMBGROUP_8			17
#define	KEY_DISPLAY_THUMBGROUP_9			18
#define	KEY_LITTLE_MOTION_1					19
#define	KEY_LITTLE_MOTION_2					20
#define	KEY_LITTLE_MOTION_3					21
#define	KEY_LITTLE_MOTION_4					22
#define	KEY_LITTLE_MOTION_5					23
#define	KEY_LITTLE_MOTION_6					24
#define	KEY_LITTLE_MOTION_7					25
#define	KEY_LITTLE_MOTION_8					26
#define	KEY_LITTLE_MOTION_OTHER_1			27
#define	KEY_LITTLE_MOTION_OTHER_2			28
#define	KEY_LITTLE_MOTION_OTHER_3			29
#define	KEY_LITTLE_MOTION_OTHER_4			30
#define	KEY_LITTLE_MOTION_OTHER_5			31
#define	KEY_LITTLE_MOTION_OTHER_6			32
#define	KEY_LITTLE_MOTION_OTHER_7			33
#define	KEY_LITTLE_MOTION_OTHER_8			34
#define	KEY_REVIEW							35
#define	KEY_LOCAL_ZOOM_IN					36
#define	KEY_LOCAL_ZOOM_OUT					37
#define	KEY_TOGGLE_FROZEN					38
#define	KEY_SNAPSHOT						39
#define	KEY_SNAPSHOT_OTHER					40
#define	KEY_DISPLAY_SPLIT_SELECTION_0		41
#define	KEY_DISPLAY_SPLIT_SELECTION_1		42
#define	KEY_DISPLAY_SPLIT_SELECTION_2		43
#define	KEY_DISPLAY_SPLIT_SELECTION_3		44
#define	KEY_DISPLAY_SPLIT_SELECTION_4		45
#define	KEY_DISPLAY_SPLIT_SELECTION_5		46
#define	KEY_DISPLAY_SPLIT_SELECTION_6		47
#define	KEY_DISPLAY_SPLIT_SELECTION_7		48
#define	KEY_DISPLAY_SPLIT_SELECTION_8		49
#define	KEY_DISPLAY_SPLIT_SELECTION_9		50
#define	KEY_SCALE_VIDEO_UP					51
#define	KEY_SCALE_VIDEO_DOWN				52
#define	KEY_SCALE_VIDEO_RESET				53
#define	KEY_DISPLAY_ELEMENTS				54
#define	KEY_EXIT							55
#define	KEY_OPEN_MENU						56
#define	KEY_OPEN_CAMERAS					57
#define	KEY_OPEN_AUDIO						58
#define	KEY_OPEN_PTZ						59

#define	FILTER_TYPE_VIDEO			0
#define	FILTER_TYPE_AUDIO			1
#define	FILTER_TYPE_VIDEO_BUILT_IN	2

#define	DARK_GRAY	64
#define	LIGHT_GRAY	65
#define	DARK_RED	66
#define	DARK_BLUE	67
#define	BLACK		68
#define	WHITE		69
#define	YELLOW		70
#define	GRAY		71
#define	RED			72
#define	BLUE		73
#define	CYAN		74

#define	FONT_STYLE_BOLD		1
#define	FONT_STYLE_ITALIC	2
#define	FONT_STYLE_OUTLINE	4

#define	TRIM_MODE_TOP		0
#define	TRIM_MODE_BOTTOM	1
#define	TRIM_MODE_LEFT		2
#define	TRIM_MODE_RIGHT		3

#define	DRAG_MODE_MOVE		0
#define	DRAG_MODE_RESIZE	1
#define	DRAG_MODE_CROP		2
#define	DRAG_MODE_ROTATE	3

#define	CHROMA_ON_GREEN		0
#define	CHROMA_ON_BLUE		1

#define	GRADIENT_DIRECTION_VERTICAL		0
#define	GRADIENT_DIRECTION_HORIZONTAL	1

#define	MATRIX_STATE_TYPE_TRANSLATE		0
#define	MATRIX_STATE_TYPE_ROTATE		1
#define	MATRIX_STATE_TYPE_SCALE			2

#define	INSTRUMENT_COMMAND_SET			0
#define	INSTRUMENT_COMMAND_REPEAT		1
#define	INSTRUMENT_COMMAND_CYCLE		2
#define	INSTRUMENT_COMMAND_ONCE			3

#define	MW_MODE_NONE					0
#define	MW_MODE_TRANSPARENCY			1
#define	MW_MODE_ROTATION				2
#define	MW_MODE_STACKING_ORDER			3

#define	MISC_COPY_DYNAMIC				0
#define	MISC_COPY_STATIC				1
#define	MISC_COPY_MASK					2
#define	MISC_COPY_CROP					3
#define	MISC_COPY_FILL					4
#define	MISC_COPY_TEXT					5
#define	MISC_COPY_MAGNIFY				6
#define	MISC_COPY_RECTANGLE				7
#define	MISC_COPY_BORDER				8
#define	MISC_COPY_REVERSE				9
#define	MISC_COPY_BRIGHTEN				10
#define	MISC_COPY_DARKEN				11
#define	MISC_COPY_HFLIP					12
#define	MISC_COPY_VFLIP					13
#define	MISC_COPY_SATURATE				14
#define	MISC_COPY_DESATURATE			15
#define	MISC_COPY_VIDEO_SETTINGS		16

#define	EDITING_MISC_MOVE				0
#define	EDITING_MISC_RESIZE				1

#define	SHAPE_NO_TYPE					0

#define	SHAPE_MODE_MOVE					0
#define	SHAPE_MODE_RESIZE				1
#define	SHAPE_MODE_THICKNESS			2

#define	IM_RECTANGLE					0
#define	IM_PIXELATE						1
#define	IM_RECTANGLE_PASSTHRU			2
#define	IM_IMAGE						3
#define	IM_ELLIPSE						4
#define	IM_FREEHAND						5
#define	IM_LINE							6
#define	IM_TEXT							7
#define	IM_ELLIPSE_PASSTHRU				8

#define	SNAPSHOT_TRIGGER_BUTTON			0
#define	SNAPSHOT_TRIGGER_START			1
#define	SNAPSHOT_TRIGGER_RECORD			2
#define	SNAPSHOT_TRIGGER_CONTINUOUS		3

#define	CLOCK_TYPE_NONE					0
#define	CLOCK_TYPE_TOD					1
#define	CLOCK_TYPE_ELAPSED				2

#define	ON_RECORD_BUTTON				0
#define	ON_SCHEDULE						1
#define	ON_DETECT_LIGHT					2
#define	ON_DETECT_DARK					4
#define	ON_DETECT_MOTION				8
#define	ON_DETECT_OBJECT				16
#define	ON_TRIGGER_CAMERA				32

#define	BUTTON_ON_RECORD_BUTTON			0
#define	BUTTON_ON_SCHEDULE				1
#define	BUTTON_ON_DETECT_LIGHT			2
#define	BUTTON_ON_DETECT_DARK			3
#define	BUTTON_ON_DETECT_MOTION			4
#define	BUTTON_ON_DETECT_OBJECT			5
#define	BUTTON_ON_TRIGGER_CAMERA		6

#define	FOLLOW_MODE_NONE						0
#define	FOLLOW_MODE_DISPLAY_RECORDING_CAMERA	1
#define	FOLLOW_MODE_RECORDING_FOLLOWS_DISPLAY	2

#define	SIDE_RIGHT	0
#define	SIDE_LEFT	1

#define	SCROLL_MODE			0
#define	RUBBERBAND_MODE		1
#define	REPOSITION_MODE		2
#define	GUIDELINE_MODE		3

#define	HORIZONTAL_GUIDELINE	0
#define	VERTICAL_GUIDELINE		1

#define	SHADE_MODE_DARK		0
#define	SHADE_MODE_LIGHT	1

#define	OPEN_RIGHT			1
#define	OPEN_LEFT			2
#define	OPEN_UP				3
#define	OPEN_DOWN			4

#define	OPENING				0
#define	CLOSING				1

#define	KEY_DOWN			0
#define	KEY_UP				1
#define	KEY_RIGHT			2
#define	KEY_LEFT			3

#define	AUDIO_DISPLAY_NONE		0
#define	AUDIO_DISPLAY_FREQUENCY	1
#define	AUDIO_DISPLAY_AMPLITUDE	2

#define	STREAMING_FILE			0
#define	STREAMING_NET			1
#define	STREAMING_NDI			2

#define	SEND_NDI_VIDEO			0
#define	SEND_NDI_AUDIO			1

#define	NDI_SEND_VIDEO_FORMAT_BGRX	0
#define	NDI_SEND_VIDEO_FORMAT_RGBX	1
#define	NDI_SEND_VIDEO_FORMAT_I420	2
#define	NDI_SEND_VIDEO_FORMAT_UYVA	3
#define	NDI_SEND_VIDEO_FORMAT_UYVY	4

#define	VISCA_INTERFACE_TYPE_ERROR	-1
#define	VISCA_INTERFACE_TYPE_SERIAL	0
#define	VISCA_INTERFACE_TYPE_TCP	1
#define	VISCA_INTERFACE_TYPE_UDP	2
#define	VISCA_INTERFACE_TYPE_NDI	3

#define	PAN_TILT_STYLE_BUTTONS		0
#define	PAN_TILT_STYLE_JOYSTICK		1

#define	ALERT_DISPLAY_MODE_ALL			0
#define	ALERT_DISPLAY_MODE_FIRST_LINE	1
#define	ALERT_DISPLAY_MODE_LAST_LINE	2

#define	ALERT_TRIGGER_MODE_CHANGED		0
#define	ALERT_TRIGGER_MODE_CREATED		1

#define	SORT_NAME_ASCENDING				0
#define	SORT_NAME_DESCENDING			1
#define	SORT_SIZE_ASCENDING				2
#define	SORT_SIZE_DESCENDING			3
#define	SORT_TYPE_ASCENDING				4
#define	SORT_TYPE_DESCENDING			5
#define	SORT_TIMESTAMP_ASCENDING		6
#define	SORT_TIMESTAMP_DESCENDING		7

#define	FILE_SELECTOR_VIEW_STYLE_DETAILS	0
#define	FILE_SELECTOR_VIEW_STYLE_ICONS		1

#define	MY_SCROLL_LAYOUT_LIST			0
#define	MY_SCROLL_LAYOUT_GRID			1

#define	DRAG_MODE_LEFT_TOP		1
#define	DRAG_MODE_RIGHT_TOP		2
#define	DRAG_MODE_LEFT_BOTTOM	3
#define	DRAG_MODE_RIGHT_BOTTOM	4
#define	DRAG_MODE_LEFT			5
#define	DRAG_MODE_RIGHT			6
#define	DRAG_MODE_TOP			7
#define	DRAG_MODE_BOTTOM		8

#define	FRAME_OPERATION_PROPORTIONAL_RESIZE	0
#define	FRAME_OPERATION_FREE_RESIZE			1
#define	FRAME_OPERATION_ROTATE				2
#define	FRAME_OPERATION_CROP				3
#define	FRAME_OPERATION_DELETE				4

#define	FRAME_OBJECT_TYPE_IMAGE_WINDOW	0
#define	FRAME_OBJECT_TYPE_IMMEDIATE		1

struct	NamedKeys
{
	char	*name;
	int	val;
};

class	ReviewWin;
class	MyWin;
class	Muxer;
class	V4L_Button;
class	PTZ_Button;
class	MyVISCACamera;
class	Camera;
class	ImageWindow;
class	PulseMicrophone;
class	ProgressScrubber;
class	Immediate;
class	ImmediateDrawingWindow;
class	CommandKeySettingsWindow;
class	EmbedAppSettings;
class	FltkPluginWindow;
class	QuickText;
class	PopupMenu;
class	DragGroup;
class	DragWindow;
class	MyGroup;
class	PTZ_Window;
class	NewSourceWindow;
class	MenuButton;
class	FilterButton;
class	MyMenuButton;
class	MyInput;
class	MySlider;
class	ColorSlider;
class	MiscCopy;
class	ImmediateNameWindow;

class	ShortcutWindow : public Fl_Window
{
public:
			ShortcutWindow(Fl_Button *b, int xx, int yy, int ww, int hh);
			~ShortcutWindow();

	int		handle(int event);

	Fl_Button	*button;
};

class	MyButton : public Fl_Button
{
public:
			MyButton(int xx, int yy, int ww, int hh, char *lbl = NULL);
			~MyButton();

	int		handle(int event);

	PopupMenu	*popup;
	char		path[256];
};

class	MyToggleButton : public Fl_Toggle_Button
{
public:
			MyToggleButton(int xx, int yy, int ww, int hh, char *lbl = NULL);
			~MyToggleButton();

	int			handle(int event);

	PopupMenu	*popup;
	char		path[256];
};

class	MyLightButton : public Fl_Light_Button
{
public:
			MyLightButton(int xx, int yy, int ww, int hh, char *lbl = NULL);
			~MyLightButton();

	int			handle(int event);

	PopupMenu	*popup;
	char		path[256];
};

class	MyRepeatButton : public Fl_Repeat_Button
{
public:
			MyRepeatButton(int xx, int yy, int ww, int hh, char *lbl = NULL);
			~MyRepeatButton();

	int			handle(int event);

	PopupMenu	*popup;
	char		path[256];
};

class	MyImageButton : public Fl_Button
{
public:
					MyImageButton(Mat& in_mat, int xx, int yy, int ww, int hh, char *lbl = NULL);
					~MyImageButton();

	void			draw();

	Mat				mat;
};

class	MyFileImageButton : public Fl_Button
{
public:
					MyFileImageButton(int xx, int yy, int ww, int hh, char *lbl = NULL);
					~MyFileImageButton();

	void			draw();

	Mat				mat;
};

class	MyColorChooser : public Fl_Color_Chooser
{
public:
			MyColorChooser(int xx, int yy, int ww, int hh);
			~MyColorChooser();
};

class	MyGroup : public Fl_Group
{
public:
			MyGroup(int xx, int yy, int ww, int hh);
			MyGroup(int xx, int yy, int ww, int hh, char *lbl);
};

class	ResizeGroup : public MyGroup
{
public:
			ResizeGroup(MyWin *in_win, int xx, int yy, int ww, int hh);
	int		handle(int event);

	MyWin	*my_window;
};

class	DragWindow : public Fl_Double_Window
{
public:
			DragWindow(int ww, int hh);
			DragWindow(int ww, int hh, char *lbl);
			DragWindow(int xx, int yy, int ww, int hh);
			DragWindow(int xx, int yy, int ww, int hh, char *lbl);
			~DragWindow();
	int		handle(int event);

	int		last_x;
	int		last_y;
};

class	Dialog : public DragWindow
{
public:
			Dialog(int ww, int hh, char *lbl);
			Dialog(int xx, int yy, int ww, int hh, char *lbl);
			~Dialog();
	int		handle(int event);
	void	resize(int xx, int yy, int ww, int hh);
	void	draw();

	Fl_Box		*title_box;
	MyButton	*close;
	int			expanded;
	int			old_w;
	int			old_h;
};

class	MyBox : public Fl_Box
{
public:
	MyBox(int xx, int yy, int ww, int hh, char *lbl) : Fl_Box(xx, yy, ww, hh)
	{
		my_label = strdup(lbl);
		Fl_Box::label(my_label);
	}
	MyBox(int xx, int yy, int ww, int hh) : Fl_Box(xx, yy, ww, hh) 
	{
		my_label = NULL;
	}
	~MyBox()
	{
		free(my_label);
		my_label = NULL;
	}
	void	label(char *lbl)
	{
		if(my_label != NULL)
		{
			free(my_label);
			my_label = NULL;
		}
		my_label = strdup(lbl);
		Fl_Box::label(my_label);
	}
	char	*my_label;
};

class	FileInfo
{
public:
					FileInfo(char *in_filename);
					~FileInfo();

		char		*filename;
		long int	size;
		time_t		timestamp;
		char		*description;
		int			is_dir;
};

class	MyScroll : public Fl_Scroll
{
public:
				MyScroll(int in_item_width, int in_row_height, int xx, int yy, int ww, int hh);
				~MyScroll();

	int			handle(int event);
	void		Add(Fl_Widget *);
	void		add(Fl_Widget *);
	void		clear();

	void		SelectNext();
	void		SelectPrev();
	void		SelectNextRow();
	void		SelectPrevRow();
	void		ScrollToSelection();
	void		DisplayAsSelected(Fl_Widget *select);
	void		SelectFirstVisible();

	Fl_Widget	*item[32768];
	int			item_cnt;
	Fl_Widget	*selection;
	int			item_width;
	int			row_height;
	int			layout;
};

class	FileSelector : public Dialog
{
public:
					FileSelector(char *lbl, char *in_filter, char *result, int select_dir, int new_file);
					~FileSelector();
	int				handle(int event);
	void			draw();

	void			Update(char *path);
	void			UpdateSort();
	void			SortFilenames();
	void			Preview();
	void			*GetThumbnail(char *filename, int sz);

	MyScroll		*scroll;
	MyButton		*accept;
	MyButton		*cancel;

	char			initial_directory[4096];
	FileInfo		*file_list[32768];
	int				file_list_cnt;
	char			current_path[4096];
	char			*current_selection;
	int				select_dir;
	int				new_file;
	char			*filter;
	char			hot_filter[4096];
	int				sort_style;
	int				previewing;
	int				view_style;
	int				use_result;

	MyInput			*path;
	MyButton		*desktop;
	MyButton		*documents;
	MyButton		*downloads;
	MyButton		*home;
	MyButton		*music;
	MyButton		*pictures;
	MyButton		*root;
	MyButton		*videos;
	MyButton		*initial;
	MyButton		*up;
	MyButton		*refresh;
	MyButton		*view_type;
	MyButton		*preview;
	MyButton		*sort_name;
	MyButton		*sort_size;
	MyButton		*sort_type;
	MyButton		*sort_timestamp;
};

class	RelabelWindow : public Dialog
{
public:
			RelabelWindow(MyWin *win, Fl_Button *b, int xx, int yy, int ww, int hh);
			~RelabelWindow();

	Fl_Input	*input;
	Fl_Button	*button;
};

class	DragGroup : public Fl_Group
{
public:
			DragGroup(int xx, int yy, int ww, int hh);
			DragGroup(int xx, int yy, int ww, int hh, char *lbl);
			~DragGroup();
	int		handle(int event);

	int		last_x;
	int		last_y;
};

class	ResizeFrame : public DragGroup
{
public:
			ResizeFrame(MyWin *in_win, int xx, int yy, int ww, int hh);
			~ResizeFrame();

	void	draw();
	int		handle(int event);
	void	show();
	void	resize(double xx, double yy, double ww, double hh);
	void	Use(int in_type, Fl_Widget *in_use);
	int		AdjustForImmediateLine();
	int		AdjustImmediateLinePosition(int dx, int dy);

	MyWin		*my_window;
	Fl_Widget	*use;
	int			object_type;
	int		mode;
	int		potential_mode;
	int		drag_start_x;
	int		drag_start_y;
	double	dx;
	double	dy;
	double	dw;
	double	dh;
	int		original_w;
	int		original_h;
	double	proportion;
	int		operation;
	int		inactive;
	int		ignore_release;
};

class	SlidingElement : public DragGroup
{
public:
			SlidingElement(MyWin *in_win, int in_direction, int xx, int yy, int ww, int hh, char *lbl = NULL);
			~SlidingElement();
	void	show();
	void	hide();
	int		handle(int event);
	void	TrueHide();
	void	TrueShow();

	MyWin	*my_window;
	int		direction;
	int		in_motion;
	int		animated;
	int		behavior;
	int		final;
};

class	AudioInfo
{
public:
			AudioInfo(MyWin *in_win, int nn, int in_rate, int in_channels, SAMPLE *in_wav)
			{
				my_window = in_win;
				wav = in_wav;
				number_of_samples = nn;
				sample_rate = in_rate;
				channels = in_channels;
			};
			~AudioInfo()
			{
				if(wav != NULL) free(wav);
			};
	MyWin	*my_window;
	SAMPLE	*wav;
	int		number_of_samples;
	int		sample_rate;
	int		channels;
};

class	SourceMultiline : public Fl_Multiline_Input
{
public:
				SourceMultiline(int xx, int yy, int ww, int hh, char *lbl);
				~SourceMultiline();
	int			handle(int event);
};

class	Guideline
{
public:
			Guideline(MyWin *in_win, int in_type, int in_pos);
			~Guideline();

	MyWin	*my_window;
	int		type;
	int		pos;
	int		hide;
};

class	PlayAudioButton : public MyButton
{
public:
			PlayAudioButton(MyWin *in_win, int xx, int yy, int ww, int hh, char *lbl);
			~PlayAudioButton();
	void	Play();

	MyWin	*my_window;
	char	*path;
};

class	AudioLibraryList : public Dialog
{
public:
					AudioLibraryList(MyWin *my_win);
					~AudioLibraryList();
	void			show();

	MyWin			*my_window;

	Fl_Scroll		*scroll;
	MyButton		*close_button;

	int				vertical_offset;
};

class	AudioLibrary : public Dialog
{
public:
					AudioLibrary(MyWin *my_win);
					~AudioLibrary();
	void			show();
		
	void			Load(char *filename);
	void			Save(char *filename);
	void			Add(char *in_name, char *in_path);

	Fl_Input		*name_input[1024];
	MyButton		*path_button[1024];
	MyButton		*play_button[1024];

	char			*filename[1024];
	char			*name[1024];
	int				number_of_entries;

	MyWin			*my_window;
	Fl_Scroll		*scroll;
	MyButton		*add_button;
	MyButton		*save_button;
	MyButton		*cancel_button;
};

class	VideoThumbnailGroup : public SlidingElement
{
public:
			VideoThumbnailGroup(MyWin *in_win, int xx, int yy, int ww, int hh);
			~VideoThumbnailGroup();
	int		handle(int event);

	void		CycleDownThumbgroup();
	void		CycleUpThumbgroup();
	void		ScrollDownThumbgroup();
	void		ScrollUpThumbgroup();
	int			DisplayThumbgroup(int nn);
	void		ScrollToDisplayed();

	MyWin		*my_window;
	int			hovering;
	int			start_thumbgroup;
};

class	MainMenu : public SlidingElement
{
public:
				MainMenu(MyWin *in_win, int xx, int yy, int ww, int hh);
				~MainMenu();
	int			handle(int event);
	void		draw();
	void		show();
	void		hide();

	void		AddButton(MenuButton *in);
	void		Advance();
	void		Retreat();
	void		Do();
	void		Select(MenuButton *in);
	void		ClearSelection();

	MyWin		*my_window;
	int			hovering;
	MenuButton	*menu_button[1024];
	int			menu_button_cnt;
	int			selected;
};

class	CurrentFPSWindow : public DragGroup
{
public:
			CurrentFPSWindow(MyWin *in_win, int xx, int yy, int ww, int hh);
			~CurrentFPSWindow();
	void	draw();

	MyWin		*my_window;
	long int	starting_time;
	long int	running_time;
	int			showing;
};

class	Shape : public Fl_Box
{
public:
				Shape(MyWin *in_win, int in_x, int in_y, int in_w, int in_h);
				~Shape();
	void		draw();
	int			handle(int event);
	void		Remove();
	void		DragMove(Camera *cam);
	void		DragResize(Camera *cam);
	void		DragThickness(Camera *cam);

	MyWin		*my_window;
	int			type;

	int			xx;
	int			yy;
	int			ww;
	int			hh;
	int			last_x;
	int			last_y;
	int			mode;
	int			layer;
	int			hidden;
	int			highlight;
	int			thickness;
	int			filled;
	int			erase;

	int			background_r;
	int			background_g;
	int			background_b;
	int			background_a;
	int			foreground_r;
	int			foreground_g;
	int			foreground_b;
	int			foreground_a;
	
	int			font;
	int			style;
	int			font_sz;

	Mat			aux;
	Camera		*source;
	Camera		*destination;
	PopupMenu	*popup;
};

class	ShapeRectangle : public Shape
{
public:
				ShapeRectangle(MyWin *in_win, Camera *in_cam, int in_x, int in_y, int in_w, int in_h, 
					int filled,
					int in_thick,
					int in_erase,
					int fr, int fg, int fb, int fa, 
					int br, int bg, int bb, int ba);
				~ShapeRectangle();
	void		draw();
	int			handle(int in_event);
};

class	MiscVideoSettingsWindow : public Dialog
{
public:
		MiscVideoSettingsWindow(MyWin *in_win);
		~MiscVideoSettingsWindow();
	int	handle(int event);

	MyWin		*my_window;

	double		contrast;
	double		brightness;
	double		saturation;
	double		hue;
	double		intensity;

	MySlider	*contrast_slider;
	MySlider	*brightness_slider;
	MySlider	*saturation_slider;
	MySlider	*hue_slider;
	MySlider	*intensity_slider;
};

class	MiscCopy
{
public:
				MiscCopy(Camera *in_source, int in_type, Mat local, int immediate_display, char *in_str, int in_xx, int in_yy, int in_ww, int in_hh);
				~MiscCopy();

	Mat			mat;
	int			xx;
	int			yy;
	int			ww;
	int			hh;
	int			red;
	int			green;
	int			blue;
	int			alpha;
	double		brightness;
	double		saturation;
	double		hue;
	double		intensity;
	double		contrast;
	Camera		*source;
	Camera		*destination[128];
	int			dest_x[128];
	int			dest_y[128];
	int			dest_display[128];
	int			destination_cnt;
	int			type;
	int			display;
	char		*aux_str;
	QuickText	*quick_text;
};

class	LayerLabelButton : public MyToggleButton
{
public:
			LayerLabelButton(MyWin *in_win, int in_layer, int x, int y, int w, int h, char *lbl);
			~LayerLabelButton();
	void	draw();

	MyWin	*my_window;
	int		layer;
};

class	FaceDetect
{
public:
			FaceDetect();
			~FaceDetect();
	void	Detect(Mat& img, double scale);

	CascadeClassifier cascade;
};

class	MatrixState
{
public:
					MatrixState();
					~MatrixState();

		char		name[256];
		int			type;
		int			command;
		int			frames;
		int			current_frame;

		double			start_x;
		double			start_y;
		double			start_z;
		double			end_x;
		double			end_y;
		double			end_z;
		double			current_x;
		double			current_y;
		double			current_z;

		osg::Node	*node;
};

class	InstrumentWindow : public Dialog
{
public:
				InstrumentWindow(MyWin *in_win, Camera *in_cam, int ww, int hh);
				~InstrumentWindow();
	int			handle(int event);
	void		Populate();
	void		PopulateFromCamera();

	MyWin				*my_window;
	Camera				*my_camera;

	osg::Node			*node[128];
	int					node_cnt;
	int					widget_cnt;

	MyButton			*go_button;
	MyButton			*close_button;

	Fl_Input			*frames[128];
	Fl_Float_Input		*start_x_in[128];
	Fl_Float_Input		*start_y_in[128];
	Fl_Float_Input		*start_z_in[128];

	MyButton			*command[128];

	Fl_Float_Input		*end_x_in[128];
	Fl_Float_Input		*end_y_in[128];
	Fl_Float_Input		*end_z_in[128];
};

class	PopupMenu : public Fl_Window
{
public:
					PopupMenu(int xx, int yy, int ww, int hh);
					~PopupMenu();
	int				handle(int event);
	void			Resize(int xx, int yy, int ww, int hh);
	void			Fit();

	Fl_Hold_Browser	*browser;
};

class	DragBox : public Fl_Box
{
public:
			DragBox(MyGroup **parent_list, int parent_cnt, int xx, int yy, int ww, int hh, char *lbl);
			~DragBox();
	int		handle(int event);

	MyGroup	**parent_list;
	int			parent_cnt;
	int			last_x;
	int			last_y;
	MyGroup	*old_parent;
	int			index;
};

class	ArrangeGroup : public MyGroup
{
public:
				ArrangeGroup(Fl_Scroll *in_scroll, int in_item_h, int xx, int yy, int ww, int hh, char *lbl = NULL);
	void		add(Fl_Widget *wid);
	Fl_Scroll	*scroll;
	int			item_h;
	int			limit;
};

class	PTZ_LockWindow : public Dialog
{
public:
				PTZ_LockWindow(MyWin *in_win);
				~PTZ_LockWindow();
	void		draw();
	int			handle(int event);
	void		Populate();

	MyWin		*my_window;

	Fl_Scroll		*scroll;
	MyGroup			*ptz_list;
	ArrangeGroup	*assigned_camera_list;
	ArrangeGroup	*unassigned_camera_list;
};

class	FilterDialog : public Fl_Double_Window
{
public:
				FilterDialog(MyWin *in_win, int xx, int yy, int ww, int hh, char *lbl);
				~FilterDialog();
	int			handle(int event);
	void		draw();

	MyWin		*my_window;

	Fl_Box		*my_box;

	double		number[10];
	char		*str[128];
	int			y_marker[10];
	int			selected;
	int			disable;
	int			limit;
};

class	ThresholdFilterDialog : public FilterDialog
{
public:
				ThresholdFilterDialog(MyWin *in_win, int xx, int yy, int ww, int hh, char *lbl);
				~ThresholdFilterDialog();
	int			handle(int event);
	void		draw();
};

class	GrayscaleFilterDialog : public FilterDialog
{
public:
				GrayscaleFilterDialog(MyWin *in_win, int xx, int yy, int ww, int hh, char *lbl);
				~GrayscaleFilterDialog();
};

class	InvertFilterDialog : public FilterDialog
{
public:
				InvertFilterDialog(MyWin *in_win, int xx, int yy, int ww, int hh, char *lbl);
				~InvertFilterDialog();
};

class	EdgeDetectFilterDialog : public FilterDialog
{
public:
				EdgeDetectFilterDialog(MyWin *in_win, int xx, int yy, int ww, int hh, char *lbl);
				~EdgeDetectFilterDialog();
	int			handle(int event);
	void		draw();
};

class	BrightnessFilterDialog : public FilterDialog
{
public:
				BrightnessFilterDialog(MyWin *in_win, int xx, int yy, int ww, int hh, char *lbl);
				~BrightnessFilterDialog();
	int			handle(int event);
	void		draw();
};

class	ContrastFilterDialog : public FilterDialog
{
public:
				ContrastFilterDialog(MyWin *in_win, int xx, int yy, int ww, int hh, char *lbl);
				~ContrastFilterDialog();
	int			handle(int event);
	void		draw();
};

class	SaturationFilterDialog : public FilterDialog
{
public:
				SaturationFilterDialog(MyWin *in_win, int xx, int yy, int ww, int hh, char *lbl);
				~SaturationFilterDialog();
	int			handle(int event);
	void		draw();
};

class	HueFilterDialog : public FilterDialog
{
public:
				HueFilterDialog(MyWin *in_win, int xx, int yy, int ww, int hh, char *lbl);
				~HueFilterDialog();
	int			handle(int event);
	void		draw();
};

class	ClaheFilterDialog : public FilterDialog
{
public:
				ClaheFilterDialog(MyWin *in_win, int xx, int yy, int ww, int hh, char *lbl);
				~ClaheFilterDialog();
	int			handle(int event);
	void		draw();
};

class	ColorIntensityFilterDialog : public FilterDialog
{
public:
				ColorIntensityFilterDialog(MyWin *in_win, int xx, int yy, int ww, int hh, char *lbl);
				~ColorIntensityFilterDialog();
	int			handle(int event);
	void		draw();
};

class	BlurFilterDialog : public FilterDialog
{
public:
				BlurFilterDialog(MyWin *in_win, int xx, int yy, int ww, int hh, char *lbl);
				~BlurFilterDialog();
	int			handle(int event);
	void		draw();
};

class	CropFilterDialog : public FilterDialog
{
public:
				CropFilterDialog(MyWin *in_win, int xx, int yy, int ww, int hh, char *lbl);
				~CropFilterDialog();
	int			handle(int event);
	void		draw();
};

class	ScaleFilterDialog : public FilterDialog
{
public:
				ScaleFilterDialog(MyWin *in_win, int xx, int yy, int ww, int hh, char *lbl);
				~ScaleFilterDialog();
	int			handle(int event);
	void		draw();
};

class	BlendFilterDialog : public FilterDialog
{
public:
				BlendFilterDialog(MyWin *in_win, int xx, int yy, int ww, int hh, char *lbl);
				~BlendFilterDialog();
	int			handle(int event);
	void		draw();
};

class	BevelFilterDialog : public FilterDialog
{
public:
				BevelFilterDialog(MyWin *in_win, int xx, int yy, int ww, int hh, char *lbl);
				~BevelFilterDialog();
	int			handle(int event);
	void		draw();
};

class	GradientFilterDialog : public FilterDialog
{
public:
				GradientFilterDialog(MyWin *in_win, int xx, int yy, int ww, int hh, char *lbl);
				~GradientFilterDialog();
	int			handle(int event);
	void		draw();
};

class	MenuButton : public MyButton
{
public:
				MenuButton(MainMenu *in_menu, int font_sz, int xx, int yy, int ww, int hh, char *lbl);
				~MenuButton();
	int			handle(int event);
	void		draw();
	void		show();
	void		hide();

	int			hover;
	MainMenu	*my_menu;
};

class	ObjectMenu : public Dialog
{
public:
					ObjectMenu(MyWin *in_win);

	MyWin			*my_window;
	int				object_page;
	MyButton		*object_name_button[1024];
	MyButton		*object_clear_button;
	MyButton		*object_all_button;
	MyButton		*object_apply_all_button;
	MyButton		*object_done_button;
	MyButton		*object_next_button;
	MyButton		*object_prev_button;
};

class	ListMenu : public Fl_Window
{
public:
				ListMenu(void *in_win, int xx, int yy, int ww, int hh, char *lbl);
				~ListMenu();
	void		Add(Fl_Widget *wid);
	void		Clear();
	int			handle(int event);
	void		ScrollToItem(Fl_Widget *wid);

	void		*my_window;
	Fl_Scroll	*scroll;
	int			item_cnt;
	int			current_item;
	Fl_Widget	*item[4096];
};

class	CodecSelectionWindow : public Dialog
{
public:
		CodecSelectionWindow(MyWin *in_win);
		~CodecSelectionWindow();

	MyWin	*my_window;
	
	char	container_selected[256];
	char	extension_selected[256];
	char	audio_codec_selected[256];
	char	video_codec_selected[256];

	enum AVCodecID audio_codec_id;
	enum AVCodecID video_codec_id;

	ListMenu	*container;
	ListMenu	*audio_codec;
	ListMenu	*video_codec;

	Fl_Window	*outcome;
	MyButton	*cancel;
	MyButton	*accept;
};


class	ColorItWindow : public Dialog
{
public:
				ColorItWindow(MyWin *in_win);
				~ColorItWindow();
	void		hide();
	void		show();
	int			handle(int event);

	MyWin		*my_window;
	int			last_x;
	int			last_y;

	ColorSlider	*red_tolerance;
	ColorSlider	*green_tolerance;
	ColorSlider	*blue_tolerance;

	ColorSlider	*red_replace;
	ColorSlider	*green_replace;
	ColorSlider	*blue_replace;
	ColorSlider	*alpha_replace;
};

class	ColorDialog : public Dialog
{
public:
			ColorDialog(MyWin *in_win, int ww, int hh, char *title = NULL, int *in_red = NULL, int *in_green = NULL, int *in_blue = NULL, int *in_alpha = NULL);
			~ColorDialog();
	void	draw();
	int		handle(int event);

	MyWin		*my_window;

	ColorSlider	*red;
	ColorSlider	*green;
	ColorSlider	*blue;
	ColorSlider	*alpha;

	int			*client_red;
	int			*client_green;
	int			*client_blue;
	int			*client_alpha;

	Fl_Box		*sample;
	MyButton	*close;

	int			last_x;
	int			last_y;
};

class	FontSample : public Fl_Box
{
public:
		FontSample(ImmediateDrawingWindow *in_idw, int xx, int yy, int ww, int hh, char *lbl);
		~FontSample();
	void	draw();
	ImmediateDrawingWindow	*idw;
};

class	LineSample : public Fl_Box
{
public:
		LineSample(ImmediateDrawingWindow *in_idw, int xx, int yy, int ww, int hh);
		~LineSample();
	void	draw();

	ImmediateDrawingWindow	*idw;
	int	line_style;
};

class	RectangleSample : public Fl_Box
{
public:
		RectangleSample(ImmediateDrawingWindow *in_idw, int xx, int yy, int ww, int hh);
		~RectangleSample();
	void	draw();

	ImmediateDrawingWindow	*idw;
	int	line_style;
};

class	FreehandSample : public Fl_Box
{
public:
		FreehandSample(ImmediateDrawingWindow *in_idw, int xx, int yy, int ww, int hh);
		~FreehandSample();
	void	draw();

	ImmediateDrawingWindow	*idw;
	int	line_style;
	char	key;
	Mat	freehand_mat;
};

class	TextEditWindow : public Dialog
{
public:
					TextEditWindow(MyWin *in_win, Camera *in_cam, MiscCopy *in_misc);
					~TextEditWindow();

	MyWin			*my_window;
	Camera			*my_camera;
	MiscCopy		*my_misc;

	char			selected_font[4096];
	
	Fl_Box				*font_output;
	Fl_Hold_Browser		*font_browser;
	Fl_Hor_Slider		*font_red_slider;
	Fl_Output			*font_red_output;
	Fl_Hor_Slider		*font_green_slider;
	Fl_Output			*font_green_output;
	Fl_Hor_Slider		*font_blue_slider;
	Fl_Output			*font_blue_output;
	Fl_Hor_Slider		*font_alpha_slider;
	Fl_Output			*font_alpha_output;
	Fl_Hor_Slider		*font_size_slider;
	Fl_Output			*font_size_output;
	Fl_Choice			*drawing_text_box;
	MyLightButton		*text_italic_button;
	MyLightButton		*text_bold_button;
	MyLightButton		*text_outline_button;
	Fl_Multiline_Input	*text_initial_text;
};

class	ImmediateDrawingWindow : public Dialog
{
public:
			ImmediateDrawingWindow(MyWin *in_win, int xx, int yy, int ww, int hh, char *lbl);
			~ImmediateDrawingWindow();
	int		handle(int event);
	void	hide();
	void	GeneralSetup();
	void	TextSetup();
	void	LineSetup();
	void	RectangleSetup();
	void	PixelateSetup();
	void	ImageSetup();
	void	FreehandSetup();
	void	Color(int in_color);
	void	CloseAll();
	void	ClearSelectedWidget();

	MyButton	*general;
	MyButton	*text;
	MyButton	*line;
	MyButton	*rectangle;
	MyButton	*ellipse;
	MyButton	*image_im;
	MyButton	*polygon;
	MyButton	*loop;
	MyButton	*freehand;
	MyButton	*pixelate;
	MyButton	*passthru_rectangle;
	MyButton	*passthru_ellipse;
	MyButton	*passthru_polygon;
	MyButton	*delete_im;
	MyButton	*hide_im;
	MyButton	*hide_all;
	MyButton	*show_all;
	Fl_Boxtype	text_box_type;
	Immediate	*selected_widget;

	MyGroup	*general_group;
		Fl_Hor_Slider		*grid_size_slider;
		Fl_Output			*grid_size_output;
		LayerLabelButton	*layer_select_button[8];
		MyToggleButton	*layer_visible_button[8];
		MyButton			*layer_up_button[8];
		MyButton			*layer_down_button[8];
		MyButton			*paste_button;
		MyButton			*clear_copy_buffer_button;
		MyButton			*save_button;
		MyButton			*load_button;

	MyGroup	*text_group;
		Fl_Box				*font_output;
		FontSample			*font_sample;
		Fl_Hold_Browser		*font_browser;
		Fl_Hor_Slider		*font_red_slider;
		Fl_Output			*font_red_output;
		Fl_Hor_Slider		*font_green_slider;
		Fl_Output			*font_green_output;
		Fl_Hor_Slider		*font_blue_slider;
		Fl_Output			*font_blue_output;
		Fl_Hor_Slider		*font_alpha_slider;
		Fl_Output			*font_alpha_output;
		Fl_Hor_Slider		*font_size_slider;
		Fl_Output			*font_size_output;
		Fl_Choice			*drawing_text_box;
		MyToggleButton	*text_foreground_color_button;
		MyToggleButton	*text_background_color_button;
		MyToggleButton	*text_outline_color_button;
		MyLightButton		*text_italic_button;
		MyLightButton		*text_bold_button;
		MyLightButton		*text_outline_button;
		Fl_Multiline_Input	*text_initial_text;

	MyGroup	*line_group;
		LineSample		*line_sample;
		Fl_Hor_Slider	*line_red_slider;
		Fl_Output		*line_red_output;
		Fl_Hor_Slider	*line_green_slider;
		Fl_Output		*line_green_output;
		Fl_Hor_Slider	*line_blue_slider;
		Fl_Output		*line_blue_output;
		Fl_Hor_Slider	*line_alpha_slider;
		Fl_Output		*line_alpha_output;
		Fl_Hor_Slider	*line_size_slider;
		Fl_Output		*line_size_output;
		MyToggleButton	*line_style_solid_button;
		MyToggleButton	*line_style_dash_button;
		MyToggleButton	*line_style_dot_button;
		MyToggleButton	*line_style_flat_button;
		MyToggleButton	*line_style_round_button;
		MyToggleButton	*line_style_square_button;
		MyToggleButton	*line_style_arrow_button;
		MyToggleButton	*line_style_erase_button;
		MyToggleButton	*line_style_join_miter_button;
		MyToggleButton	*line_style_join_round_button;
		MyToggleButton	*line_style_join_bevel_button;
		MyToggleButton	*line_type_segments_button;
		MyToggleButton	*line_type_curves_button;

	MyGroup	*rectangle_group;
		RectangleSample	*rectangle_sample;
		Fl_Hor_Slider	*rectangle_red_slider;
		Fl_Output		*rectangle_red_output;
		Fl_Hor_Slider	*rectangle_green_slider;
		Fl_Output		*rectangle_green_output;
		Fl_Hor_Slider	*rectangle_blue_slider;
		Fl_Output		*rectangle_blue_output;
		Fl_Hor_Slider	*rectangle_alpha_slider;
		Fl_Output		*rectangle_alpha_output;
		Fl_Hor_Slider	*rectangle_size_slider;
		Fl_Output		*rectangle_size_output;
		MyToggleButton	*rectangle_style_solid_button;
		MyToggleButton	*rectangle_style_dash_button;
		MyToggleButton	*rectangle_style_dot_button;
		MyToggleButton	*rectangle_style_join_miter_button;
		MyToggleButton	*rectangle_style_join_round_button;
		MyToggleButton	*rectangle_style_join_bevel_button;
		MyToggleButton	*rectangle_filled_button;
		MyToggleButton	*rectangle_erase_button;

	MyGroup	*freehand_group;
		FreehandSample	*freehand_sample;
		Fl_Hor_Slider	*freehand_red_slider;
		Fl_Output		*freehand_red_output;
		Fl_Hor_Slider	*freehand_green_slider;
		Fl_Output		*freehand_green_output;
		Fl_Hor_Slider	*freehand_blue_slider;
		Fl_Output		*freehand_blue_output;
		Fl_Hor_Slider	*freehand_alpha_slider;
		Fl_Output		*freehand_alpha_output;
		Fl_Hor_Slider	*freehand_size_slider;
		Fl_Output		*freehand_size_output;
		MyToggleButton	*freehand_shape_square_button;
		MyToggleButton	*freehand_shape_circle_button;
		MyToggleButton	*freehand_shape_erase_square_button;
		MyToggleButton	*freehand_shape_erase_circle_button;
		MyToggleButton	*freehand_shape_stamp_button;
		MyButton			*freehand_shape_stamp_file_button;
		MyToggleButton	*freehand_shape_key_button;
	MyGroup	*image_group;
		RectangleSample		*image_sample;
		MyToggleButton	*image_file_button;
		Fl_Input			*image_file_path;
	MyGroup	*pixelate_group;
		Fl_Hor_Slider		*pixelate_size_slider;
		Fl_Output			*pixelate_size_output;
		MyToggleButton	*pixelate_pixelate_button;
		MyToggleButton	*pixelate_blur_button;

	MyWin		*my_window;
	int			mode;
	int			last_x;
	int			last_y;
	int			orig_w;
	int			orig_h;

	int			grid_size;
	double		gsf;

	int		font_num;
	char	selected_font[4096];
	char	freehand_filename[4096];
	int		font_color_red;
	int		font_color_green;
	int		font_color_blue;
	int		font_color_alpha;
	int		back_color_red;
	int		back_color_green;
	int		back_color_blue;
	int		back_color_alpha;
	int		outline_color_red;
	int		outline_color_green;
	int		outline_color_blue;
	int		outline_color_alpha;
	int		font_size;
	int		using_background_color;

	int		line_color_red;
	int		line_color_green;
	int		line_color_blue;
	int		line_color_alpha;
	int		line_size;
	int		line_style;
	int		erase;

	int		rectangle_color_red;
	int		rectangle_color_green;
	int		rectangle_color_blue;
	int		rectangle_color_alpha;
	int		rectangle_size;
	int		rectangle_style;
	int		rectangle_filled;
	int		rectangle_erase;

	char	freehand_key;
	Mat		freehand_mat;
	Mat		image_mat;

	int		pixelate_size;
};

class	MyInput : public Fl_Input
{
public:
		MyInput(int xx, int yy, int ww, int hh, char *lbl) : Fl_Input(xx, yy, ww, hh, lbl)
		{
			labelcolor(FL_YELLOW);
			textcolor(FL_WHITE);
			textsize(9);
			box(FL_FRAME_BOX);
			color(FL_BLACK);
			cursor_color(FL_WHITE);
			when(FL_WHEN_ENTER_KEY | when());
		};
		~MyInput()
		{
		};
};

class	MyFloatInput : public Fl_Float_Input
{
public:
			MyFloatInput(int xx, int yy, int ww, int hh, char *lbl) : Fl_Float_Input(xx, yy, ww, hh, lbl)
			{
				labelcolor(FL_YELLOW);
				textcolor(FL_WHITE);
				textsize(9);
				box(FL_FRAME_BOX);
				color(FL_BLACK);
				cursor_color(FL_WHITE);
			}
			~MyFloatInput()
			{
			};
};

class	ImDefault
{
public:
				ImDefault();
				~ImDefault();
	void		Copy(Immediate *in_im, ImDefault *source);
	void		SetToDialog();

	MyWin		*my_window;
	Immediate	*my_immediate;
	int			width;
	int			red;
	int			green;
	int			blue;
	int			alpha;
	int			background_red;
	int			background_green;
	int			background_blue;
	int			background_alpha;
	int			style;
	int			shape;
	int			use_size;
	int			filled;
	int			selecting;
	int			erase;
	int			box_type;

	int			*xx;
	int			*yy;
	int			*pt_type;
	int			cnt;

	char		key;
	char		freehand_filename[4096];
	Mat			freehand_mat;
	Mat			my_mat;

	int			italic;
	int			bold;
	int			outline;
	int			font_alpha;
	int			outline_alpha;
	char		font_name[128];
	char		image_file_path[4096];
};

class	QuickText : public Fl_Multiline_Input
{
public:
			QuickText(Camera *in_cam, char *init_text, int xx, int yy, int ww, int hh);
			~QuickText();
	int		handle(int event);
	void	draw();

	Camera	*my_camera;
	int		focused;
	int		alpha;
	int		outline;
	int		bold;
	int		italic;
	char	use_font[128];
};

class	ImText : public ImDefault, public Fl_Multiline_Input
{
public:
			ImText(MyWin *in_win, Immediate *in_im, int xx, int yy, int ww, int hh);
			~ImText();
	int		handle(int event);
	void	draw();

	int		focused;
};

class	ImRectangle : public ImDefault, public MyGroup
{
public:
			ImRectangle(MyWin *in_win, Immediate *in_im, int xx, int yy, int ww, int hh);
			~ImRectangle();
	void	draw();
};

class	ImPixelate : public ImDefault, public MyGroup
{
public:
			ImPixelate(MyWin *in_win, Immediate *in_im, int xx, int yy, int ww, int hh);
			~ImPixelate();
	void	draw();
	void	resize(int xx, int yy, int ww, int hh);
};

class	ImRectanglePassThru : public ImDefault, public MyGroup
{
public:
			ImRectanglePassThru(MyWin *in_win, Immediate *in_im, int xx, int yy, int ww, int hh);
			~ImRectanglePassThru();
	void	draw();
};

class	ImEllipsePassThru : public ImDefault, public MyGroup
{
public:
			ImEllipsePassThru(MyWin *in_win, Immediate *in_im, int xx, int yy, int ww, int hh);
			~ImEllipsePassThru();
	void	draw();
};

class	ImImage : public ImDefault, public MyGroup
{
public:
			ImImage(MyWin *in_win, Immediate *in_im, int xx, int yy, int ww, int hh);
			~ImImage();
	void	draw();
};

class	ImEllipse : public ImDefault, public MyGroup
{
public:
		ImEllipse(MyWin *in_win, Immediate *in_im, int xx, int yy, int ww, int hh);
		~ImEllipse();
	void	draw();
};

class	ImFreehand : public ImDefault, public MyGroup
{
public:
		ImFreehand(MyWin *in_win, Immediate *in_im, int xx, int yy, int ww, int hh);
		~ImFreehand();
	void	draw();
};

class	ImLine : public ImDefault, public MyGroup
{
public:
		ImLine(MyWin *in_win, Immediate *in_im, int in_type, int xx, int yy, int ww, int hh);
		~ImLine();
	void	draw();
	void	resize(int xx, int yy, int ww, int hh);

	void	Extent(int& ix, int& iy, int& iw, int& ih);
	void	Extent();
	void	AddPoint(int in_x, int in_y);
	void	Revise(int in_x, int in_y);
	void	DoStamp(cairo_t *cr, double xx, double yy);
	void	ImageLine(cairo_t *cr, int x0, int y0, int x1, int y1, int in_sz);

	int		extent_x1;
	int		extent_y1;
	int		extent_x2;
	int		extent_y2;
};

class	ImAnim
{
public:
				ImAnim();
				ImAnim(int frame, Immediate *in_im);
				~ImAnim();

	void		Edit(int frame, Immediate *in_im);

	int			frame;
	double		xx;
	double		yy;
	double		ww;
	double		hh;
	double		angle;
	double		red;
	double		green;
	double		blue;
	double		alpha;
};

class	AnimButton : public Fl_Box
{
public:
			AnimButton(MyWin *in_win, int xx, int yy);
			~AnimButton();
	void	draw();
	int		handle(int event);

	int		frame;
};

class	AnimTimeline : public Fl_Window
{
public:
			AnimTimeline(MyWin *in_win, int xx, int yy, int ww, int hh);
			~AnimTimeline();
	void	draw();
	int		handle(int event);

	void	Reset();

	MyWin		*my_window;
	AnimButton	*frame_indicator;
	MyInput		*input;
	MyButton	*preview_button;
	int			range;
	int			start;
	int			current_frame;
};

class	Immediate : public MyGroup
{
public:
			Immediate(MyWin *in_win, Camera *in_cam, ImmediateDrawingWindow *in_idw, int xx, int yy, int ww, int hh);
			Immediate(Immediate *old, Camera *in_cam);
			Immediate(MyWin *in_win, Camera *in_cam, int xx, int yy, int ww, int hh);
			~Immediate();
	int		handle(int event);
	void	Draw();
	void	resize(int xx, int yy, int ww, int hh);

	void	Name();
	void	Hide();
	void	Show();
	void	CompleteRectangle(int xx, int yy);
	void	Move();
	void	Delete();
	void	ZipLeft();
	void	ZipRight();
	void	ZipUp();
	void	ZipDown();
	void	ShowPopup();
	void	Copy();
	void	GetColor(int& red, int& green, int& blue, int& alpha);
	void	SetColor(int red, int green, int blue, int alpha);
	void	KeyFrame();
	void	SetKeyframe();
	void	SetKeyframeAll();
	void	SetKey(int frame);
	void	EditKey(int frame);
	void	SortKeys();
	void	MeetKey();
	void	ResetAnimParameters();
	void	RemoveKeyframes();
	void	RemoveKeyframesFromAll();
	void	SaveParameters();
	void	RestoreInitialParameters();
	void	SaveAsJSON(FILE *fp);

	ImmediateDrawingWindow	*idw;
	ImmediateNameWindow		*inw;

	ImText					*text;
	ImLine					*line;
	ImRectangle				*rectangle;
	ImRectanglePassThru		*rectangle_passthru;
	ImEllipse				*ellipse;
	ImEllipsePassThru		*ellipse_passthru;
	ImFreehand				*freehand;
	ImPixelate				*pixelate;
	ImImage					*image_im;

	PopupMenu				*popup;

	char	*name;
	int		draw_it;
	int		immediate_type;
	int		im_type;
	MyWin	*my_window;
	Camera	*my_camera;
	int		hovering;
	int		dragging;
	int		initial_x;
	int		initial_y;
	int		last_x;
	int		last_y;
	int		layer;
	int		drag_mode;
	double	overall_alpha;
	int		use_as_mask;
	int		mw_mode;
	double	scale_w;
	double	scale_h;
	int		extent_w;
	int		extent_h;
	int		extent_taken;
	int		orig_w;
	int		orig_h;
	int		relative_x;
	int		relative_y;
	int		actively_drawing;
	int		crop_x;
	int		crop_y;
	int		crop_w;
	int		crop_h;
	double	angle;
	int		anim_flag;
	double	anim_x;
	double	anim_y;
	double	anim_ix;
	double	anim_iy;
	double	anim_iangle;
	double	anim_w;
	double	anim_h;
	double	anim_iw;
	double	anim_ih;
	double	anim_red;
	double	anim_green;
	double	anim_blue;
	double	anim_alpha;
	double	anim_ired;
	double	anim_igreen;
	double	anim_iblue;
	double	anim_ialpha;
	ImAnim	*anim[1024];
	int		anim_cnt;
	int		anim_index;
	int		anim_frame;
	int		anim_complete;
	int		anim_looping;
	int		save_initial;
	int		save_x;
	int		save_y;
	int		save_w;
	int		save_h;
	int		save_red;
	int		save_green;
	int		save_blue;
	int		save_alpha;
};

class	SelectOutputWindow : public Dialog
{
public:
		SelectOutputWindow(MyWin *in_win, int xx, int yy, int ww, int hh);
		~SelectOutputWindow();
	int	handle(int event);

	void	Populate();

	Fl_Pack				*pack;
	MyButton			*close;

	MyWin				*my_window;
	int					last_x;
	int					last_y;
};

class	EditOutputWindow : public Dialog
{
public:
		EditOutputWindow(MyWin *in_win, int xx, int yy, int ww, int hh);
		~EditOutputWindow();
	int	handle(int event);

	void	Populate();
	void	Debrief();
	void	Scan();
	void	NDI_Exclusive(Fl_Widget *which);

	MyWin				*my_window;
	Fl_Scroll			*scroll;
	Fl_Pack				*pack;
	MyLightButton		*button[128];
	Fl_Input			*name[128];
	Fl_Input			*preset[128];
	int					last_x;
	int					last_y;
};

class	CommandKeyGroup : public MyGroup
{
public:
		CommandKeyGroup(CommandKeySettingsWindow *in_win, int xx, int yy, int ww, int hh, char *lbl, char *val = "");
		~CommandKeyGroup();

	void	Close();
	void	value(char *val);

	CommandKeySettingsWindow	*my_window;

	Fl_Box		*lbl_box;
	Fl_Input	*value_input;
	MyButton	*value_button;
	MyMenuButton	*value_menu;
};

class	CommandKeySettingsWindow : public Dialog
{
public:
		CommandKeySettingsWindow(MyWin *in_win, int ww, int hh);
		~CommandKeySettingsWindow();

	void	CloseAll();

	MyButton	*accept;
	MyButton	*cancel;
	MyButton	*reset;

	MyWin		*my_window;
	CommandKeyGroup	*command_key_group[128];
	int		command_key_cnt;
};

class	ThumbButton : public MyButton
{
public:
		ThumbButton(MyWin *, int, int, int, int, int, char * = NULL);
		~ThumbButton();
	int	handle(int);
	void	draw();

	MyWin	*my_window;
	int		index;
	Mat		mat;
	Mat		use_mat;
	int		dragging;
	int		push_x;
	int		push_y;
};

class	ThumbGroup : public Fl_Group
{
public:
			ThumbGroup(MyWin *win, int idx, int xx, int yy, int ww, int hh);
	void	draw();
	int		handle(int event);
	void	resize(int xx, int yy, int ww, int hh);
	void	UpdateButtons(Camera *cam);

	MyWin		*my_win;
	ThumbButton	*thumb_button;
	MyButton	*alias_button;
	Fl_Input	*alias_input;
	MyButton	*remove;
	MyButton	*place;
	MyButton	*record;
	MyButton	*detect_motion;
	MyButton	*detect_object;
	MyButton	*instrument;
	MyButton	*set_color;
	MyButton	*set_text_color;
	MyButton	*pause_av;
	MyButton	*mute_av;
	int			index;
	int			displayed;

	Fl_Group		*V4L_Window;
	V4L_Button		*up_left;
	V4L_Button		*up;
	V4L_Button		*up_right;
	V4L_Button		*left;
	V4L_Button		*right;
	V4L_Button		*down_left;
	V4L_Button		*down;
	V4L_Button		*down_right;
	V4L_Button		*zoom_out;
	V4L_Button		*zoom_in;
	V4L_Button		*focus_far;
	V4L_Button		*focus_near;
	MyToggleButton	*autofocus;
};

class	MuxPreviewWindow : public Fl_Double_Window
{
public:
		MuxPreviewWindow(MyWin *in_win, int ww, int hh, char *title);
		~MuxPreviewWindow();

	int	handle(int event);
	void	draw();

	void	ResetMedia(char *path);

	MyWin		*my_window;
	VLC_Window	*vlc_window;
	ProgressScrubber	*progress_scrubber;
};

class	ProgressScrubber : public MyGroup
{
public:
		ProgressScrubber(MyWin *in_win, MuxPreviewWindow *, int x, int y, int w, int h);
		~ProgressScrubber();

	void	draw();

	int	Handle(int event);
	void	Position(double in_pos);

	MyWin	*my_window;
	MuxPreviewWindow *mux_preview;
	double	position;
	int	playing;
	int	play_x1;
	int	play_y1;
	int	play_x2;
	int	play_y2;
};

class	MyScrubber : public Fl_Window
{
public:
		MyScrubber(int x, int y, int w, int h);
		~MyScrubber();
	void	draw();
	int	handle(int);
	void	Callback(void (*cb)(void *, void *), void *); 

	void	AddTrim(int, int);
	void	ClearTrims();
	void	RemoveTrim(int);
	void	SetStartTrim(int nn);
	void	SetEndTrim(int nn);
	int	Value();
	void	Value(int);
	int	Range();
	void	Range(int);
	int	Scale(int);
	int	Descale(int);
	int	CheckTrim(int selected, int pos);
	void	SortTrim();
	int	CountTrim();

	int	range;
	int	current;
	int	trim_cnt;
	int	mode;
	int	selected_trim;
	int	current_trim;
	int	hot_trim;

	void	(*my_callback)(void *, void *);
	void	*my_callback_value;

	int	*start_trim;
	int	*end_trim;
};

class	MySlider : public Fl_Slider
{
public:
		MySlider(int, int, int, int, char * = NULL, MyButton *in_reset = NULL);
		~MySlider();
	void	draw();

	double		initial_value;
	MyButton	*reset;
};

class	ColorSlider : public MySlider
{
public:
				ColorSlider(int xx, int yy, int ww, int hh, double val, char *lbl);
				~ColorSlider();
};

class	TriggerWindow : public Dialog
{
public:
			TriggerWindow(MyWin *);
			~TriggerWindow();
	int		handle(int event);
	void	show();

	void				Update();

	MyWin				*main_win;
	int					last_x;
	int					last_y;

	MyButton			*done;
	MyButton			*clear;

	MyToggleButton	*day[7];
	Fl_Input			*start_time;
	Fl_Input			*stop_time;
	MyLightButton		*trigger[7];
	MySlider			*darkness_slider;

	ThumbButton			*thumbnail[128];
};

class	FakeWindow : public Fl_Double_Window
{
public:
		FakeWindow(MyWin *in_win, char *raw);
		~FakeWindow();
	void	draw();
	int	handle(int event);

	MyWin	*my_window;
	char	*raw_data;
	int	start_x;
	int	start_y;
	int	end_x;
	int	end_y;
	int	final_sx;
	int	final_sy;
	int	final_ww;
	int	final_hh;
	int	dragging;
};


class	GUI_SettingsWindow : public Dialog
{
public:
		GUI_SettingsWindow(MyWin *);
		~GUI_SettingsWindow();

	MyWin		*my_window;
	
	MyLightButton *hide_status_button;
	MyLightButton *retain_commands_button;
	MyLightButton *retain_cameras_button;
	MyLightButton *retain_audio_button;
	MyLightButton *retain_ptz_button;
	MyLightButton *retain_all_button;
	MyLightButton *animate_panels_button;
	MyLightButton *use_tooltips_button;
	MyLightButton *reverse_panels_button;
	MyLightButton *transparent_interface_button;

	Fl_Box		*status_color_box;
	MyButton	*status_color_button;
	Fl_Box		*background_color_box;
	MyButton	*background_color_button;
	Fl_Box		*text_color_box;
	MyButton	*text_color_button;
	Fl_Box		*highlight_color_box;
	MyButton	*highlight_color_button;
	Fl_Box		*gray_color_box;
	MyButton	*gray_color_button;
	Fl_Box		*dark_gray_color_box;
	MyButton	*dark_gray_color_button;
	Fl_Box		*red_color_box;
	MyButton	*red_color_button;
	Fl_Box		*dark_red_color_box;
	MyButton	*dark_red_color_button;
	Fl_Box		*blue_color_box;
	MyButton	*blue_color_button;
	Fl_Box		*dark_blue_color_box;
	MyButton	*dark_blue_color_button;
	Fl_Box		*cyan_color_box;
	MyButton	*cyan_color_button;
	Fl_Hold_Browser	*font_browser;

	unsigned char	background_color_r;
	unsigned char	background_color_g;
	unsigned char	background_color_b;
	unsigned char	background_color_a;

	unsigned char	highlight_color_r;
	unsigned char	highlight_color_g;
	unsigned char	highlight_color_b;
	unsigned char	highlight_color_a;

	unsigned char	text_color_r;
	unsigned char	text_color_g;
	unsigned char	text_color_b;
	unsigned char	text_color_a;

	unsigned char	gray_color_r;
	unsigned char	gray_color_g;
	unsigned char	gray_color_b;
	unsigned char	gray_color_a;

	unsigned char	dark_gray_color_r;
	unsigned char	dark_gray_color_g;
	unsigned char	dark_gray_color_b;
	unsigned char	dark_gray_color_a;

	unsigned char	red_color_r;
	unsigned char	red_color_g;
	unsigned char	red_color_b;
	unsigned char	red_color_a;

	unsigned char	dark_red_color_r;
	unsigned char	dark_red_color_g;
	unsigned char	dark_red_color_b;
	unsigned char	dark_red_color_a;

	unsigned char	cyan_color_r;
	unsigned char	cyan_color_g;
	unsigned char	cyan_color_b;
	unsigned char	cyan_color_a;

	unsigned char	blue_color_r;
	unsigned char	blue_color_g;
	unsigned char	blue_color_b;
	unsigned char	blue_color_a;

	unsigned char	dark_blue_color_r;
	unsigned char	dark_blue_color_g;
	unsigned char	dark_blue_color_b;
	unsigned char	dark_blue_color_a;
};

class	TransitionWindow : public Dialog
{
public:
					TransitionWindow(MyWin *);
					~TransitionWindow();
	void			Update();
	void			draw();

	void			ClearPluginSelection();

	MyWin			*my_window;
	MyButton		*to_black_button;
	MyButton		*blend_button;
	MyButton		*none_button;
	MyButton		*wipe_b2t_button;
	MyButton		*wipe_l2r_button;
	MyButton		*wipe_r2l_button;
	MyButton		*wipe_t2b_button;
	Fl_Box			*selection;
	MyLightButton	*transition_plugin_button[128];
};

class	SelectAudioWindow : public Dialog
{
public:
			SelectAudioWindow(MyWin *);
			~SelectAudioWindow();
	void	draw();

	MyWin					*my_window;
	NDIlib_find_instance_t	ndi_find;
};

class	SelectCameraWindow : public Dialog
{
public:
			SelectCameraWindow(MyWin *);
			~SelectCameraWindow();
	void	draw();

	MyWin	*my_window;
};

class	PseudoCameraWindow : public Dialog
{
public:
		PseudoCameraWindow(MyWin *);
		~PseudoCameraWindow();
	void	draw();

	MyButton	*pseudo[1024];

	MyWin		*my_window;
};

class	FilterPluginsWindow : public Dialog
{
public:
					FilterPluginsWindow(MyWin *win, int in_filter_type);
					~FilterPluginsWindow();
	int				handle(int event);
	void			Arrange(int col_flag = 0, int py = -1);

	int				last_x;
	int				last_y;
	int				filter_type;

	Fl_Pack			*available;
	Fl_Pack			*use;
	MyWin			*my_window;
	MyButton		*my_accept;
	MyButton		*my_cancel;
	MyButton		*use_none;
};

class	FilterButton : public Fl_Box
{
public:
						FilterButton(FilterPluginsWindow *in_win, int xx, int yy, int ww, int hh, char *lbl);
						~FilterButton();
	int					handle(int event);

	FilterPluginsWindow	*my_window;
	int					dragging;
	int					offset_x;
	int					offset_y;

	FilterDialog		*filter_dialog;
};


class	StandaloneDisplay : public Fl_Double_Window
{
public:
		StandaloneDisplay(Camera *in_cam, int ww, int hh, char *lbl);
		~StandaloneDisplay();
	void	draw();

	Camera	*cam;
	double	ratio_w;
	double	ratio_h;
};

class	VideoSettingsWindow : public Dialog
{
public:
			VideoSettingsWindow(MyWin *);
			~VideoSettingsWindow();
	void	Update();
	int		handle(int event);
	void	draw();

	MyWin	*main_win;
	Fl_Int_Input *output_w;
	Fl_Int_Input *output_h;

	MyToggleButton 		*timestamp_default;
	Fl_Input 				*timestamp_format;
	MyButton				*timestamp_color_button;
	MyButton				*timestamp_background_color_button;
	Fl_Int_Input			*timestamp_font_size;
	Fl_Int_Input			*timestamp_position_x;
	Fl_Int_Input			*timestamp_position_y;

	MySlider *fps_slider;
	MySlider *encode_fps_slider;
	MySlider *minimum_fps_slider;
	MySlider *capture_interval_slider;

	MyLightButton	*realtime_encoding_button;
	MyLightButton	*embed_pip_button;
	MyButton	*gather_codecs_button;
	MyLightButton	*record_all_button;
	MyLightButton	*frame_scaling_button;
	MyLightButton	*crop_scaling_button;
	MyLightButton	*crop_output_button;
	MyLightButton	*single_stream_button;
	MyLightButton	*create_tag_file_button;
	MyLightButton *display_recording_button;
	MyLightButton *recording_follow_display_button;
	MyLightButton	*html_background_transparent;
};

class	CameraSettingsWindow : public Dialog
{
public:
			CameraSettingsWindow(MyWin *);
			~CameraSettingsWindow();
	void	Update();
	int		handle(int event);
	void	draw();

	int		last_x;
	int		last_y;

	MyWin	*main_win;
	Fl_Input		*cam_alias;
	Fl_Int_Input	*display_w;
	Fl_Int_Input	*display_h;

	MySlider		 *contrast_slider;
	MySlider		 *brightness_slider;
	MySlider		 *saturation_slider;
	MySlider		 *hue_slider;
	MySlider		 *intensity_slider;
	MySlider		 *red_intensity_slider;
	MySlider		 *green_intensity_slider;
	MySlider		 *blue_intensity_slider;
	MySlider		 *alpha_intensity_slider;
	MySlider		 *aspect_x_slider;
	MySlider		 *aspect_y_slider;
	MySlider		 *motion_threshold_slider;
	MySlider		 *recognition_threshold_slider;
	MySlider		 *recognition_interval_slider;
	MySlider 		*capture_interval_slider;
	MySlider		 *retrieve_interval_slider;

	MyToggleButton	*apply_to_all_button;
	MyButton			*load_from;
};

class	SnapshotSettingWindow : public Dialog
{
public:
			SnapshotSettingWindow(MyWin *);
			~SnapshotSettingWindow();
	void	Update();
	int		handle(int event);
	void	draw();

	int		last_x;
	int		last_y;

	MyWin	*main_win;

	Fl_Input *filename_format;

	MySlider		*initial_delay_slider;
	MySlider		*repeat_seconds_delay_slider;
	MySlider		*repeat_minutes_delay_slider;
	MySlider		*scale_slider;
	MyLightButton	*snapshot_trigger_on_button;
	MyLightButton	*snapshot_trigger_on_start;
	MyLightButton	*snapshot_trigger_on_record;
	MyLightButton	*snapshot_continuous;
};

class	DetailWin : public Fl_Double_Window
{
public:
		DetailWin(int, int, char *);
		~DetailWin();

	void	draw();
	Mat	mat;
};

class	SourceSelectWindow : public Dialog
{
public:
			SourceSelectWindow(MyWin *win, int ww, int hh, char *lbl);
			~SourceSelectWindow();
	void	draw();
	int		handle(int event);

	void	Update();
	void	Set(char *str);
	
	Fl_Scroll	*scroll;
	Fl_Pack		*pack;
	Fl_Int_Input	*cols;
	Fl_Int_Input	*rows;

	MyWin	*my_window;
	int		cols_nn;
	int		rows_nn;
	int		cur_row;
	int		cur_col;
	char	*list[128];
	int		vertical_offset;
};

class	SaveFIFO
{
public:
			SaveFIFO(MyWin *in_win, int in_fd, int in_frame_sz, int ww, int hh, long int start_ts);
			~SaveFIFO();
	void		Save(void *, long int, long int);

	MyWin		*my_window;
	int		top;
	int		fd;
	int		done;
	int		frame_sz;
	int		width;
	int		height;
	long int	ts;
	long int	start_ts;
	long int	use_ts;
	void		*frame[128];
	pthread_mutex_t mutex[128];
};

class	DetectedObject
{
public:
	int	x;
	int	y;
	int	w;
	int	h;
	int	idx;
	double	confidence;
};

class	PIP
{
public:
		PIP(Camera *, int x, int y, int w, int h);
		~PIP();
	void	draw(int idx);

	Camera	*camera;
	int	x;
	int	y;
	int	w;
	int	h;
	int	visible;
};

class	NDISourceListWindow : public Dialog
{
public:
							NDISourceListWindow(MyWin *in_win);
							~NDISourceListWindow();
	void					Update();
	void					clear();

	MyWin					*my_window;
	MyButton				*ndi_source_button[33];
	NDIlib_find_instance_t	ndi_find;
	const NDIlib_source_t	*sources;
	uint32_t				num_sources;
	int						ndi_source_button_cnt;
	int						vertical_offset;
};

class	Camera
{
public:
					Camera(MyWin *in_win, int id, char *source, int num, double forced_fps, int requested_w, int requested_h, int rr = 0, int gg = 0, int bb = 0, int aa = 0, int t_rr = 255, int t_gg = 255, int t_bb = 255, int t_aa = 255, int chroma_color = CHROMA_ON_GREEN);
					~Camera();
	void			Resize(int ww, int hh);
	void			Capture(int test_only = 0);
	void			VideoEffects();
	void			ZoomBoxDisplay();
	VideoCapture    *CreateCameraCapture(char *source, int num);
	void			StartCapture();
	void			SnapshotFrame();
	int				DetectObjects(int *, int *, int *, int *);
	int				PostProcessRecognition(Mat &frame, const vector<Mat> &outs, int *out_x, int *out_y, int *width, int *height);
	int				Record();
	int				SetBackendFlag(char *);
	void			V4L_Command(int command);
	void			V4L_RepeatCommand(int command);
	int				V4L_Test();
	int				V4L_Test2();
	void			V4L_Motion(int direction);
	void			PrepImageForNet(Mat in_mat);
	void			AddPIP(PIP *);
	void			AddPIPByCamera(Camera *in_cam, int in_embed);
	void			RemovePIPByCamera(Camera *in_cam);
	void			DrawPIP();
	void			CompressImageWindowList();
	void			AddImageWindow(Camera *cam);
	void			OffsetPositionImageWindows(int off_x, int off_y);
	void			OffsetScaleImageWindows(double factor_w, double factor_h);
	void			RenderTextToMat(char *text, Mat *mat);
	void			CairoClock(Mat& mat, int show_digits, int xx, int yy, int ww, int hh, int in_hour, int in_min, int in_sec);
	void			ScrollTextList(char *);
	void			GrabSlideshow();
	void			GrabWindow();
	void			PositionAllButtonized();
	void			AddImmediate(Immediate *in);
	int				RemoveImmediate(Immediate *ptr);
	int				FindImmediate(Immediate *ptr);
	Immediate		*EventInImmediate();
	void			GrabWindowImage(Window win, Mat& use_mat);
	void			ColorIntensity(Mat frame, double red, double green, double blue, double alpha);
	void			ShowImmediateList();
	void			HideImmediateList();
	void			DrawImageWindowsBefore(int current_layer, int check_only, Mat& in_mat, int& moving_element, int& someone_is_dragging);
	void			DrawImageWindowsAfter();
	void			HighlightImageWindows();
	void			DrawEmbeddedPIP();
	void			DrawImageWindowGrid(int grid_size);
	void			DisplayAVWindow();
	double			FocusScore(Mat use_mat);
	void			SetSystemAlias();
	void			ColorIt();
	int				CheckRecursion(Camera *dest);
	int				CheckRecurseChildren(Camera *in, Camera *find);
	void			SetCairo();
	void			DrawFilterDialogs();
	void			RunFilters();
	void			RunInstruments();
	void			LowerALayer(int use_layer);
	void			RaiseALayer(int use_layer);
	int				FindLeft(void *sample, int layer, int xx, int yy, int ww, int hh);
	int				FindRight(void *sample, int layer, int xx, int yy, int ww, int hh);
	int				FindTop(void *sample, int layer, int xx, int yy, int ww, int hh);
	int				FindBottom(void *sample, int layer, int xx, int yy, int ww, int hh);
	void			PasteMat(Mat mat, int cx, int cy);
	void			MiscCopyCommands();
	void			BlurDetectedRegions();
	void			DrawShapes();
	void			HighlightShapes();
	void			SaveImmediate(char *filename);
	void			LoadImmediate(char *filename);
	void			TimestampFrame();
	void			TriggerSnapshot();
	void			UnTriggerSnapshot();
	void			GrabThisWindow();
	void			RecordOn();
	void			RecordOff();
	int				Triggers();
	int				ScheduleTrigger();
	int				DarknessTrigger();
	int				MotionTrigger();
	int				ObjectTrigger();
	void			PaintRecognizedObjects(int test_run);
	void			CaptureLoop();
	void			TransferHotMat(Mat& in_mat);
	void			Freeze();
	void			Defrost();
	void			RecvNDI(Mat& in_mat);
	void			SaveAsJSON(FILE *fp);
	void			ActivateBoundMics();
	void			BindMics();
	void			UnBindMics();
	int				TriggerAlert();
	int				DisplayAlert();
	void			ReadVectorFile(Mat& mat, char *filename);
	void			TestObjectDetection();
	void			SetObjectInAllOtherCameras();

	int					hot;
	Mat					hot_mat;
	int					hot_delay;
	int					hot_fps;

	int					type;
	char				path[4096];
	char				original_path[4096];
	char				alias[4096];
	int					capturing;
	int					power;
	int					failed;
	int					record;
	int					recording;
	int					triggers_requested;
	int					trigger_override;
	int					result_trigger;
	time_t				detect_time;
	int					requested_x;
	int					requested_w;
	int					requested_h;
	int					requested_y;
	int					record_trigger;
	int					schedule_start;
	int					schedule_stop;
	int					schedule_day;
	double				darkness_trigger;
	double				darkness_score;
	int					motion_score;
	int					ever_opened;
	int					static_initialized;
	long int			last_grab_time;
	int					grab_interval;
	long int			last_capture_time;
	int					newly_captured;
	double				capture_interval;
	int					cap_total_frames;
	int					cap_fourcc;
	int					cap_format;
	double				focus_score;
	int					font_sz;
	int					focus_using_samples;
	int					keep_focusing;
	int					focus_frame_ready;
	Camera				*source_camera;
	double				zoom;
	int					priority;
	int					width;
	int					height;
	int					id;
	int					orig_width;
	int					orig_height;
	int					capture_effects;
	VideoCapture		*cap;
	XImage				*shared_image;
	XShmSegmentInfo		shminfo;
	char				font_name[256];
	double				capture_scaling;
	Mat					mat;
	Mat					old_mat;
	Mat					motion_mat;
	Mat					reserve_mat;
	Mat					literal_mat;
	Mat					last_mat;
	unsigned long int	grab_window_id;
	int					once;
	SaveFIFO			*save_fifo;
	int					fd;
	int					total_frames;
	int					true_total_frames;
	int					since_frames;
	int					frame_cnt;
	time_t				last_time;
	double				fps;
	double				current_fps;
	int					old_fps;
	int					fps_cnt;
	time_t				since_time;
	time_t				elapsed;
	time_t				old_elapsed;
	time_t				start_timer;
	time_t				stop_timer;
	time_t				initial_timer;
	int					timer_format;
	int					analog;
	int					analog_size;
	int					military_clock;
	DetectedObject		detected_object[10];
	int					detected_object_cnt;
	int					detected_object_countdown;
	int					object_index[1024];
	char				format_code[256];
	char				*extra_url;
	char				*extra_css;
	char				*extra_js_once;
	char				*extra_js_always;
	FILE				*slideshow_fp;
	char				*slideshow_list[1024];
	int					slideshow_list_cnt;
	int					slideshow_current;
	Mat					slideshow_mat;
	int					split_cols;
	int					split_rows;
	char				*split_source[128];
	int					split_source_cnt;

	NDIlib_recv_instance_t	ndi_recv;
	int						ndi_capture;
	int						ndi_ptz;
	int						prefer_ndi;
	int						prefer_v4l;

	irc_session_t		*irc_session;
	char				irc_buffer[1024];
	int					irc_done;

	Immediate			**immediate_list;
	int					immediate_cnt;
	int					layer_state[8];
	int					edit_layer;

	char				pseudo_camera_name[256];
	void				*plugin_camera;
	StandaloneDisplay	*standalone_display;
	int					freeze_video;
	int					mute_video;
	double				alternate_interval;
	long int			alternate_time;
	int					alternate_index;
	cairo_t				*cairo_context;
	cairo_surface_t		*cairo_surface;
	unsigned char		color_it_r[128];
	unsigned char		color_it_g[128];
	unsigned char		color_it_b[128];
	unsigned char		color_it_tolerance_r[128];
	unsigned char		color_it_tolerance_g[128];
	unsigned char		color_it_tolerance_b[128];
	unsigned char		color_it_replace_r[128];
	unsigned char		color_it_replace_g[128];
	unsigned char		color_it_replace_b[128];
	unsigned char		color_it_replace_a[128];
	int					color_it_cnt;
	int					chroma_color;

	MyViewer			*osg_viewer;
	InstrumentWindow	*instrument_window;
	MatrixState			*matrix_state[128];
	int					matrix_state_cnt;

	int					crop_start_x;
	int					crop_start_y;
	int					use_crop_start;
	int					last_start_x;
	int					last_start_y;

	int					single_frame_fd;
	double				edge_blend;

	int					flip_horizontal;
	int					flip_vertical;
	double				brightness;
	double				saturation;
	double				hue;
	double				intensity;
	double				contrast;
	double				red_intensity;
	double				green_intensity;
	double				blue_intensity;
	double				alpha_intensity;
	int					motion_threshold;
	double				recognition_threshold;
	int					recognize_interval;
	double				forced_aspect_x;
	double				forced_aspect_y;

	int					zoom_box_display;
	int					zoom_box_x;
	int					zoom_box_y;
	int					zoom_box_w;
	int					zoom_box_h;

	Net					net;
	MyWin				*my_window;
	int					resuming;
	long int			paused_accumulation_ts;
	long int			paused_start_ts;
	long int			start_ts;
	long int			local_ts;

	long int			running_time;
	long int			starting_time;

	int					last;
	int					cx;
	int					cy;
	int					ccx;
	int					ccy;
	int					last_cx;
	int					last_cy;
	int					accel;
	int					trigger_cnt;
	int					trigger[128];

	int					stopped;

	int					pip_idx;
	int					keep_pip;
	PIP					*pip[32];

	int					image_sx;
	int					image_sy;
	double				display_width;
	double				display_height;

	ImageWindow			*image_window[128];
	int					image_window_cnt;
	int					red;
	int					green;
	int					blue;
	int					alpha;
	int					text_red;
	int					text_green;
	int					text_blue;
	int					text_alpha;

	VLC_Window			*av_window;
	HTML_Win			*html;

	FILE				*pipe_fp;
	pid_t				pipe_pid;
	int					pipe_in;
	int					pipe_out;

	int					list_length;
	int					list_position;
	int					pipe_done;
	int					piping_text;
	char				text_list[128][1024];

	int					grab_portion_x;
	int					grab_portion_y;
	int					grab_portion_w;
	int					grab_portion_h;

	void				*filter_plugin[128];
	char				*filter_plugin_name[128];
	int					filter_plugin_cnt;

	char				*filter_name[128];
	int					filter_cnt;
	FilterDialog		*filter_dialog[128];

	char				snapshot_filename_format[4096];
	int					snapshot_initial_delay;
	int					snapshot_repeat_delay;
	int					snapshot_trigger_condition;
	double				snapshot_scale;
	int					snapshot;

	int					ptz_lock_interface;
	int					ptz_lock_camera;
	int					v4l_pending_command;

	int					bound_mic_cnt;
	char				*bound_mic[128];

	char				alert_monitor_file[4096];
	char				alert_audio_file[4096];
	int					alert_trigger_mode;
	int					alert_display_mode;
	int					alert_duration;
	int					alert_did_exist;
	time_t				alert_end_time;
	int					alert_permanent_trigger;
	int					alert_opaque;
	char				alert_old_buffer[32768];

	int					v4l_capable;
	int					anim_preview;
};

class	MyVISCACamera : public VISCACamera_t
{
public:
	int		param_pan_limit;
	int		param_tilt_up_limit;
	int		param_tilt_down_limit;
	int		param_zoom_limit;
	int		param_pan_max_speed;
	int		param_tilt_max_speed;
};

class	V4L_Button : public MyButton
{
public:
		V4L_Button(ThumbGroup *, int, int, int, int, char *);
		~V4L_Button();
	int	handle(int);
	ThumbGroup	*my_win;
	int		zooming;
	int		focusing;
};

class	PTZ_Button : public MyButton
{
public:
				PTZ_Button(PTZ_Window *, int, int, int, int, char *);
				~PTZ_Button();
	int			handle(int);

	PTZ_Window	*my_window;
};

class	PulseMixer
{
public:
		PulseMixer(MyWin *in_win, int sz, int ch);
		~PulseMixer();
	void	Mix(PulseMicrophone *mic);
	void	Mix(SAMPLE *wav, double volume);
	void	Mute();
	void	Unmute();
	void	Stop();
	void	Resume();
	void	MixSupplemental(int idx, SAMPLE *wav, int number_of_samples, int in_channels);

	MyWin	*my_window;
	pthread_mutex_t	direct_mix_mutex;
	SAMPLE	*buffer;
	SAMPLE	*preserve;
	int	size;
	int	mix_ready;
	int	recording;
	int	first;
	int	done;
	int	mute;
	int	continued;
	int	out_fd;
	int	monitor;
	int	fft_calc;
	int	channels;

	PulseAudio	*pa_monitor[10];
	SAMPLE		*play_buffer[10];
	int			monitor_cnt;

	double		*fft_in_buffer;
	double		*fft_out_buffer;
	fftw_plan	fft_plan;
	int			fft_start_index;
	int			fft_spectro_size;
	double		fft_frequency[200];
	int			fft_frequency_cnt;

	SAMPLE		*supplemental_buffer[10];
	int			supplemental_current_position[10];
	int			supplemental_total_size[10];
};

class	PulseMicrophone : public PulseAudio
{
public:
			PulseMicrophone(MyWin *in_win, char *device_name, int hz, int ch);
			~PulseMicrophone();
	void	RecvNDI(SAMPLE *audio_buffer);
	void	Save(int fd);
	void	SaveAsJSON(FILE *fp);

	MyWin					*my_window;
	char					name[4096];
	void					*filter_plugin[128];
	char					*filter_plugin_name[128];
	int						filter_plugin_cnt;
	NDIlib_recv_instance_t	ndi_recv;
	int						in_use;
};

class	PulseAudioFilterWindow : public Dialog
{
public:
						PulseAudioFilterWindow(MyWin *in_win);
						~PulseAudioFilterWindow();
	void				show();

	MyToggleButton	*high_pass_button;
	MyToggleButton	*low_pass_button;
	MyToggleButton	*reverb_button;
	MyToggleButton	*compress_button;
	MySlider			*high_pass_slider;
	MySlider			*low_pass_slider;
	MySlider			*reverb_delay_slider;
	MySlider			*reverb_decay_slider;
	MySlider			*compress_high_slider;
	MySlider			*compress_low_slider;
	MySlider			*compress_percent_slider;

	MyButton			*close;

	MyWin				*my_window;
	PulseMicrophone		*mic;
};

class	PulseAudioButton : public MyGroup
{
public:
						PulseAudioButton(MyWin *, char *, int, int, int, int, int, int, char *);
						~PulseAudioButton();
	void				draw();
	int					handle(int event);
	void				show();
	void				Start();
	void				Stop();

	MyButton			*alias_button;
	MyToggleButton	*select_button;
	MyToggleButton	*filter_button;
	Fl_Hor_Fill_Slider	*volume1;
	Fl_Hor_Fill_Slider	*volume2;
	MyButton			*delete_button;
	MyToggleButton	*repeat_button;
	Fl_Multiline_Input	*alias_in;
	MyWin				*my_window;
	char				*device_name;
	PulseMicrophone		*microphone;
	int					peak;
	char				*alias;
};

class	MyMenuButton : public Fl_Menu_Button
{
public:
			MyMenuButton(int xx, int yy, int ww, int hh, char *lbl);
			~MyMenuButton();
	void	draw();
};

class	AudioSettingsWindow : public Dialog
{
public:
					AudioSettingsWindow(MyWin *in_win);
					~AudioSettingsWindow();
	void			show();

	void			SetToMyWin();
	
	MyWin			*my_window;
	MyMenuButton	*sample_rate;
	MyMenuButton	*channels;
	MyMenuButton	*display;
	MyLightButton	*direct_mix;
	MySlider		*incidental_volume_slider;
};

class	PTZ_Position
{
public:
			PTZ_Position(int set, int pan, int tilt, int zoom, int focus);
			~PTZ_Position();
	void	Set(int in_pan, int in_tilt, int in_zoom, int in_focus);
	void	UnSet();
	void	Save(FILE *fp);

	int	set;
	int	pan;
	int	tilt;
	int	zoom;
	int	focus;
};

class	AlertWindow : public Dialog
{
public:		
					AlertWindow(MyWin *in_win, int ww, int hh);
					~AlertWindow();

	MyWin			*my_window;
	NewSourceWindow	*new_source_window;
	Fl_Input		*alert_file_path;
	MyButton		*alert_file_button;
	Fl_Input		*alert_audio_file;
	MyButton		*alert_audio_file_button;
	MyLightButton	*alert_trigger_changed;
	MyLightButton	*alert_trigger_created;
	MyLightButton	*alert_display_all;
	MyLightButton	*alert_display_last_line;
	MyLightButton	*alert_display_first_line;
	Fl_Int_Input	*alert_duration;
	MyLightButton	*alert_opaque;
	MyButton		*cancel;
	MyButton		*accept;

	char			monitor_file[4096];
};

class	TimerWindow : public Dialog
{
public:		
					TimerWindow(MyWin *in_win, int ww, int hh);
					~TimerWindow();

	MyWin			*my_window;
	NewSourceWindow	*new_source_window;
	time_t			start_seconds;
	time_t			stop_seconds;
	int				format;
	int				analog;
	
	MyToggleButton	*use_clock;
	MyToggleButton	*use_timer;
	MyToggleButton	*use_military;
	MyToggleButton	*format0;
	MyToggleButton	*format1;
	MyToggleButton	*format2;
	MyToggleButton	*format3;
	Fl_Box				*start_label;
	Fl_Input			*start;
	Fl_Box				*stop_label;
	Fl_Input			*stop;
	MyButton			*cancel;
	MyButton			*accept;
};

class	AliasWindow : public Dialog
{
public:		
				AliasWindow(MyWin *in_win);
				~AliasWindow();
	int			handle(int event);
	void		show();

	Fl_Input	*alias;
	MyWin		*my_window;
};

class	ImmediateNameWindow : public Dialog
{
public:		
				ImmediateNameWindow(MyWin *in_win, Immediate *in_im);
				~ImmediateNameWindow();
	int			handle(int event);

	Fl_Input	*name;
	MyWin		*my_window;
	Immediate	*my_im;
};

class	SpecifyURLWindow : public Dialog
{
public:
						SpecifyURLWindow(MyWin *in_win);
						~SpecifyURLWindow();
	Fl_Input			*url;
	Fl_Multiline_Input	*css;
	MyButton			*accept;
	MyButton			*cancel;

	MyWin				*my_window;
};

class	SpecifyIRCWindow : public Dialog
{
public:
						SpecifyIRCWindow(MyWin *in_win);
						~SpecifyIRCWindow();
	Fl_Input			*server;
	Fl_Input			*port;
	Fl_Input			*user;
	Fl_Input			*password;
	Fl_Input			*channel;
	MyButton			*accept;
	MyButton			*cancel;

	MyWin				*my_window;
};

class	SelectX11Window : public Dialog
{
public:
		SelectX11Window(MyWin *in_win);
		~SelectX11Window();

	MyWin	*my_window;
};

class	NewSourceWindow : public Dialog
{
public:		
			NewSourceWindow(MyWin *in_win, int xx, int yy);
			~NewSourceWindow();
	int		handle(int event);
	void	Show(int edit_mode);
	void	hide();

	SourceMultiline		*source;
	Fl_Input			*alias;
	Fl_Float_Input		*width;
	Fl_Float_Input		*height;
	Fl_Int_Input		*font_sz;
	Fl_Hold_Browser		*font_browser;
	ColorSlider			*red;
	ColorSlider			*green;
	ColorSlider			*blue;
	ColorSlider			*alpha;
	ColorSlider			*text_red;
	ColorSlider			*text_green;
	ColorSlider			*text_blue;
	ColorSlider			*text_alpha;
	Fl_Box				*color_box;
	Fl_Box				*text_color_box;
	SelectCameraWindow	*select_camera_window;
	SelectX11Window		*select_x11_window;
	SelectAudioWindow	*select_audio_window;

	MyButton		*create;
	MyButton		*reset;
	MyButton		*cancel;
	MyButton		*camera_select;
	MyButton		*audio_select;
	MyButton		*box_select;
	MyButton		*window_select;
	MyButton		*desktop_select;
	MyButton		*av_file_select;
	MyButton		*vector_file_select;
	MyButton		*image_file_select;
	MyButton		*html_select;
	MyButton		*html_source_select;
	MyButton		*irc_source_select;
	MyButton		*ndi_source_select;
	MyButton		*sourced_select;
	MyButton		*edge_detect_select;
	MyButton		*chromakey_green_select;
	MyButton		*chromakey_blue_select;
	MyButton		*alternating_select;
	MyButton		*all_select;
	MyButton		*split_select;
	MyButton		*pipe_select;
	MyButton		*single_frame_file_select;
	MyButton		*clock_timer_select;
	MyButton		*dynamic_text_select;
	MyButton		*alert_select;
	MyButton		*slideshow_select;
	MyButton		*slideshow_directory_select;
	MyButton		*osg_select;
	MyButton		*pseudo_camera_select;
	MyButton		*plugin_camera_select;

	MyWin			*my_window;
	int				edit_mode;
};

class	EncodeSpeedWindow : public MyGroup
{
public:
		EncodeSpeedWindow(MyWin *in, int xx, int yy, int ww, int hh);
		~EncodeSpeedWindow();

	void	Reset();

	MyWin		*my_window;
	MyButton	*button[11];
	char		label_buf[11][8];
};

class	SelectButton : public Fl_Group
{
public:
				SelectButton(int xx, int yy, int ww, int hh, char *lbl);
				~SelectButton();
	void		SetCurrent(int);
	void		Next();
	void		Prev();
	void		Add(char *);

	MyButton	*prev;
	MyButton	*next;
	Fl_Box		*value_box;

	char		*list[128];
	int			current;
	int			total;
};

class	MonitorWindow : public Dialog
{
public:
				MonitorWindow(MyWin *in_win, int ww, int hh, char *lbl);
				~MonitorWindow();
	void		draw();
	int			handle(int event);
	void		ShowPopup();
	void		hide();

	MyWin		*my_window;
	Mat			mat;
	int			size;
	int			depth;
	int			vertical_offset;
	PopupMenu	*popup;
};

class	PanTiltJoystick : public Fl_Box
{
public:
				PanTiltJoystick(MyWin *in_win, PTZ_Window *in_ptz_window, int xx, int yy, int ww, int hh);
				~PanTiltJoystick();
	void		draw();
	int			handle(int event);
	void		Move();

	MyWin		*my_window;
	PTZ_Window	*ptz_window;
	int			pos_x;
	int			pos_y;
	int			dragging;
};

class	PTZ_Window : public SlidingElement
{
public:
			PTZ_Window(MyWin *in_win, char *in_alias, int in_instance, int xx, int yy, int ww, int hh);
			~PTZ_Window();
	int		handle(int event);
	void	draw();
	void	hide();
	void	show();

	int		AddInterfaceButton(int xx, int yy);
	int		AddCamerasAndPresets(int start_x, int start_y);
	int		AddPanTiltButtons(int start_x, int start_y);
	int		AddPanTiltButtonPanel(int start_x, int start_y);
	int		AddPanTiltJoystickPanel(int start_x, int start_y);
	int		AddSpeedSlider(int start_x, int start_y);
	int		AddWindowControls(int start_x, int start_y);
	int		AddZoomFocusAperture(int start_x, int start_y);
	int		AddCameraControlButtons(int start_x, int start_y);

	void	UpdatePresets();
	void	UpdatePTZButtons();
	void	AutoFocus(int on);
	void	DigitalZoom(int on);
	void	AutoExposure(int on);
	void	BacklightCompensation(int on);
	void	PTZ_RememberPosition(int num);
	void	PTZ_UnRememberPosition(int num);
	int		PTZ_RecallPosition(int speed, int num);
	void    GoToPTZPosition(int speed, int in_pan, int in_tilt, int in_zoom, int in_focus);
	void    LoadPTZPositions(int fd);
	void	ViscaButtonCommands(MyButton *b, int state);
	int		BacklightStatus();
	int		DigitalZoomStatus();
	int		AutoExposureStatus();
	int		AutoFocusStatus();

	MyWin	*my_window;
	Camera	*bound_camera;
	int		instance;
	int		showing;
	int		pinned;
	char	alias[4096];
	int		contracted;
	int		hovering;
	int		key_table[4];
	int		zooming;
	int		focusing;
	int		dir;
	int		pan_tilt_style;
	int		prefer_ndi;
	int		prefer_v4l;

	VISCAInterface_t		*ptz_current_interface;
	int						ptz_interface_index;
	MyVISCACamera			*ptz_current_camera;
	int						ptz_current_camera_idx;
	int						ptz_remember_camera[NUMBER_OF_CAMERAS];
	int						ptz_soft_memory[NUMBER_OF_INTERFACES][NUMBER_OF_CAMERAS];
	int						ptz_tour_index;
	char					*ptz_current_device_path;
	double					ptz_pan_speed;
	double					ptz_tilt_speed;
	int						ptz_focus_speed;
	int						ptz_zoom_speed;
	int						ptz_zoomer_speed;
	int						ptz_adjust_speed_for_zoom;

	Fl_Window				*pan_tilt_button_group;
	Fl_Window				*pan_tilt_joystick_group;

	Fl_Button				*pt_label;
	MyButton				*ptz_up_button;
	MyButton				*ptz_up_right_button;
	MyButton				*ptz_up_left_button;
	MyButton				*ptz_down_button;
	MyButton				*ptz_down_right_button;
	MyButton				*ptz_down_left_button;
	MyButton				*ptz_left_button;
	MyButton				*ptz_right_button;
	MyButton				*ptz_zoom_in_button;
	MyButton				*ptz_zoom_out_button;
	MyButton				*ptz_focus_far_button;
	MyButton				*ptz_focus_near_button;
	MyButton				*ptz_aperture_open_button;
	MyButton				*ptz_aperture_close_button;
	MyButton				*ptz_home_button;
	Fl_Box					*zoom_label;
	Fl_Box					*focus_label;
	Fl_Box					*aperture_label;
	Fl_Box					*ptz_zoom_value_label;
	Fl_Box					*ptz_focus_value_label;
	SelectButton			*ptz_interface_button;
	MyButton				*ptz_camera_select_button[NUMBER_OF_CAMERAS];

	PanTiltJoystick			*pt_joystick;

	MyButton				*ptz_camera_preset_button[NUMBER_OF_PRESETS];
	MyToggleButton			*ptz_camera_set_button[NUMBER_OF_PRESETS];
	PTZ_Position			*ptz_position[NUMBER_OF_INTERFACES][NUMBER_OF_CAMERAS][NUMBER_OF_PRESETS];
	MyButton				*ptz_camera_preset_page_back_button;
	MyButton				*ptz_camera_preset_page_forward_button;
	int						ptz_preset_page;

	Fl_Hor_Fill_Slider		*ptz_speed_slider;
	MyLightButton			*ptz_lock_to_camera_button;
	MyLightButton			*ptz_bind_camera_button;
	MyLightButton			*ptz_auto_focus;
	MyLightButton			*ptz_auto_exp;
	MyLightButton			*ptz_backlight;
	MyLightButton			*ptz_follow_button;
	MyLightButton			*ptz_dzoom_button;
	MyLightButton			*ptz_tour_button;
	MyLightButton			*ptz_reverse_horizontal_button;
	MyLightButton			*ptz_reverse_vertical_button;
	MyToggleButton			*ptz_zoom_speed_adjust_button;
	MyLightButton			*ptz_joystick_button;
	MyLightButton			*ptz_soft_memory_button;
	MyButton				*ptz_spawn_another_button;
	MyButton				*ptz_hide_button;
	MyLightButton			*ptz_pin_button;
	Fl_Output				*ptz_bound_name_box;
	MyButton				*ptz_alias_button;
	MyInput					*ptz_alias_input;
	MyButton				*ptz_contract_button;
	Fl_Group				*ptz_contract_group;
};

class	CameraCaps
{
public:
				CameraCaps();
				~CameraCaps();
		char	*path;
		char	*alias;
		int		fourcc[128];
		char	*fourcc_description[128];
		int		fourcc_cnt;
};

class	StartWindow : public Fl_Double_Window
{
public:
			StartWindow(int in_message_delay, int xx, int yy, int ww, int hh, int in_argc, char *lbl);
			~StartWindow();
	void	draw();

	void	Update(char *str);

	int		argc;
	Fl_Box	*text;
	int		message_delay;
	time_t	last_time;
	int		image_mat_cnt;
	Mat		image_mat[128];
	int		use_updates;
	FILE	*intro_pipe_fp;
};

class	MyWin : public Fl_Double_Window
{
public:
		MyWin(
			int in_w
			, int in_h
			, int in_source_cnt
			, char **in_source
			, int in_audio_source_cnt
			, char **in_audio_source
			, int ww
			, int hh
			, int output_ww
			, int output_hh
			, int display_ww
			, int display_hh
			, int in_fps
			, double in_interval
			, int in_split
			, int in_muxing
			, int in_flip
			, int use_audio
			, char *in_mux_format
			, int in_use_old
			, int in_no_scan
			, int in_no_audio_scan
			, int in_record_all
			, int in_record_desktop
			, int in_desktop_x
			, int in_desktop_y
			, int in_desktop_w
			, int in_desktop_h
			, int in_single_stream
			, int in_follow_mode
			, int in_transition
			, char *in_transition_plugin
			, int in_ptz_path_cnt
			, char *in_ptz_path[NUMBER_OF_INTERFACES]
			, char *in_ptz_lock_alias[NUMBER_OF_INTERFACES][NUMBER_OF_CAMERAS]
			, char *in_ptz_bind_alias[NUMBER_OF_INTERFACES]
			, int in_ptz_prefer_ndi[NUMBER_OF_INTERFACES]
			, int in_ptz_prefer_v4l[NUMBER_OF_INTERFACES]
			, char *in_ptz_alias[NUMBER_OF_INTERFACES]
			, int in_ptz_home_on_launch
			, int in_use_yolo_model
			, char *in_yolo_cfg
			, char *in_yolo_weights
			, char *in_yolo_names
			, char *in_jpeg_streaming
			, int in_streaming
			, char *streaming_url
			, int stream_only
			, int streaming_audio_quality
			, int embed_pip
			, double pip_x_position
			, double pip_y_position
			, int pip_red
			, int pip_green
			, int pip_blue
			, double pip_size
			, int multipip
			, int grid_size
			, char *desktop_monitor
			, int use_detect
			, int use_timestamp
			, int use_frame_scaling
			, int use_retain_commands
			, int use_retain_cameras
			, int use_retain_audio
			, int use_retain_ptz
			, int use_hide_status
			, int use_auto_scale
			, int crop_output
			, int crop_display
			, int use_disregard_settings
			, int use_transparent_interface
			, int use_animate_panels
			, int use_exclude_directories
			, char *lbl);
		~MyWin();
	void	Shutdown();
	void	PartialShutdown();

	void    draw();
	int	handle(int);

	int			MatchArea(int, int, int);
	Camera		*RecordingCamera();
	Camera		*DisplayedCamera();
	void		ShowButtons();
	void		HideButtons();
	void		SaveInterest();
	void		LoadInterest();
	int			FindMovement(Camera *in_cam, int, int *, int *, int *, int *, int, int, int, int);
	void		copy_interest(unsigned char *dest, unsigned char *src, int sz, int sx, int sy, int ex, int ey);
	void		MakeNewSourceWindow();
	void		MakeAliasWindow();
	int			SetupCamera(char *source, char *alias, int req_w, int req_h, int font_sz, char *font_name = NULL, int rr = 0, int gg = 0, int bb = 0, int aa = 0, int t_rr = 255, int t_gg = 255, int t_bb = 255, int t_aa = 255, int chroma_color = CHROMA_ON_GREEN);
	void		ResizeCapture(int source_n, int ww, int hh);
	void		RemoveSource(int src);
	void		Encode();
	void		ReallyEncode(int);
	void		DrawDetailFrame(Fl_Color colr);
	void		CropFrame(Mat in, Mat *out, int xx, int yy, int ww, int hh);
	void		MarkInterestGrid();
	void		SplitScreen();
	void		ObsoleteDetect();
	void		MarkInterest();
	void		CalcInitialFPS();
	void		ResizeDetail();
	void		DrawThumbnails();
	void		DrawPIP();
	void		DrawEmbeddedPIP();
	void		DrawEncodingMessage();
	void		DrawExtractingMessage();
	void		DrawDumpingMessage();
	void		DumpDirectRecording(char *, char *);
	void		EncodeAVIWithOgg();
	void		HideAudio();
	void		ShowAudio();
	void		HideObjects();
	void		ShowObjects();
	void		ScanForCameras();
	void		ScanAudio(int use_audio);
	void		ScanPulse(int use_sources);
	void		OpenNamedPulse();
	void		ReadClasses();
	int			DrawPred(Camera *cam, int classId, float conf, int left, int top, int right, int bottom, Mat &frame);
	void		RecordOn();
	void		RecordOff();
	void		SetupObjectDetection();
	void		RecordAll();
	void		DisplayRecordingCamera();
	void		SetAllCamerasToStream(Camera *in_cam);
	void		SetAllCamerasToStop();
	void		SetAllCamerasToGo();
	void		ResetCameras(int reset_cameras, char **source, int source_cnt);
	void		ResetCamera(Camera *cam);
	void		TriggerCamera(Camera *cam);
	void		PTZ_DoCommand(int index, int button, int arg_cnt = 0, int arg0 = 0, int arg1 = 0, int arg2 = 0, int arg3 = 0, int arg4 = 0);
	void		ViscaCommand(int ptz_window_index, int command, int arg_cnt = 0, int arg1 = 0, int arg2 = 0, int arg3 = 0, int arg4 = 0, int arg5 = 0);
	void		ViscaSpecs(VISCAInterface_t *interface, MyVISCACamera *camera);
	void		StartVisca();
	void		SetupPTZWindow(int in_instance);
	void		PTZ_MoveTo(int instance, int spd_x, int spd_y, int xx, int yy);
	void		UpdatePresets();
	void		TourPresets();
	void		MoveALittle(int instance, int key);
	void		ZoomALittle(int instance, int key);
	void		FocusALittle(int instance, int key);
	void		ZoomAndFocusALittle(int instance, int key);
	void		CenterMessage(char *msg, int timer);
	int			ptz_joystick_handler();
	void		SendToNetwork();
	void		DrawAudioGraph(Camera *cam);
	void		GrabDesktop(int retain_size = 0);
	void		GrabCameraArea();
	void		Done();
	void		RunPulse(int mode);
	void		RemoveCamera(Camera *cam);
	void		ShowButtonPanel(int xx, int yy);
	void		RecordingFullStop();
	void		ShowLog();
	void		SaveMicrophones();
	void		SaveMicrophones(char *filename);
	void		LoadMicrophones();
	Camera		*FindCameraByPath(char *path);
	void		Cleanup();
	int			ImageWindowButtonHit(int xx, int yy);
	void		AddLastMuxed(char *filename);
	void		FrameForMuxer(Camera *cam, Mat in_mat);
	void		DeleteImmediate();
	int			HandleKeyboard(int event, Camera *cam);
	void		ToggleRecord(Camera *cam);
	void		ToggleRecord(int camera_index);
	int			DoDeleteImmediate();
	int			TogglePTZJoystick();
	int			IncreasePTZLittleSpeed();
	int			DecreasePTZLittleSpeed();
	int			CyclePTZLittleMode();
	int			PTZHome();
	void		CycleDownThumbgroup();
	void		CycleUpThumbgroup();
	int			DisplayThumbgroup(int nn);
	int			LittleMotion(int key);
	void		Review();
	void		LocalZoomIn(Camera *cam);
	void		LocalZoomOut(Camera *cam);
	void		ToggleFrozen();
	void		DoSnapshot();
	void		ScaleVideoUp();
	void		ScaleVideoDown();
	void		ScaleVideoReset();
	void		ImmediateNewlySelectedHighlight();
	int			DoMarkInterest();
	int			DisplaySplitSelection(int nn);
	int			HandlePushToSelectImmediate(Camera *cam);
	int			HandlePushToEditImmediate(Camera *cam);
	int			HandlePushForEmbedded(int xx, int yy);
	int			HandlePushForPTZ(Camera *cam);
	int			HandleReleaseForSplit();
	int			HandleReleaseForImmediate(Camera *cam);
	int			HandleRelease(Camera *cam);
	int			HandleReleaseForPTZ(Camera *cam);
	int			HandleMove(Camera *cam);
	int			HandleImmediateDrag(Camera *cam);
	int			HandlePTZDrag();
	int			HandleDrag(Camera *cam);
	int			HandleMousewheelPTZ(Camera *cam);
	int			HandleMousewheel(Camera *cam);
	int			HandleMousewheelResizeCapture(Camera *cam);
	void		ResetCommandKeys();
	void		ReadCommandKeyDefinitions(char *filename);
	int			CheckCommandTitle(char *str);
	void		SaveCommandKeyDefinitions(char *filename);
	char		*CommandKeyName(int nn);
	void		FrameImage(Camera *cam, Mat& in_mat, Mat& out_mat, double force_aspect_x, double force_aspect_y);
	double		CalcButtonSize(int y_pos, int& y_inc, int req_w, int req_h);
	void		AddEmbeddedWindow(EmbedAppWindow *embed);
	void		RemoveEmbeddedWindow(EmbedAppWindow *embed);
	void		CalcEmbeddedWindowPosition(int use_w, int use_h, int& x_pos, int& y_pos);
	void		ReadInExternalPrograms();
	void		DisplayOutput(Camera *cam, Mat in_mat, Camera *alt_cam);
	void		DrawEmbeddedApps();
	void		DrawPIPsAfter();
	void		DrawPTZZoomer(int use_image_sx, int use_image_sy);
	int			ScanForDuplicateCameras(char *in_path);
	int			PopulateCameraCaps();
	void		ClearCameraCaps();
	void		ShowPTZ(Camera *cam, int xx, int yy);
	void		ShowAudio(int xx, int yy);
	void		ShowVideoThumbs(int xx, int yy);
	void		CompressAudioThumbnailList();
	int			CountActiveMics();
	void		BuildMainMenu();
	void		BuildEditOutputWindow();
	void		BuildSelectOutputWindow();
	void		LoadOutputPathList(char *filename);
	void		SaveOutputPathList(char *filename);
	void		SetUseOutputPath(int index, char *buf);
	int			PushToSelectColors(Camera *cam);
	FilterDialog	*MakeFilterDialog(char *name);
	void			UpdateThumbButtons();
	void			AltDisplay(int cam_index);
	void			AddImmediate(Immediate *in);
	void			PasteImmediate();
	void			ClearImmediate();
	int				AddMiscCopy(Camera *in_source, int in_type, Mat local, int immediate_display, char *str, int xx, int yy, int ww, int hh, int rr = -1, int gg = -1, int bb = -1, int aa = -1, double contrast = 0.5, double brightness = 0.5, double saturation = 1.0, double hue = 1.0, double intensity = 1.0);
	int				InMiscPasted(int xx, int yy, int& r_outer, int& r_inner);
	void			MiscPaste(int in_x = -1, int in_y = -1);
	void			MiscRemoveAll();
	void			MiscRemoveLast();
	void			GrabAllCameras();
	int				ImageWindowHit(int xx, int yy);
	int				HandleMenuPopup(int xx, int yy);
	int				AddShape(Shape *in_shape);
	int				RemoveShape(Shape *in_shape);
	Shape			**FindShapesOnCamera(Camera *cam, int& final);
	Shape			**FindShapesFromCamera(Camera *cam, int& final);
	int				ShapeHandleEvent(int event);
	void			TagRecognized(Camera *cam, char *label, double confidence);
	void			ClearMuxerArray();
	void			FlushMuxerArray();
	int				CountRecordingCameras();
	void			Scheduled();
	int				LockedCameraStatus();
	int				CalcMenuHeight(MyGroup *in_grp);
	void			AdjustMainMenuHeight();
	void			ReadGUISettings();
	void			SelectPulseAudioButton(char *name);
	void			SelectCamera(char *name);
	void			DisplayCamera(Camera *cam);
	void			DisplayCamera(int index);
	PulseAudioButton			*AddAudioSource(int started_here, char *str, char *use_str);
	void			PlaceButtonGroup(int side);
	void			HideAllElements();
	void			ShowAllElements();
	int				SetCodec();
	void			SaveAllPTZPositions();
	void			LoadAllPTZPositions();
	void			Transparent(int flag);
	void			ScrollDownThumbGroup();
	void			ScrollUpThumbGroup();
	void			SaveCodecs();
	void			LoadCodecs();
	void			SaveTransition();
	void			LoadTransition();
	void			RecordOn(Camera *cam);
	void			RecordOff(Camera *cam);
	void			InitiateExit();
	void			SaveAudioSettings(char *filename);
	void			LoadAudioSettings(char *filename);
	void			ResetAudio();
	void			ErrorMessage();
	void			SetErrorMessage(char *msg, int timeout = 3);
	void			StreamToNDI(Camera *cam, int video_or_audio);
	void			CompressCameraList();
	void				LoadJSON(char *filename);
	int					ParseJSON(char *str);
	Camera				*ParseJSONCamera(cJSON *json, Camera *cam = NULL);
	Immediate			*ParseJSONImmediate(cJSON *immediate, Camera *cam);
	void				ParseJSONColorIt(cJSON *name, Camera *cam);
	MatrixState			*ParseJSONMatrixState(cJSON *matrix_state);
	ImageWindow			*ParseJSONImageWindow(cJSON *image_window, Camera *cam, int cnt);
	PulseAudioButton	*ParseJSONMicrophone(cJSON *json);
	void				SaveCamerasAsJSON(FILE *fp);
	void				SaveMicrophonesAsJSON(FILE *fp);
	void				SaveAsJSON(FILE *fp);
	void				ParseJSONSystem(cJSON *json);
	void				ParseJSONMicrophones(cJSON *json);
	void				ParseJSONCameras(cJSON *json);
	void				LoadJSONCamera(char *filename, Camera *cam = NULL);
	void				SaveVideoSettings();
	void				ReallyToggleButtonPanel();
	void				ReallyToggleButtonPanel(int show_m);
	void				ReallyToggleCameras();
	void				ReallyToggleCameras(int show_m);
	void				ReallyToggleAudio();
	void				ReallyToggleAudio(int show_m);
	void				ReallyTogglePTZ();
	void				ReallyTogglePTZ(int idx, int show_m);
	void				LoadPluginTransition(char *name);
	Camera				*FindCameraByAlias(char *tst);
	void				SnapAll();

	MyGroup		*resize_grp;
	int			current_source;
	int			displayed_source;
	int			alt_displayed_source;
	char		*source[1024];
	int			source_cnt;
	char		**audio_source;
	int			audio_source_cnt;
	Camera		*camera[128];
	Camera		*recording_camera;
	int			original_w;
	int			original_h;
	int			disregard_settings;
	time_t		exit_timer;
	int			actively_exiting;
	Mat			yuv;
	Mat			in_mat;
	Mat			monitor_mat;
	Mat			desktop_mat;
	int			all_fd;
	int			clipboard_changed;
	int			error_timeout;
	int			refreshed;
	char		*error_message;
	int			highlight_image_windows;
	time_t		error_start_time;
	int			split_bx[10];
	int			split_by[10];
	int			split_rx[10];
	int			split_ry[10];
	Guideline	*guideline[1024];
	int			audio_display;
	int			audio_display_timer;
	int			audio_sample_rate;
	int			audio_channels;
	int			guideline_cnt;
	int			requested_w;
	int			requested_h;
	int			output_width;
	int			output_height;
	double		display_width;
	double		display_height;
	int			recorded_frames;
	int			display_video;
	int			image_sx;
	int			image_sy;
	int			recording;
	int			init_detect;
	int			use_mousewheel;
	int			mouse_moving;
	int			resize_capture;
	int			hour;
	int			minute;
	int			second;
	int			year;
	int			month;
	int			day;
	int			weekday;
	int			muxing;
	int			no_scan;
	int			no_audio_scan;
	int			mux_init;
	int			selecting_colors;
	int			animate_panels;
	int			use_tooltips;
	int			file_selector_layout;
	int			file_selector_exclude_directories;
	int					video_count;
	char				last_used_filename[256];
	SpecifyURLWindow	*specify_url_window;
	SpecifyIRCWindow	*specify_irc_window;
	CurrentFPSWindow	*current_fps_window;
	SourceSelectWindow	*source_select_window;
	int					transparent_interface;
	MonitorWindow		*monitor_window;
	TimerWindow			*timer_window;
	AlertWindow			*alert_window;
	int					html_background;
	NDISourceListWindow	*ndi_source_window;
	MenuButton			*command_button_list[1024];
	int					command_button_cnt;

	TextEditWindow		*text_edit_window;
	AnimTimeline		*anim_timeline;
	
	uchar		status_color_r;
	uchar		status_color_g;
	uchar		status_color_b;
	uchar		status_color_a;

	int			record_on_start;
	int			recording_on_start;
	char		*record_on_start_alias;

	Muxer									*my_muxer[128];
	int										muxer_cnt;
	NDIlib_send_instance_t					ndi_send;
	NDIlib_video_frame_v2_t					ndi_video_frame;
	NDIlib_audio_frame_interleaved_16s_t	ndi_audio_frame;
	char									ndi_stream_name[256];
	int										ndi_streaming;
	int										ndi_send_video_format;
	time_t									ndi_initialized;

	int			fresh_image;
	int			use_old;
	int			im_drawing_mode;
	char		*recognize_class_name[1024];
	int			recognize_class_cnt;
	char		yolo_cfg_filename[4096];
	char		yolo_weights_filename[4096];
	char		yolo_names_filename[4096];
	int			tag_recognized;
	FILE		*tag_fp;
	int			forced_fps;
	double		forced_interval;
	double		restore_forced_interval;
	double		record_all_start;
	int			record_all_cnt;
	double		speed_factor;
	double		minimum_fps;
	char		*jpeg_streaming;
	int 		jpeg_streaming_port;
	int			streaming;
	char		stream_url[4092];
	int			stream_only;
	int			streaming_audio_quality;
	int			image_origin_x;
	int			image_origin_y;
	int			evaluate_focus;
	int			embedded_app_cnt;
	EmbedAppWindow		*embedded_app[10];
	int			embed_pip;
	double		pip_x_position;
	double		pip_y_position;
	int			pip_red;
	int			pip_green;
	int			pip_blue;
	double		pip_size;
	int			multipip;
	int			grid_size;
	char		*desktop_monitor;
	int			number_of_fonts;
	int			actively_loading;
	int			image_window_button;
	int			buttonized_visible;
	char		*last_muxed_list[64];
	int			command_key[128];
	int			last_resize_drag_x;
	int			last_resize_drag_y;
	int			last_push_x;
	int			last_push_y;
	int			button_panel_sz;
	double		gui_scale_factor;
	double		image_display_scale;
	CameraCaps	*camera_caps[128];
	int			camera_caps_cnt;
	int			retain_commands;
	int			retain_cameras;
	int			retain_audio;
	int			retain_ptz;
	int			hide_status;
	int			auto_scale;
	int						ptz_home_on_launch;
	int						ptz_window_index;
	int						visca_command;
	int						visca_arg[10];
	int						visca_arg_cnt;
	MyVISCACamera			visca_camera[NUMBER_OF_CAMERAS];

	char		*output_name[128];
	char		*output_path[128];
	int			output_active[128];
	int			output_path_cnt;

	ThumbButton	*dragging_thumb;
	int			dragging_thumb_x;
	int			dragging_thumb_y;
	Immediate	**immediate_list;
	int			immediate_cnt;
	int			rubberband_x;
	int			rubberband_y;
	int			rubberband_w;
	int			rubberband_h;
	int			rubberband_mode;
	int			guideline_mode;
	ResizeFrame			*resize_frame;
	PopupMenu	*popup;
	MiscCopy	**misc_copy;
	int			misc_copy_cnt;
	int			editing_misc_outer;
	int			editing_misc_inner;
	int			editing_misc_mode;
	int			initial_button_group_x;
	int			initial_button_group_y;
	int			initial_thumbnail_group_x;
	int			initial_thumbnail_group_y;
	int			initial_audio_thumbnail_group_x;
	int			initial_audio_thumbnail_group_y;
	int			initial_ptz_x[PTZ_WINDOW_LIMIT];
	int			initial_ptz_y[PTZ_WINDOW_LIMIT];
	int			initial_current_fps_x;
	int			initial_current_fps_y;
	int			initial_video_out_x;
	int			initial_video_out_y;

	PulseMicrophone	*pulse_microphone[128];
	int				pulse_microphone_cnt;
	PulseMixer		*pulse_mixer;
	int				audio;
	int				mute_audio;
	int				audio_direct_mix;
	double			audio_incidental_volume;
	int				active_audio_playback;

	ColorItWindow	*color_it_window;
	PulseAudioFilterWindow	*pulse_audio_filter_window;

	Shape			**shape;
	int				shape_cnt;

	int			object_page;
	long int	dumped_frames;
	long int	dumped_limit;
	char		*dump_type;
	char		mux_format[128];
	pthread_mutex_t	mux_mutex;

	MainMenu 			*button_group;
	Fl_Pack				*button_group_pack;
	EncodeSpeedWindow	*encode_speed_window;

	int					test_recognition;
	int					button_refresh;

	MenuButton	*record_button;
	MenuButton	*power_button;
	MenuButton	*mute_video_button;
	MenuButton	*freeze_button;
	MenuButton	*hide_video_button;
	MenuButton	*load_setup_button;
	MenuButton	*save_setup_button;
	MenuButton	*override_button;
	MenuButton	*trigger_button;
	MenuButton	*timestamp_button;
	MenuButton	*dump_button;
	MenuButton	*encode_button;
	MenuButton	*jpeg_streaming_button;
	MenuButton	*show_debug_button;
	MenuButton	*test_recognition_button;
	MenuButton	*show_motion_debug_button;
	MenuButton	*review_button;
	MenuButton	*review_muxed_button;
	MenuButton	*snapshot_button;
	MenuButton	*set_interest_button;
	MenuButton	*clear_interest_button;
	MenuButton	*save_interest_button;
	MenuButton	*load_interest_button;
	MenuButton	*resize_detail_button;
	MenuButton	*zoom_box_button;
	MenuButton	*reset_button;
	MenuButton	*reset_cameras_button;
	MenuButton	*resize_capture_button;
	MenuButton	*split_button;
	MenuButton	*monitor_video_button;
	MenuButton	*open_standalone_button;
	MenuButton	*new_source_button;
	MenuButton	*edit_source_button;
	MenuButton	*edit_output_button;
	MenuButton	*select_output_button;
	MenuButton	*alias_button;
	MenuButton	*reset_camera_button;
	MenuButton	*flip_horizontal_button;
	MenuButton	*flip_vertical_button;
	MenuButton	*ptz_lock_window_button;
	MenuButton	*video_settings_button;
	MenuButton	*camera_settings_button;
	MenuButton	*snapshot_settings_button;
	MenuButton	*keyboard_settings_button;
	MenuButton	*gui_settings_button;
	MenuButton	*transitions_button;
	MenuButton	*filter_built_in_button;
	MenuButton	*filter_plugins_button;
	MenuButton	*audio_filter_plugins_button;
	MenuButton	*external_pgm_button;
	MenuButton	*fltk_plugin_button;
	MenuButton	*immediate_drawing_button;
	MenuButton	*dynamic_coloring_button;
	MenuButton	*toggle_camera_effects_button;
	MenuButton	*save_camera_button;
	MenuButton	*load_camera_button;
	MenuButton	*codecs_button;
	MenuButton	*audio_mute_button;
	MenuButton	*audio_settings_button;
	MenuButton	*audio_bind_to_camera_button;
	MenuButton	*audio_save_button;
	MenuButton	*audio_load_button;
	MenuButton	*monitor_audio_button;
	MenuButton	*audio_library_button;
	MenuButton	*audio_library_list_button;
	MenuButton	*play_audio_file_button;
	MenuButton	*stop_playing_audio_button;
	MenuButton	*pause_playing_audio_button;
	MenuButton	*toggle_objects_button;
	MyButton	*quit_button;

	PTZ_Window					*ptz_window[PTZ_WINDOW_LIMIT];
	CodecSelectionWindow		*codec_selection_window;
	Fl_Pack						*audio_thumbnail_pack[3];
	SlidingElement				*audio_thumbnail_group;
	VideoThumbnailGroup			*video_thumbnail_group;
	ThumbGroup					*thumbnail[128];
	PulseAudioButton			*audio_thumbnail[128];
	int							audio_thumbnail_cnt;
	VideoSettingsWindow			*video_settings_window;
	MiscVideoSettingsWindow		*misc_video_settings_window;
	AudioSettingsWindow			*audio_settings_window;
	CameraSettingsWindow		*camera_settings_window;
	SnapshotSettingWindow		*snapshot_settings_window;
	GUI_SettingsWindow			*gui_settings_window;
	EmbedAppSettings			*embed_app_settings;
	TransitionWindow			*transitions_window;
	PseudoCameraWindow			*pseudo_camera_window;
	FilterPluginsWindow			*filter_built_in_window;
	FilterPluginsWindow			*filter_plugins_window;
	FilterPluginsWindow			*audio_filter_plugins_window;
	ImmediateDrawingWindow		*immediate_drawing_window;
	EditOutputWindow			*edit_output_window;
	SelectOutputWindow			*select_output_window;
	TriggerWindow				*trigger_window;
	NewSourceWindow				*new_source_window;
	AliasWindow					*alias_window;
	FltkPluginWindow			*fltk_plugin_window;
	CommandKeySettingsWindow	*command_key_settings;
	time_t						start_time;
	int							encoding;
	int							extracting;
	ReviewWin					*review;
	MuxPreviewWindow			*review_muxed;
	PTZ_LockWindow				*ptz_lock_window;
	ObjectMenu					*object_menu;
	AudioLibrary				*audio_library_window;
	AudioLibraryList			*audio_library_list;

	int		force_center_x;
	int		force_center_y;
	int		visible_debug;
	char	filename[256];
	int		nominal_interest_x;
	int		nominal_interest_y;
	int		interest_x[100];
	int		interest_y[100];
	int		interest_cnt;
	int		mark_interest;
	int		buttons_shown;
	int		ready_to_average;
	int		all_frames;
	int		zoom_boxing;
	int		timestamp;
	char	timestamp_format[4096];
	int		timestamp_rr;
	int		timestamp_gg;
	int		timestamp_bb;
	int		timestamp_aa;
	int		timestamp_background_rr;
	int		timestamp_background_gg;
	int		timestamp_background_bb;
	int		timestamp_background_aa;
	int		timestamp_font_sz;
	int		timestamp_position_x;
	int		timestamp_position_y;
	int		frame_scaling;
	int		crop_scaling;
	int		crop_output;
	int		crop_output_x;
	int		crop_output_y;
	int		resizing_detail;
	int		grid_sz;
	int		detail_x;
	int		detail_y;
	int		detail_width;
	int		detail_height;
	int		drag_start_x;
	int		drag_start_y;
	int		offset_x;
	int		offset_y;
	int		start_offset_x;
	int		start_offset_y;
	int		save_offset_x;
	int		save_offset_y;
	int		dragging;
	int		motion_debug;
	int		split;
	int		showing_alias_window;
	int		encoding_frame_cnt;
	int		redraw_cnt;
	Net		net;

	double				transition_cnt;
	Camera				*last_cam;
	int					trigger_select_mode;
	int					record_all;
	int					record_desktop;
	int					desktop_x;
	int					desktop_y;
	int					desktop_w;
	int					desktop_h;
	int					single_stream;
	int					follow_mode;
	int					transition;
	char				transition_plugin[256];
	int					button_group_side;
	ProgressScrubber	*progress_scrubber;
	
	VISCAInterface_t	iface[NUMBER_OF_INTERFACES];
	int					ptz_mode;
	char				*ptz_device_path[NUMBER_OF_INTERFACES];
	char				*ptz_lock_alias[NUMBER_OF_INTERFACES][NUMBER_OF_CAMERAS];
	char				*ptz_alias[NUMBER_OF_INTERFACES];
	char				*ptz_bind_alias[NUMBER_OF_INTERFACES];
	int					ptz_prefer_ndi[NUMBER_OF_INTERFACES];
	int					ptz_prefer_v4l[NUMBER_OF_INTERFACES];
	int					ptz_interface_type[NUMBER_OF_INTERFACES];
	int					ptz_device_cnt;
	int					ptz_zoom;
	int					old_ptz_zoom;
	int					ptz_panning;
	int					ptz_zooming;
	int					ptz_focusing;
	int					start_ptz_drag_x;
	int					start_ptz_drag_y;
	int					ptz_middle_mouse;
	int					ptz_dragging;
	int					ptz_zoom_reading;
	int					ptz_focus_reading;
	short int			ptz_pan_reading;
	short int			ptz_tilt_reading;
	int					ptz_dragged;
	int					use_pan_speed;
	int					use_tilt_speed;
	pthread_mutex_t		ndi_send_mutex;
	pthread_mutex_t		muxer_mutex;
	pthread_mutex_t		visca_mutex;
	pthread_cond_t		visca_cond;
	double				ptz_travel_x;
	double				ptz_travel_y;
	int					ptz_follow;
	int					ptz_follow_home_pan;
	int					ptz_follow_home_tilt;
	int					ptz_little_speed;
	int					ptz_little_mode;
	char				center_message[256];
	int					center_message_timer;
	int					ptz_reverse_horizontal;
	int					ptz_reverse_vertical;
	int					ptz_zoomer;
	int					ptz_joystick;
	int					ptz_joystick_x;
	int					ptz_joystick_y;
	int					ptz_last_joystick_x;
	int					ptz_last_joystick_y;
	int					magic_x;
	int					magic_y;
	int					transmitting;
	ImageMemory			image_memory;

	int			move_corner;
	int			resize_corner;
	int			restore_corner;

	AVCodecID		use_video_codec;
	AVCodecID		use_audio_codec;
	char			use_extension[256];
	char			use_container[4096];
	char			video_codec_name[4096];
	char			audio_codec_name[4096];

	int			render_mouse;
	int			tutorial_mode;
};

class	TitleBox : public Fl_Window
{
public:
		TitleBox(ReviewWin *in_win, int xx, int yy, int frame);
		~TitleBox();

	int	handle(int);
	void	draw();

	Fl_Multiline_Input	*text_in;
	MyButton			*remove_button;
	int					draw_mode;
	int					font_size;
	int					font_num;
	int					held;
	int					init_x;
	int					init_y;
	int					start_frame;
	int					end_frame;
	ReviewWin			*review_window;
	int					my_color;
};

class	ReviewWin : public Fl_Double_Window
{
public:
			ReviewWin(MyWin *, int, int, int, char *, char *);
			~ReviewWin();

	void		draw();
	int			handle(int);
	void		ScrubTo(int);
	int			AdjustToTrim(int check_only);
	int			AdvanceToTrim(int);
	long int	EditToTrim(int *);
	void		InitCrop();
	void		RemoveTitle(TitleBox *tb);
	void		RenderTitles();

	char		filename[4096];
	char		*frame;
	char		*alt_frame;
	double		fps;
	int			fd;
	int			sz;
	MyWin		*my_win;
	Fl_Window	*controls;
	int			playing;
	int			encoding;
	int			scrubbing;
	int			frame_cnt;
	int			current_frame;
	TitleBox	*title_box[1024];
	int			title_box_cnt;

	MyButton			*play;
	MyButton			*play_trim;
	MyRepeatButton	*advance_one;
	MyRepeatButton	*retreat_one;
	MyButton			*encode;
	MyButton			*start_trim_button;
	MyButton			*end_trim_button;
	MyButton			*clear_trim_button;
	MyButton			*snap_one_button;
	MyButton			*moving_crop_button;
	MyButton			*add_text_button;
	Fl_Box				*frame_box;
	MyScrubber			*scrub;
	Fl_Value_Slider		*speed_slider;
	double				delay;
	double				frame_advance;
	double				speed;
	int					single_frame;
	time_t				start_time;
	int					frames_shown;
	int					playing_trimmed;
	MyWin				*main;
	int					*crop_x;
	int					*crop_y;
	int					crop_activated;
	int					add_text;
};

class	ImageWindow : public MyGroup
{
public:
		ImageWindow(int in_index, MyWin *win, Camera *cam, Camera *dest_camera, int xx, int yy, int ww, int hh);
		~ImageWindow();

	int		handle(int);
	void	resize(int xx, int yy, int ww, int hh);
	void	Draw(Camera *dest_camera);
	void	Rescale(Camera *cam, int xx, int yy, int proportional);
	int		AsButton(int xx, int yy);
	void	ZipLeft();
	void	ZipRight();
	void	ZipUp();
	void	ZipDown();
	void	GrowLeft();
	void	GrowRight();
	void	GrowUp();
	void	GrowDown();
	void	FillFrame();
	void	Restore();
	void	Delete();
	void	Buttonize();
	void	Resize(int xx, int yy, int ww, int hh);

	int			index;
	Mat			mat;
	MyWin		*my_window;
	Camera		*camera;
	Camera		*dest_camera;
	int			layer;
	int			dragging;
	int			transform;
	int			start_drag_x;
	int			start_drag_y;
	double		width;
	double		height;
	double		orig_w;
	double		orig_h;
	double		dx;
	double		dy;
	double		dw;
	double		dh;
	double		parent_scale_width;
	double		parent_scale_height;
	double		displayed_x;
	double		displayed_y;
	double		displayed_w;
	double		displayed_h;
	int			relative_x;
	int			relative_y;
	int			buttonize;
	int			buttonized_x;
	int			buttonized_y;
	int			buttonized_w;
	int			buttonized_h;
	int			crop_x;
	int			crop_y;
	int			crop_w;
	int			crop_h;
	int			trim_x;
	int			trim_y;
	int			drag_mode;
	double		overall_alpha;
	int			mw_mode;
	double		angle;
	PopupMenu	*popup;
	int			frame;
	int			flip_horizontal;
	int			flip_vertical;
	int			use_as_mask;
};

class	EmbedAppSettings : public Dialog
{
public:
			EmbedAppSettings(MyWin *in_win);
			~EmbedAppSettings();
	void	ClearCurrent();
	void	LoadFromArray();
	void	SaveToArray();
	void	Save(char *filename);
	void	Load(char *filename);
	void	Next();
	void	Prev();
	void	FreeAll();

	MyWin		*my_window;
	Fl_Box		*title;
	Fl_Box		*current_index;
	MyButton	*prev;
	MyButton	*next;
	Fl_Input	*path;
	Fl_Input	*use_w;
	Fl_Input	*use_h;
	Fl_Input	*arg[10];
	MyButton	*execute;
	MyButton	*accept;
	MyButton	*cancel;

	int			current;
	char		*my_path[10];
	int			my_w[10];
	int			my_h[10];
	char		*my_arg[10][10];
	char		label_buf[128];
};

class	FltkPluginWindow : public Dialog
{
public:
			FltkPluginWindow(MyWin *in_win);
			~FltkPluginWindow();
	int		handle(int event);
	void	Populate();
	void	Reset();

	MyWin		*my_window;
	int			last_x;
	int			last_y;
	int			vertical_offset;

	MyLightButton	*plug_in[1024];

	MyButton	*accept;
	MyButton	*cancel;
};
