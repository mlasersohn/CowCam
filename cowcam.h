#define	NUMBER_OF_INTERFACES		9
#define	NUMBER_OF_CAMERAS		7
#define	NUMBER_OF_PRESETS		21

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

#define	MODE_MOVING		1
#define	MODE_RESIZING	2
#define	MODE_TRIMMING	3
#define	MODE_ROTATING	4

#define	TRANSITION_NONE			0
#define	TRANSITION_BLEND		1
#define	TRANSITION_L2R_WIPE		2
#define	TRANSITION_R2L_WIPE		3
#define	TRANSITION_T2B_WIPE		4
#define	TRANSITION_B2T_WIPE		5
#define	TRANSITION_FADE_FROM_BLACK	6
#define	TRANSITION_FADE_TO_BLACK	7

#define	DRAWING_MODE_GENERAL				0
#define	DRAWING_MODE_TEXT					1
#define	DRAWING_MODE_LINE					2
#define	DRAWING_MODE_RECTANGLE				3
#define	DRAWING_MODE_POLYGON				4
#define	DRAWING_MODE_FREEHAND				5
#define	DRAWING_MODE_DELETE					6
#define	DRAWING_MODE_HIDE					7
#define	DRAWING_MODE_SHOW_ALL				8
#define	DRAWING_MODE_HIDE_ALL				9
#define	DRAWING_MODE_LOOP					10
#define	DRAWING_MODE_ELLIPSE				11
#define	DRAWING_MODE_IMAGE					12
#define	DRAWING_MODE_PIXELATE				13
#define	DRAWING_MODE_RECTANGLE_SELECT		14
#define	DRAWING_MODE_POLYGON_SELECT			15

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

#define	KEY_TOGGLE_RECORD			0
#define	KEY_DELETE_IMMEDIATE			1
#define	KEY_TOGGLE_PTZ_JOYSTICK			2
#define	KEY_INCREASE_PTZ_LITTLE_SPEED		3
#define	KEY_DECREASE_PTZ_LITTLE_SPEED		4
#define	KEY_CYCLE_PTZ_LITTLE_MODE		5
#define	KEY_PTZ_HOME				6
#define	KEY_CYCLE_DOWN_THUMBGROUP		7
#define	KEY_CYCLE_UP_THUMBGROUP			8
#define	KEY_DISPLAY_THUMBGROUP_0		9
#define	KEY_DISPLAY_THUMBGROUP_1		10
#define	KEY_DISPLAY_THUMBGROUP_2		11
#define	KEY_DISPLAY_THUMBGROUP_3		12
#define	KEY_DISPLAY_THUMBGROUP_4		13
#define	KEY_DISPLAY_THUMBGROUP_5		14
#define	KEY_DISPLAY_THUMBGROUP_6		15
#define	KEY_DISPLAY_THUMBGROUP_7		16
#define	KEY_DISPLAY_THUMBGROUP_8		17
#define	KEY_DISPLAY_THUMBGROUP_9		18
#define	KEY_LITTLE_MOTION_1			19
#define	KEY_LITTLE_MOTION_2			20
#define	KEY_LITTLE_MOTION_3			21
#define	KEY_LITTLE_MOTION_4			22
#define	KEY_LITTLE_MOTION_5			23
#define	KEY_LITTLE_MOTION_6			24
#define	KEY_LITTLE_MOTION_7			25
#define	KEY_LITTLE_MOTION_8			26
#define	KEY_LITTLE_MOTION_OTHER_1		27
#define	KEY_LITTLE_MOTION_OTHER_2		28
#define	KEY_LITTLE_MOTION_OTHER_3		29
#define	KEY_LITTLE_MOTION_OTHER_4		30
#define	KEY_LITTLE_MOTION_OTHER_5		31
#define	KEY_LITTLE_MOTION_OTHER_6		32
#define	KEY_LITTLE_MOTION_OTHER_7		33
#define	KEY_LITTLE_MOTION_OTHER_8		34
#define	KEY_REVIEW				35
#define	KEY_LOCAL_ZOOM_IN			36
#define	KEY_LOCAL_ZOOM_OUT			37
#define	KEY_TOGGLE_FROZEN			38
#define	KEY_SNAPSHOT				39
#define	KEY_SNAPSHOT_OTHER			40
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
#define	KEY_SCALE_VIDEO_UP			51
#define	KEY_SCALE_VIDEO_DOWN			52
#define	KEY_SCALE_VIDEO_RESET			53

#define	FILTER_TYPE_VIDEO			0
#define	FILTER_TYPE_AUDIO			1
#define	FILTER_TYPE_VIDEO_BUILT_IN	2

#define	DARK_GRAY	64
#define	LIGHT_GRAY	65
#define	DARK_RED	66
#define	DARK_BLUE	67

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

#define	MW_MODE_TRANSPARENCY			0
#define	MW_MODE_STACKING_ORDER			1

#define	MISC_COPY_DYNAMIC				0
#define	MISC_COPY_STATIC				1
#define	MISC_COPY_MASK					2
#define	MISC_COPY_CROP					3
#define	MISC_COPY_FILL					4
#define	MISC_COPY_TEXT					5
#define	MISC_COPY_MAGNIFY				6
#define	MISC_COPY_RECTANGLE				7
#define	MISC_COPY_BORDER				8

#define	EDITING_MISC_MOVE				0
#define	EDITING_MISC_RESIZE				1

#define	SHAPE_NO_TYPE					0

#define	SHAPE_MODE_MOVE					0
#define	SHAPE_MODE_RESIZE				1
#define	SHAPE_MODE_THICKNESS			2

#define	IM_RECTANGLE					0
#define	IM_PIXELATE						1
#define	IM_RECTANGLE_SELECT				2
#define	IM_IMAGE						3
#define	IM_ELLIPSE						4
#define	IM_FREEHAND						5
#define	IM_LINE							6
#define	IM_TEXT							7

#define	SNAPSHOT_TRIGGER_BUTTON			0
#define	SNAPSHOT_TRIGGER_START			1
#define	SNAPSHOT_TRIGGER_RECORD			2
#define	SNAPSHOT_TRIGGER_CONTINUOUS		3

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
class	StoredCamera;
class	StoredMyWin;
class	ImageWindow;
class	StoredImageWindow;
class	PulseMicrophone;
class	TransparentWindow;
class	ProgressScrubber;
class	Immediate;
class	ImmediateDrawingWindow;
class	CommandKeySettingsWindow;
class	EmbedAppSettings;
class	FltkPluginWindow;
class	QuickText;
class	PopupMenu;

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

class	LayerLabelButton : public Fl_Toggle_Button
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

class	InstrumentWindow : public Fl_Window
{
public:
				InstrumentWindow(MyWin *in_win, Camera *in_cam, int ww, int hh);
				~InstrumentWindow();
	void		Populate();
	void		PopulateFromCamera();

	MyWin				*my_window;
	Camera				*my_camera;
	osg::Node			*node[128];
	int					node_cnt;
	int					widget_cnt;

	Fl_Button			*go_button;

	Fl_Input			*frames[128];
	Fl_Float_Input		*start_x_in[128];
	Fl_Float_Input		*start_y_in[128];
	Fl_Float_Input		*start_z_in[128];

	Fl_Button			*command[128];

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

class	MenuButton : public Fl_Button
{
public:
			MenuButton(int xx, int yy, int ww, int hh, char *lbl) : Fl_Button(xx, yy, ww, hh, lbl) { hover = 0; };
			~MenuButton() {};
	int		handle(int event);
	void	draw();
	void	show();
	void	hide();

	int		hover;
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

class	CodecSelectionWindow : public Fl_Double_Window
{
public:
		CodecSelectionWindow();
		~CodecSelectionWindow();
	
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
	Fl_Button	*cancel;
	Fl_Button	*accept;
};

class	ColorSlider : public Fl_Value_Slider
{
public:
		ColorSlider(int xx, int yy, int ww, int hh, double val, char *lbl);
		~ColorSlider();
};

class	ColorItWindow : public Fl_Double_Window
{
public:
			ColorItWindow(MyWin *in_win);
			~ColorItWindow();
	void	hide();
	void	show();

	MyWin			*my_window;

	ColorSlider	*red_tolerance;
	ColorSlider	*green_tolerance;
	ColorSlider	*blue_tolerance;

	ColorSlider	*red_replace;
	ColorSlider	*green_replace;
	ColorSlider	*blue_replace;
	ColorSlider	*alpha_replace;
};

class	ColorDialog : public Fl_Window
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
	Fl_Button	*close;

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

class	TextEditWindow : public Fl_Window
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
	Fl_Light_Button		*text_italic_button;
	Fl_Light_Button		*text_bold_button;
	Fl_Light_Button		*text_outline_button;
	Fl_Multiline_Input	*text_initial_text;
};

class	ImmediateDrawingWindow : public Fl_Window
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

	Fl_Button	*general;
	Fl_Button	*text;
	Fl_Button	*line;
	Fl_Button	*rectangle;
	Fl_Button	*ellipse;
	Fl_Button	*image_im;
	Fl_Button	*polygon;
	Fl_Button	*loop;
	Fl_Button	*freehand;
	Fl_Button	*pixelate;
	Fl_Button	*select_rectangle;
	Fl_Button	*select_polygon;
	Fl_Button	*delete_im;
	Fl_Button	*hide_im;
	Fl_Button	*hide_all;
	Fl_Button	*show_all;
	Fl_Boxtype	text_box_type;
	Immediate	*selected_widget;

	Fl_Group	*general_group;
		Fl_Hor_Slider		*grid_size_slider;
		Fl_Output			*grid_size_output;
		LayerLabelButton	*layer_select_button[8];
		Fl_Toggle_Button	*layer_visible_button[8];
		Fl_Button			*layer_up_button[8];
		Fl_Button			*layer_down_button[8];
		Fl_Button			*paste_button;
		Fl_Button			*clear_copy_buffer_button;
		Fl_Button			*save_button;
		Fl_Button			*load_button;

	Fl_Group	*text_group;
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
		Fl_Toggle_Button	*text_foreground_color_button;
		Fl_Toggle_Button	*text_background_color_button;
		Fl_Toggle_Button	*text_outline_color_button;
		Fl_Light_Button		*text_italic_button;
		Fl_Light_Button		*text_bold_button;
		Fl_Light_Button		*text_outline_button;
		Fl_Multiline_Input	*text_initial_text;

	Fl_Group	*line_group;
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
		Fl_Toggle_Button	*line_style_solid_button;
		Fl_Toggle_Button	*line_style_dash_button;
		Fl_Toggle_Button	*line_style_dot_button;
		Fl_Toggle_Button	*line_style_flat_button;
		Fl_Toggle_Button	*line_style_round_button;
		Fl_Toggle_Button	*line_style_square_button;
		Fl_Toggle_Button	*line_style_arrow_button;
		Fl_Toggle_Button	*line_style_erase_button;
		Fl_Toggle_Button	*line_style_join_miter_button;
		Fl_Toggle_Button	*line_style_join_round_button;
		Fl_Toggle_Button	*line_style_join_bevel_button;
		Fl_Toggle_Button	*line_type_segments_button;
		Fl_Toggle_Button	*line_type_curves_button;

	Fl_Group	*rectangle_group;
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
		Fl_Toggle_Button	*rectangle_style_solid_button;
		Fl_Toggle_Button	*rectangle_style_dash_button;
		Fl_Toggle_Button	*rectangle_style_dot_button;
		Fl_Toggle_Button	*rectangle_style_join_miter_button;
		Fl_Toggle_Button	*rectangle_style_join_round_button;
		Fl_Toggle_Button	*rectangle_style_join_bevel_button;
		Fl_Toggle_Button	*rectangle_filled_button;
		Fl_Toggle_Button	*rectangle_erase_button;

	Fl_Group	*freehand_group;
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
		Fl_Toggle_Button	*freehand_shape_square_button;
		Fl_Toggle_Button	*freehand_shape_circle_button;
		Fl_Toggle_Button	*freehand_shape_erase_square_button;
		Fl_Toggle_Button	*freehand_shape_erase_circle_button;
		Fl_Toggle_Button	*freehand_shape_stamp_button;
		Fl_Button			*freehand_shape_stamp_file_button;
		Fl_Toggle_Button	*freehand_shape_key_button;
	Fl_Group	*image_group;
		RectangleSample		*image_sample;
		Fl_Toggle_Button	*image_file_button;
		Fl_Input			*image_file_path;
	Fl_Group	*pixelate_group;
		Fl_Hor_Slider		*pixelate_size_slider;
		Fl_Output			*pixelate_size_output;
		Fl_Toggle_Button	*pixelate_pixelate_button;
		Fl_Toggle_Button	*pixelate_blur_button;

	MyWin		*my_window;
	int			mode;
	int			last_x;
	int			last_y;

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

class	StoredImDefault
{
public:
				StoredImDefault();

	int			width;
	int			red;
	int			green;
	int			blue;
	int			alpha;
	int			style;
	int			background_red;
	int			background_green;
	int			background_blue;
	int			background_alpha;
	int			shape;
	int			use_size;
	int			filled;
	int			selecting;
	int			erase;
	int			box_type;

	int			xx[32768];
	int			yy[32768];
	int			pt_type[32768];
	int			cnt;
	char		key;
	int			italic;
	int			bold;
	int			outline;
	int			font_alpha;
	int			outline_alpha;
	char		font_name[128];
	char		image_file_path[4096];
	char		freehand_filename[4096];
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

class	ImRectangle : public ImDefault, public Fl_Group
{
public:
			ImRectangle(MyWin *in_win, Immediate *in_im, int xx, int yy, int ww, int hh);
			~ImRectangle();
	void	draw();
};

class	ImPixelate : public ImDefault, public Fl_Group
{
public:
			ImPixelate(MyWin *in_win, Immediate *in_im, int xx, int yy, int ww, int hh);
			~ImPixelate();
	void	draw();
};

class	ImRectangleSelect : public ImDefault, public Fl_Group
{
public:
			ImRectangleSelect(MyWin *in_win, Immediate *in_im, int xx, int yy, int ww, int hh);
			~ImRectangleSelect();
	void	draw();
};

class	ImImage : public ImDefault, public Fl_Group
{
public:
			ImImage(MyWin *in_win, Immediate *in_im, int xx, int yy, int ww, int hh);
			~ImImage();
	void	draw();
};

class	ImEllipse : public ImDefault, public Fl_Group
{
public:
		ImEllipse(MyWin *in_win, Immediate *in_im, int xx, int yy, int ww, int hh);
		~ImEllipse();
	void	draw();
};

class	ImFreehand : public ImDefault, public Fl_Group
{
public:
		ImFreehand(MyWin *in_win, Immediate *in_im, int xx, int yy, int ww, int hh);
		~ImFreehand();
	void	draw();
};

class	ImLine : public ImDefault, public Fl_Group
{
public:
		ImLine(MyWin *in_win, Immediate *in_im, int in_type, int xx, int yy, int ww, int hh);
		~ImLine();
	void	draw();

	void	Extent(int& ix, int& iy, int& iw, int& ih);
	void	AddPoint(int in_x, int in_y);
	void	Revise(int in_x, int in_y);
	void	DoStamp(cairo_t *cr, double xx, double yy);
	void	ImageLine(cairo_t *cr, int x0, int y0, int x1, int y1, int in_sz);
};

class	Immediate : public Fl_Group
{
public:
			Immediate(MyWin *in_win, Camera *in_cam, ImmediateDrawingWindow *in_idw, int xx, int yy, int ww, int hh);
			Immediate(Immediate *old, Camera *in_cam);
			Immediate(MyWin *in_win, Camera *in_cam, int xx, int yy, int ww, int hh);
	int		handle(int event);
	void	draw();

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

	ImmediateDrawingWindow	*idw;

	ImText					*text;
	ImLine					*line;
	ImRectangle				*rectangle;
	ImRectangleSelect		*rectangle_select;
	ImEllipse				*ellipse;
	ImFreehand				*freehand;
	ImPixelate				*pixelate;
	ImImage					*image_im;

	PopupMenu				*popup;

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
	int		mw_mode;
};

class	StoredImmediate
{
public:
			StoredImmediate();
	void	Populate(Immediate *im);
	void	Depopulate(MyWin *win, Camera *cam, Immediate *im);

	int		sx;
	int		sy;
	int		sw;
	int		sh;
	StoredImDefault	stored_default;

	char	stored_value[32768];
	int		im_type;
	int		draw_it;
	int		immediate_type;
	int		hovering;
	int		dragging;
	int		initial_x;
	int		initial_y;
	int		last_x;
	int		last_y;
	int		layer;
	int		drag_mode;
	double	overall_alpha;
	int		mw_mode;
};

class	SelectOutputWindow : public Fl_Window
{
public:
		SelectOutputWindow(MyWin *in_win, int xx, int yy, int ww, int hh);
		~SelectOutputWindow();
	int	handle(int event);

	void	Populate();

	Fl_Pack				*pack;
	Fl_Button			*close;

	MyWin				*my_window;
	int					last_x;
	int					last_y;
};

class	SetOutputWindow : public Fl_Window
{
public:
		SetOutputWindow(MyWin *in_win, int xx, int yy, int ww, int hh);
		~SetOutputWindow();
	int	handle(int event);

	void	Populate();
	void	Debrief();
	void	Scan();

	MyWin				*my_window;
	Fl_Scroll			*scroll;
	Fl_Pack				*pack;
	Fl_Light_Button		*button[128];
	Fl_Input			*name[128];
	Fl_Input			*preset[128];
	int					last_x;
	int					last_y;
};

class	CommandKeyGroup : public Fl_Group
{
public:
		CommandKeyGroup(CommandKeySettingsWindow *in_win, int xx, int yy, int ww, int hh, char *lbl, char *val = "");
		~CommandKeyGroup();

	void	Close();
	void	value(char *val);

	CommandKeySettingsWindow	*my_window;

	Fl_Box		*lbl_box;
	Fl_Input	*value_input;
	Fl_Button	*value_button;
	Fl_Choice	*value_menu;
};

class	CommandKeySettingsWindow : public Fl_Window
{
public:
		CommandKeySettingsWindow(MyWin *in_win, int ww, int hh);
		~CommandKeySettingsWindow();

	void	CloseAll();

	Fl_Button	*accept;
	Fl_Button	*cancel;
	Fl_Button	*reset;

	MyWin		*my_window;
	CommandKeyGroup	*command_key_group[128];
	int		command_key_cnt;
};

class	ThumbButton : public Fl_Button
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

class	ThumbGroup : public Fl_Double_Window
{
public:
			ThumbGroup(MyWin *win, int idx, int xx, int yy, int ww, int hh);
	void	draw();
	int		handle(int event);
	void	UpdateButtons(Camera *cam);

	MyWin		*my_win;
	ThumbButton	*thumb_button;
	Fl_Button	*remove;
	Fl_Button	*place;
	Fl_Button	*record;
	Fl_Button	*detect_motion;
	Fl_Button	*detect_object;
	Fl_Button	*instrument;
	Fl_Button	*set_color;
	Fl_Button	*set_text_color;
	Fl_Button	*pause_av;
	Fl_Button	*mute_av;
	int		index;

	Fl_Window		*V4L_Window;
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
	Fl_Toggle_Button	*autofocus;
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

class	ProgressScrubber : public Fl_Group
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
		MySlider(int, int, int, int, char *);
		~MySlider();
	void	draw();

	double		initial_value;
	Fl_Button	*reset;
};

class	TriggerWindow : public Fl_Window
{
public:
		TriggerWindow(MyWin *);
		~TriggerWindow();

	MyWin		*main_win;
	ThumbButton	*thumbnail[128];
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

class	TransparentWindow : public Fl_Window
{
public:
			TransparentWindow(Fl_Window *in_win, int xx, int yy, int ww, int hh, char *lbl = NULL);
			~TransparentWindow();
	void		draw();
	Fl_Window	*primary;
};

class	GUI_SettingsWindow : public Fl_Window
{
public:
		GUI_SettingsWindow(MyWin *);
		~GUI_SettingsWindow();

	MyWin		*my_window;
	
	Fl_Light_Button *retain_commands_button;
	Fl_Light_Button *retain_cameras_button;
	Fl_Light_Button *retain_audio_button;
	Fl_Light_Button *retain_ptz_button;
	Fl_Light_Button *retain_all_button;

	Fl_Box		*background_color_box;
	Fl_Button	*background_color_button;
	Fl_Box		*text_color_box;
	Fl_Button	*text_color_button;
	Fl_Box		*highlight_color_box;
	Fl_Button	*highlight_color_button;
	Fl_Box		*gray_color_box;
	Fl_Button	*gray_color_button;
	Fl_Box		*dark_gray_color_box;
	Fl_Button	*dark_gray_color_button;
	Fl_Box		*red_color_box;
	Fl_Button	*red_color_button;
	Fl_Box		*dark_red_color_box;
	Fl_Button	*dark_red_color_button;
	Fl_Box		*blue_color_box;
	Fl_Button	*blue_color_button;
	Fl_Box		*dark_blue_color_box;
	Fl_Button	*dark_blue_color_button;
	Fl_Box		*cyan_color_box;
	Fl_Button	*cyan_color_button;
	Fl_Hold_Browser	*font_browser;

	unsigned char	background_color_r;
	unsigned char	background_color_g;
	unsigned char	background_color_b;

	unsigned char	highlight_color_r;
	unsigned char	highlight_color_g;
	unsigned char	highlight_color_b;

	unsigned char	text_color_r;
	unsigned char	text_color_g;
	unsigned char	text_color_b;

	unsigned char	gray_color_r;
	unsigned char	gray_color_g;
	unsigned char	gray_color_b;

	unsigned char	dark_gray_color_r;
	unsigned char	dark_gray_color_g;
	unsigned char	dark_gray_color_b;

	unsigned char	red_color_r;
	unsigned char	red_color_g;
	unsigned char	red_color_b;

	unsigned char	dark_red_color_r;
	unsigned char	dark_red_color_g;
	unsigned char	dark_red_color_b;

	unsigned char	cyan_color_r;
	unsigned char	cyan_color_g;
	unsigned char	cyan_color_b;

	unsigned char	blue_color_r;
	unsigned char	blue_color_g;
	unsigned char	blue_color_b;

	unsigned char	dark_blue_color_r;
	unsigned char	dark_blue_color_g;
	unsigned char	dark_blue_color_b;
};

class	TransitionWindow : public TransparentWindow
{
public:
		TransitionWindow(MyWin *);
		~TransitionWindow();
	void	Update();
	void	draw();

	MyWin		*my_window;
	Fl_Button	*to_black_button;
	Fl_Button	*blend_button;
	Fl_Button	*none_button;
	Fl_Button	*wipe_b2t_button;
	Fl_Button	*wipe_l2r_button;
	Fl_Button	*wipe_r2l_button;
	Fl_Button	*wipe_t2b_button;
	Fl_Box		*selection;
};

class	SelectAudioWindow : public TransparentWindow
{
public:
			SelectAudioWindow(MyWin *);
			~SelectAudioWindow();
	void	draw();

	MyWin	*my_window;
};

class	SelectCameraWindow : public TransparentWindow
{
public:
			SelectCameraWindow(MyWin *);
			~SelectCameraWindow();
	void	draw();

	MyWin	*my_window;
};

class	PseudoCameraWindow : public TransparentWindow
{
public:
		PseudoCameraWindow(MyWin *);
		~PseudoCameraWindow();
	void	draw();

	Fl_Button	*pseudo[1024];

	MyWin		*my_window;
};

class	FilterPluginsWindow : public TransparentWindow
{
public:
			FilterPluginsWindow(MyWin *win, int in_filter_type);
			~FilterPluginsWindow();
	void	draw();
	void	Arrange(int col_flag = 0, int py = -1);

	int			filter_type;
	Fl_Pack		*available;
	Fl_Pack		*use;
	MyWin		*my_window;
	Fl_Button	*my_accept;
	Fl_Button	*my_cancel;
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

class	SettingWindow : public Fl_Window
{
public:
			SettingWindow(MyWin *);
			~SettingWindow();
	void	Update();
	int		handle(int event);
	void	draw();

	int		last_x;
	int		last_y;

	MyWin	*main_win;
	Fl_Int_Input *output_w;
	Fl_Int_Input *output_h;
	Fl_Int_Input *display_w;
	Fl_Int_Input *display_h;

	Fl_Toggle_Button 		*timestamp_default;
	Fl_Input 				*timestamp_format;
	Fl_Button				*timestamp_color_button;
	Fl_Button				*timestamp_background_color_button;
	Fl_Int_Input			*timestamp_font_size;
	Fl_Int_Input			*timestamp_position_x;
	Fl_Int_Input			*timestamp_position_y;

	MySlider *contrast_slider;
	MySlider *brightness_slider;
	MySlider *saturation_slider;
	MySlider *hue_slider;
	MySlider *intensity_slider;
	MySlider *red_intensity_slider;
	MySlider *green_intensity_slider;
	MySlider *blue_intensity_slider;
	MySlider *alpha_intensity_slider;
	MySlider *aspect_x_slider;
	MySlider *aspect_y_slider;
	MySlider *fps_slider;
	MySlider *motion_threshold_slider;
	MySlider *recognition_threshold_slider;
	MySlider *recognition_interval_slider;
	MySlider *encode_fps_slider;
	MySlider *minimum_fps_slider;
	MySlider *capture_interval_slider;

	Fl_Light_Button	*realtime_encoding_button;
	Fl_Light_Button	*embed_pip_button;
	Fl_Button	*gather_codecs_button;
	Fl_Light_Button	*record_all_button;
	Fl_Light_Button	*frame_scaling_button;
	Fl_Light_Button	*crop_scaling_button;
	Fl_Light_Button	*single_stream_button;
	Fl_Light_Button	*create_tag_file_button;
};

class	SnapshotSettingWindow : public Fl_Window
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
	Fl_Light_Button	*snapshot_trigger_on_button;
	Fl_Light_Button	*snapshot_trigger_on_start;
	Fl_Light_Button	*snapshot_trigger_on_record;
	Fl_Light_Button	*snapshot_continuous;
};

class	DetailWin : public Fl_Double_Window
{
public:
		DetailWin(int, int, char *);
		~DetailWin();

	void	draw();
	Mat	mat;
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
	int				Record(int s);
	int				SetBackendFlag(char *);
	void			V4L_Command(int command);
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
	void			ScrollTextList(char *);
	void			GrabWindow();
	void			Save(char *filename);
	void			Save(int fd);
	void			RestoreFromStoredCamera(StoredCamera *in);
	void			PositionAllButtonized();
	void			AddImmediate(Immediate *in);
	int				RemoveImmediate(Immediate *ptr);
	int				FindImmediate(Immediate *ptr);
	void			GrabWindowImage(Window win, Mat *use_mat);
	void			ColorIntensity(Mat frame, double red, double green, double blue, double alpha);
	void			ShowImmediateList();
	void			HideImmediateList();
	void			DrawImageWindowsBefore(int current_layer, int check_only, Mat& in_mat, int& moving_element, int& someone_is_dragging);
	void			DrawImageWindowsAfter();
	void			DrawEmbeddedPIP();
	void			DrawImageWindowGrid(int grid_size);
	void			DisplayAVWindow();
	double			FocusScore(Mat use_mat);
	void			SetFocus(int val);
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
	void			SaveImmediate(int fd);
	void			LoadImmediate(int fd);
	void			TimestampFrame();
	void			TriggerSnapshot();
	void			UnTriggerSnapshot();
	void			GrabThisWindow();
	void			RecordOn();
	void			RecordOff();

	int					type;
	char				path[4096];
	char				original_path[4096];
	char				alias[4096];
	int					capturing;
	int					power;
	int					record;
	int					recording;
	int					requested_x;
	int					requested_w;
	int					requested_h;
	int					requested_y;
	int					object_detect;
	int					follow_objects;
	int					motion_detect;
	int					follow_motion;
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
	int					fd[2];
	int					total_frames[2];
	int					true_total_frames[2];
	int					since_frames[2];
	int					frame_cnt[2];
	time_t				last_time;
	double				fps;
	double				current_fps;
	int					old_fps;
	int					fps_cnt;
	time_t				since_time;
	time_t				elapsed;
	time_t				old_elapsed;
	DetectedObject		detected_object[10];
	int					detected_object_cnt;
	int					detected_object_countdown;
	int					object_index[1024];
	char				format_code[256];

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
	int					list_ready_for_more;
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
};

class	StoredImageWindow
{
public:
	int	index;
	char	source_path[4096];
	double	width;
	double	height;
	double	orig_w;
	double	orig_h;
	double	dx;
	double	dy;
	double	dw;
	double	dh;
	int		layer;
	int	buttonize;
	int	buttonized_x;
	int	buttonized_y;
	int	buttonized_w;
	int	buttonized_h;
};

class	StoredCamera
{
public:
				StoredCamera(Camera *in);
				StoredCamera();

	char		path[4096];
	char		original_path[4096];
	char		alias[4096];
	int			requested_x;
	int			requested_y;
	int			requested_w;
	int			requested_h;
	int			object_detect;
	int			follow_objects;
	int			motion_detect;
	int			follow_motion;
	int			font_sz;
	double		zoom;
	int			width;
	int			height;
	int			id;

	int			flip_horizontal;
	int			flip_vertical;
	double		brightness;
	double		saturation;
	double		hue;
	double		intensity;
	double		contrast;
	int			motion_threshold;
	double		recognition_threshold;
	int			recognize_interval;

	int			zoom_box_display;
	int			zoom_box_x;
	int			zoom_box_y;
	int			zoom_box_w;
	int			zoom_box_h;

	double		display_width;
	double		display_height;

	StoredImageWindow	image_window[128];
	int					image_window_cnt;
	int					immediate_cnt;

	int			red;
	int			green;
	int			blue;
	int			alpha;
	int			text_red;
	int			text_green;
	int			text_blue;
	int			text_alpha;

	char		snapshot_filename_format[4096];
	int			snapshot_initial_delay;
	int			snapshot_repeat_delay;
	int			snapshot_trigger_condition;
	double		snapshot_scale;

	char		filter_plugin_name[128][256];
	int			filter_plugin_cnt;

	char		filter_name[128][256];
	int			filter_cnt;
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

class	V4L_Button : public Fl_Button
{
public:
		V4L_Button(ThumbGroup *, int, int, int, int, char *);
		~V4L_Button();
	int	handle(int);
	ThumbGroup	*my_win;
	int		zooming;
	int		focusing;
};

class	PTZ_Button : public Fl_Button
{
public:
		PTZ_Button(MyWin *, int, int, int, int, char *);
		~PTZ_Button();
	int	handle(int);
	MyWin	*my_window;
};

class	PulseMixer
{
public:
		PulseMixer(MyWin *in_win, int sz);
		~PulseMixer();
	void	Mix(PulseMicrophone *mic);
	void	Mute();
	void	Unmute();
	void	Stop();
	void	Resume();

	MyWin	*my_window;
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

	PulseAudio	*pa_monitor;
	SAMPLE		*play_buffer;
};

class	PulseMicrophone : public PulseAudio
{
public:
		PulseMicrophone(MyWin *in_win, char *device_name);
		~PulseMicrophone();

	MyWin	*my_window;
	char	name[4096];
	void	*filter_plugin[128];
	int		filter_plugin_cnt;
};

class	PulseAudioButton : public Fl_Group
{
public:
		PulseAudioButton(MyWin *, char *, int, int, int, int, char *);
		~PulseAudioButton();
	void	draw();

	Fl_Toggle_Button	*button;
	Fl_Hor_Fill_Slider	*volume;
	Fl_Button			*delete_button;
	Fl_Button			*repeat_button;
	MyWin				*my_window;
	char				*device_name;
	PulseMicrophone		*microphone;
	int					peak;
};

class	PTZ_Position
{
public:
		PTZ_Position(int set, int pan, int tilt, int zoom, int focus);
		~PTZ_Position();
	void	Set(int in_pan, int in_tilt, int in_zoom, int in_focus);
	void	UnSet();

	int	set;
	int	pan;
	int	tilt;
	int	zoom;
	int	focus;
};

class	AliasWindow : public Fl_Window
{
public:		
		AliasWindow(MyWin *in_win, int xx, int yy);
		~AliasWindow();
	int	handle(int event);

	Fl_Input	*alias;
	MyWin		*my_window;
};

class	NewSourceWindow : public Fl_Window
{
public:		
			NewSourceWindow(MyWin *in_win, int xx, int yy);
			~NewSourceWindow();
	int		handle(int event);
	void	Show(int edit_mode);

	Fl_Multiline_Input	*source;
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

	Fl_Button		*create;
	Fl_Button		*cancel;
	Fl_Button		*camera_select;
	Fl_Button		*audio_select;
	Fl_Button		*box_select;
	Fl_Button		*window_select;
	Fl_Button		*desktop_select;
	Fl_Button		*av_file_select;
	Fl_Button		*image_file_select;
	Fl_Button		*html_select;
	Fl_Button		*html_source_select;
	Fl_Button		*sourced_select;
	Fl_Button		*edge_detect_select;
	Fl_Button		*chromakey_green_select;
	Fl_Button		*chromakey_blue_select;
	Fl_Button		*alternating_select;
	Fl_Button		*all_select;
	Fl_Button		*pipe_select;
	Fl_Button		*single_frame_file_select;
	Fl_Button		*osg_select;
	Fl_Button		*pseudo_camera_select;
	Fl_Button		*plugin_camera_select;

	MyWin			*my_window;
	int				edit_mode;
};

class	EncodeSpeedWindow : public Fl_Group
{
public:
		EncodeSpeedWindow(MyWin *in, int xx, int yy, int ww, int hh);
		~EncodeSpeedWindow();

	void	Reset();

	MyWin		*my_window;
	Fl_Button	*button[11];
	char		label_buf[11][8];
};

class	PTZ_Window : public Fl_Window
{
public:
		PTZ_Window(MyWin *in_win, int xx, int yy, int ww, int hh);
		~PTZ_Window();

	MyWin	*my_window;
	Camera	*locked_camera;
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
			StartWindow(int xx, int yy, int ww, int hh, int in_argc, char *lbl);
	void	draw();

	void	Update(char *str);

	int		argc;
	Fl_Box	*text;
	int		image_mat_cnt;
	Mat		image_mat[128];
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
			, int in_direct
			, int ww
			, int hh
			, int output_ww
			, int output_hh
			, int display_ww
			, int display_hh
			, int in_fps
			, double in_interval
			, int in_split
			, int in_main
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
			, int in_display_recording_camera
			, int in_transition
			, int in_ptz_path_cnt
			, char *in_ptz_path[NUMBER_OF_INTERFACES]
			, char *in_ptz_lock_alias[NUMBER_OF_INTERFACES]
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
			, int use_scale_gui
			, char *load_file
			, int use_retain_commands
			, int use_retain_cameras
			, int use_retain_audio
			, int use_retain_ptz
			, int use_hide_status
			, int use_auto_scale
			, int crop_output
			, int use_disregard_settings
			, char *lbl);
		~MyWin();
	void	Shutdown();

	void    draw();
	int	handle(int);

	int	MatchArea(int, int, int);
	Camera	*CurrentCamera();
	Camera	*DisplayedCamera();
	void	ShowButtons();
	void	HideButtons();
	void	SaveInterest();
	void	LoadInterest();
	int		FindMovement(int, int *, int *, int *, int *, int, int, int, int);
	void    copy_interest(unsigned char *dest, unsigned char *src, int sz, int sx, int sy, int ex, int ey);
	void	MakeNewSourceWindow();
	void	MakeAliasWindow();
	int		SetupCamera(char *source, char *alias, int req_w, int req_h, int font_sz, char *font_name = NULL, int rr = 0, int gg = 0, int bb = 0, int aa = 0, int t_rr = 255, int t_gg = 255, int t_bb = 255, int t_aa = 255, int chroma_color = CHROMA_ON_GREEN);
	void	ResizeCapture(int source_n, int ww, int hh);
	void	RemoveSource(int src);
	void	Encode();
	void	ReallyEncode(int);
	void	DrawDetailFrame(Fl_Color colr);
	void	CropFrame(Mat in, Mat *out, int xx, int yy, int ww, int hh);
	void	MarkInterestGrid();
	void	SplitScreen();
	void	Detect();
	void	MarkInterest();
	void	CurrentFPS();
	void	CalcInitialFPS();
	void	ResizeDetail();
	void	DrawThumbnails();
	void	DrawPIP();
	void	DrawEmbeddedPIP();
	void	DrawEncodingMessage();
	void	DrawExtractingMessage();
	void	DrawDumpingMessage();
	void	DumpDirectRecording(char *, char *);
	void	EncodeAVIWithOgg();
	void	HideAudio();
	void	ShowAudio();
	void	HideObjects();
	void	ShowObjects();
	void	ScanForCameras();
	void	ScanAudio(int use_audio);
	void	ScanPulse(int use_sources);
	void	OpenNamedPulse();
	void	ReadClasses();
	int		DrawPred(Camera *cam, int classId, float conf, int left, int top, int right, int bottom, Mat &frame);
	void	AllCameraMotion();
	void	RecordOn();
	void	RecordOff();
	void	SetupObjectDetection();
	void	RecordAll();
	void	SelectRecordingCamera();
	void	SetAllCamerasToStream(Camera *in_cam);
	void	SetAllCamerasToStop();
	void	SetAllCamerasToGo();
	void	ResetCameras(int reset_cameras, char **source, int source_cnt);
	void	TriggerCamera(Camera *cam);
	void	PTZ_DoCommand(int button, int arg_cnt = 0, int arg0 = 0, int arg1 = 0, int arg2 = 0, int arg3 = 0, int arg4 = 0);
	void	ViscaSpecs(VISCAInterface_t *interface, MyVISCACamera *camera);
	void	AutoFocus(int on);
	void	DigitalZoom(int on);
	void	AutoExposure(int on);
	void	BacklightCompensation(int on);
	void	StartVisca();
	void	ViscaCommand(int command, int arg_cnt = 0, int arg1 = 0, int arg2 = 0, int arg3 = 0, int arg4 = 0, int arg5 = 0);
	void	ViscaButtonCommands(Fl_Button *b, int state);
	void	SetupPTZWindow(int home_on_launch);
	void	PTZ_MoveTo(int spd_x, int spd_y, int xx, int yy);
	void	PTZ_GoToAbs(int dx, int dy);
	void	SavePTZPositions();
	void	LoadPTZPositions();
	void	PTZ_RememberPosition(int num);
	void	PTZ_UnRememberPosition(int num);
	int		PTZ_RecallPosition(int speed, int num);
	void	GoToPTZPosition(int speed, int in_pan, int in_tilt, int in_zoom, int in_focus);
	void	UpdatePresets();
	void	TourPresets();
	void	MoveALittle(int key);
	void	ZoomALittle(int key);
	void	FocusALittle(int key);
	void	ZoomAndFocusALittle(int key);
	void	CenterMessage(char *msg, int timer);
	int		ptz_joystick_handler();
	void	SendToNetwork();
	void	DrawAudioGraph(Camera *cam);
	void	GrabDesktop(int retain_size = 0);
	void	GrabCameraArea();
	void	Done();
	void	RunPulse(int mode);
	void	RemoveCamera(Camera *cam);
	void	ShowButtonPanel(int xx);
	void	RecordingFullStop();
	void	ShowLog();
	void	LoadCamera(char *filename);
	void	LoadCamera(int fd);
	Camera	*FindCameraByPath(char *path);
	void	RestoreFromStored(StoredMyWin *in_win);
	void	Cleanup();
	void	Save(char *filename);
	void	Load(char *filename);
	int		ImageWindowButtonHit(int xx, int yy);
	void	AddLastMuxed(char *filename);
	void	FrameForMuxer(Camera *cam, Mat in_mat);
	void	DeleteImmediate();
	int		HandleKeyboard(int event, Camera *cam);
	void	ToggleRecord(Camera *cam);
	void	ToggleRecord(int camera_index);
	int		DoDeleteImmediate();
	int		TogglePTZJoystick();
	int		IncreasePTZLittleSpeed();
	int		DecreasePTZLittleSpeed();
	int		CyclePTZLittleMode();
	int		PTZHome();
	void	CycleDownThumbgroup();
	void	CycleUpThumbgroup();
	int		DisplayThumbgroup(int nn);
	int		LittleMotion(int key);
	void	Review();
	void	LocalZoomIn(Camera *cam);
	void	LocalZoomOut(Camera *cam);
	void	ToggleFrozen();
	void	DoSnapshot();
	void	ScaleVideoUp();
	void	ScaleVideoDown();
	void	ScaleVideoReset();
	int		DisplaySplitSelection(int nn);
	int		HandlePushForSplit();
	int		HandlePushToSelectImmediate(Camera *cam);
	int		HandlePushToEditImmediate(Camera *cam);
	void	ImmediateNewlySelectedHighlight();
	int		DoMarkInterest();
	int		HandlePushForPTZ(Camera *cam);
	int		HandleReleaseForImmediate(Camera *cam);
	int		HandleRelease(Camera *cam);
	int		HandleReleaseForPTZ(Camera *cam);
	int		HandleMove(Camera *cam);
	int		HandleImmediateDrag(Camera *cam);
	int		HandlePTZDrag();
	int		HandleDrag(Camera *cam);
	int		HandleMousewheelPTZ(Camera *cam);
	int		HandleMousewheel(Camera *cam);
	int		HandleMousewheelResizeCapture(Camera *cam);
	void	ResetCommandKeys();
	void	ReadCommandKeyDefinitions(char *filename);
	int		CheckCommandTitle(char *str);
	void	SaveCommandKeyDefinitions(char *filename);
	char	*CommandKeyName(int nn);
	void	FrameImage(Camera *cam, Mat& in_mat, Mat& out_mat, double force_aspect_x, double force_aspect_y);
	double	CalcButtonSize(int y_pos, int& y_inc, int req_w, int req_h);
	void	AddEmbeddedWindow(EmbedAppWindow *embed);
	void	CalcEmbeddedWindowPosition(int use_w, int use_h, int& x_pos, int& y_pos);
	void	ReadInExternalPrograms();
	void	DisplayOutput(Camera *cam, Mat in_mat, Camera *alt_cam);
	void	DrawEmbeddedApps();
	void	DrawPIPsAfter();
	void	DrawPTZZoomer(int use_image_sx, int use_image_sy);
	int		ScanForDuplicateCameras(char *in_path);
	int		PopulateCameraCaps();
	void	ClearCameraCaps();
	void	ShowPTZ(Camera *cam, int xx, int yy);
	void	ShowAudio(int xx, int yy);
	void	ShowVideoThumbs(int xx, int yy);
	void	CompressAudioThumbnailList();
	int		CountActiveMics();
	void	BuildMainMenu();
	void	SetupObjectMenu();
	void	BuildSetOutputWindow();
	void	BuildSelectOutputWindow();
	void	LoadOutputPathList(char *filename);
	void	SaveOutputPathList(char *filename);
	void	SetUseOutputPath(int index, char *buf);
	int		PushToSelectColors(Camera *cam);
	FilterDialog	*MakeFilterDialog(char *name);
	void			UpdateThumbButtons();
	void			Display(int cam_index);
	void			AltDisplay(int cam_index);
	void			Display(Camera *cam);
	void			AddImmediate(Immediate *in);
	void			PasteImmediate();
	void			ClearImmediate();
	int				AddMiscCopy(Camera *in_source, int in_type, Mat local, int immediate_display, char *str, int xx, int yy, int ww, int hh, int rr = -1, int gg = -1, int bb = -1, int aa = -1);
	int				InMiscPasted(int xx, int yy, int& r_outer, int& r_inner);
	void			MiscPaste(int in_x = -1, int in_y = -1);
	void			MiscRemoveAll();
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
	int				CountRecordingCameras();

	Fl_Group	*resize_grp;
	int			current_source;
	int			displayed_source;
	int			alt_displayed_source;
	char		*source[1024];
	int			source_cnt;
	char		**audio_source;
	int			audio_source_cnt;
	Camera		*camera[128];
	int			original_w;
	int			original_h;
	int			disregard_settings;
	Mat			yuv;
	Mat			in_mat;
	Mat			monitor_mat;
	Mat			desktop_mat;
	int			all_fd;
	int			clipboard_changed;
	int			refreshed;
	int			split_bx[10];
	int			split_by[10];
	int			split_rx[10];
	int			split_ry[10];
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
	int			resize_capture;
	int			direct_recording;
	int			muxing;
	int			no_scan;
	int			no_audio_scan;
	int			mux_init;
	int			selecting_colors;
	VideoWriter 	*direct_recorder;
	int			video_count;
	char		last_used_filename[256];

	Muxer		*my_muxer[128];
	int			muxer_cnt;

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

	char		*output_name[128];
	char		*output_path[128];
	int			output_active[128];
	int			output_path_cnt;

	ThumbButton	*dragging_thumb;
	int			dragging_thumb_x;
	int			dragging_thumb_y;
	Immediate	**immediate_list;
	int			immediate_cnt;
	int			rubber_band_x;
	int			rubber_band_y;
	int			rubber_band_w;
	int			rubber_band_h;
	int			rubberband_mode;
	PopupMenu	*popup;
	MiscCopy	**misc_copy;
	int			misc_copy_cnt;
	int			editing_misc_outer;
	int			editing_misc_inner;
	int			editing_misc_mode;

	PulseMicrophone	*pulse_microphone[128];
	int				pulse_microphone_cnt;
	PulseMixer		*pulse_mixer;
	int				audio;
	int				mute_audio;

	ColorItWindow	*color_it_window;

	Shape			**shape;
	int				shape_cnt;

	Fl_Button	*object_name_button[1024];
	Fl_Button	*object_clear_button;
	Fl_Button	*object_all_button;
	Fl_Button	*object_done_button;
	Fl_Button	*object_next_button;
	Fl_Button	*object_prev_button;
	Fl_Box		*object_box;
	int			object_page;
	long int	dumped_frames;
	long int	dumped_limit;
	char		*dump_type;
	char		mux_format[128];
	pthread_mutex_t	mux_mutex;

	Fl_Window	*button_group;
	EncodeSpeedWindow	*encode_speed_window;
	MenuButton	*record_button;
	MenuButton	*power_button;
	MenuButton	*mute_video_button;
	MenuButton	*freeze_button;
	MenuButton	*hide_video_button;
	MenuButton	*load_setup_button;
	MenuButton	*save_setup_button;
	MenuButton	*motion_button;
	MenuButton	*object_button;
	MenuButton	*follow_button;
	MenuButton	*follow_objects_button;
	MenuButton	*trigger_button;
	MenuButton	*timestamp_button;
	MenuButton	*dump_button;
	MenuButton	*encode_button;
	MenuButton	*jpeg_streaming_button;
	MenuButton	*main_detail_button;
	MenuButton	*show_debug_button;
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
	MenuButton	*open_standalone_button;
	MenuButton	*new_source_button;
	MenuButton	*edit_source_button;
	MenuButton	*set_output_button;
	MenuButton	*select_output_button;
	MenuButton	*alias_button;
	MenuButton	*flip_horizontal_button;
	MenuButton	*flip_vertical_button;
	MenuButton	*settings_button;
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
	MenuButton	*save_camera_button;
	MenuButton	*load_camera_button;
	MenuButton	*codecs_button;
	MenuButton	*audio_mute_button;
	MenuButton	*monitor_audio_button;
	MenuButton	*toggle_objects_button;
	Fl_Button	*quit_button;

	Fl_Button	*ptz_up_button;
	Fl_Button	*ptz_up_right_button;
	Fl_Button	*ptz_up_left_button;
	Fl_Button	*ptz_down_button;
	Fl_Button	*ptz_down_right_button;
	Fl_Button	*ptz_down_left_button;
	Fl_Button	*ptz_left_button;
	Fl_Button	*ptz_right_button;
	Fl_Button	*ptz_zoom_in_button;
	Fl_Button	*ptz_zoom_out_button;
	Fl_Button	*ptz_focus_far_button;
	Fl_Button	*ptz_focus_near_button;
	Fl_Button	*ptz_aperture_open_button;
	Fl_Button	*ptz_aperture_close_button;
	Fl_Button	*ptz_home_button;
	Fl_Box		*zoom_label;
	Fl_Box		*focus_label;
	Fl_Box		*aperture_label;
	Fl_Box		*ptz_zoom_value_label;
	Fl_Box		*ptz_focus_value_label;
	Fl_Button	*ptz_interface_select_button[NUMBER_OF_INTERFACES];
	Fl_Button	*ptz_camera_select_button[NUMBER_OF_CAMERAS];
	CodecSelectionWindow *codec_selection_window;
	int		SetCodec();

	Fl_Button		*ptz_camera_preset_button[NUMBER_OF_PRESETS];
	Fl_Toggle_Button	*ptz_camera_set_button[NUMBER_OF_PRESETS];
	PTZ_Position		*ptz_position[NUMBER_OF_INTERFACES][NUMBER_OF_CAMERAS][NUMBER_OF_PRESETS];
	Fl_Button		*ptz_camera_preset_page_back_button;
	Fl_Button		*ptz_camera_preset_page_forward_button;
	int			ptz_preset_page;
	Fl_Pack		*audio_thumbnail_pack[3];
	Fl_Group	*audio_thumbnail_group;

	Fl_Hor_Fill_Slider	*ptz_speed_slider;
	Fl_Light_Button		*ptz_lock_to_camera_button;
	Fl_Light_Button		*ptz_auto_focus;
	Fl_Light_Button		*ptz_auto_exp;
	Fl_Light_Button		*ptz_backlight;
	Fl_Light_Button		*ptz_follow_button;
	Fl_Light_Button		*ptz_dzoom_button;
	Fl_Light_Button		*ptz_tour_button;
	Fl_Light_Button		*ptz_reverse_horizontal_button;
	Fl_Light_Button		*ptz_reverse_vertical_button;
	Fl_Toggle_Button	*ptz_zoom_speed_adjust_button;
	Fl_Light_Button		*ptz_joystick_button;
	Fl_Light_Button		*ptz_soft_memory_button;
	PTZ_Window			*ptz_window;

	int							start_thumbgroup;
	Fl_Group					*video_thumbnail_group;
	ThumbGroup					*thumbnail[128];
	PulseAudioButton			*audio_thumbnail[128];
	int							audio_thumbnail_cnt;
	SettingWindow				*settings_window;
	SnapshotSettingWindow		*snapshot_settings_window;
	GUI_SettingsWindow			*gui_settings_window;
	EmbedAppSettings			*embed_app_settings;
	TransitionWindow			*transitions_window;
	PseudoCameraWindow			*pseudo_camera_window;
	FilterPluginsWindow			*filter_built_in_window;
	FilterPluginsWindow			*filter_plugins_window;
	FilterPluginsWindow			*audio_filter_plugins_window;
	ImmediateDrawingWindow		*immediate_drawing_window;
	SetOutputWindow				*set_output_window;
	SelectOutputWindow			*select_output_window;
	TriggerWindow				*trigger_window;
	NewSourceWindow				*new_source_window;
	AliasWindow					*alias_window;
	FltkPluginWindow			*fltk_plugin_window;
	CommandKeySettingsWindow	*command_key_settings;
	time_t						start_time;
	int							encoding;
	int							extracting;
	int							stream;
	DetailWin					*detail;
	ReviewWin					*review;
	MuxPreviewWindow			*review_muxed;

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
	time_t	detect_time;
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
	int		scale_gui;
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
	int		showing_new_source_window;
	int		showing_alias_window;
	int		encoding_frame_cnt;
	int		frozen;
	int		redraw_cnt;
	Net		net;

	double	transition_cnt;
	Camera	*last_cam;
	int		trigger_select_mode;
	int		record_all;
	int		record_desktop;
	int		desktop_x;
	int		desktop_y;
	int		desktop_w;
	int		desktop_h;
	int		single_stream;
	int		display_recording_camera;
	int		transition;
	ProgressScrubber	*progress_scrubber;
	
	VISCAInterface_t	iface[NUMBER_OF_INTERFACES];
	VISCAInterface_t	*ptz_current_interface;
	int					ptz_interface_index;
	MyVISCACamera		visca_camera[NUMBER_OF_CAMERAS];
	MyVISCACamera		*ptz_current_camera;
	int					ptz_current_camera_idx;
	int					ptz_remember_camera[NUMBER_OF_CAMERAS];
	int					ptz_mode;
	char				*ptz_device_path[NUMBER_OF_INTERFACES];
	char				*ptz_lock_alias[NUMBER_OF_INTERFACES];
	char				*ptz_alias[NUMBER_OF_INTERFACES];
	int					ptz_device_cnt;
	char				*ptz_current_device_path;
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
	int					ptz_pan_reading;
	int					ptz_tilt_reading;
	double				ptz_pan_speed;
	double				ptz_tilt_speed;
	int					ptz_dragged;
	int					use_pan_speed;
	int					use_tilt_speed;
	int					visca_command;
	int					visca_arg[10];
	int					visca_arg_cnt;
	pthread_mutex_t		visca_mutex;
	pthread_cond_t		visca_cond;
	double				ptz_travel_x;
	double				ptz_travel_y;
	int					ptz_focus_speed;
	int					ptz_zoom_speed;
	int					ptz_follow;
	int					ptz_follow_home_pan;
	int					ptz_follow_home_tilt;
	int					ptz_adjust_speed_for_zoom;
	int					ptz_tour_index;
	int					ptz_little_speed;
	int					ptz_little_mode;
	char				center_message[256];
	int					center_message_timer;
	int					ptz_reverse_horizontal;
	int					ptz_reverse_vertical;
	int					ptz_zoomer;
	int					ptz_zoomer_speed;
	int					ptz_joystick;
	int					ptz_joystick_x;
	int					ptz_joystick_y;
	int					ptz_last_joystick_x;
	int					ptz_last_joystick_y;
	int					ptz_soft_memory[NUMBER_OF_INTERFACES][NUMBER_OF_CAMERAS];
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

	int			render_mouse;
	int			tutorial_mode;
};

class	StoredMyWin
{
public:
				StoredMyWin(MyWin *win);
				StoredMyWin();
				~StoredMyWin();

	void		Load(char *filename);
	void		Load(int fd);
	void		Save(char *filename);
	void		Save(int fd);

	char		source[128][4096];
	int			source_cnt;
	char		audio_source[128][4096];
	int			audio_source_cnt;
	int			split_bx[10];
	int			split_by[10];
	int			split_rx[10];
	int			split_ry[10];
	int			requested_x;
	int			requested_y;
	int			requested_w;
	int			requested_h;
	int			output_width;
	int			output_height;
	double		display_width;
	double		display_height;
	int			image_sx;
	int			image_sy;
	int			use_mousewheel;
	int			direct_recording;
	int			muxing;
	int			no_scan;
	int			no_audio_scan;
	char		yolo_cfg_filename[4096];
	char		yolo_weights_filename[4096];
	char		yolo_names_filename[4096];
	int			forced_fps;
	double		forced_interval;
	double		restore_forced_interval;
	double		minimum_fps;
	char		jpeg_streaming[4096];
	int 		jpeg_streaming_port;
	int			streaming;
	char		stream_url[4092];
	int			stream_only;
	int			streaming_audio_quality;
	int			embed_pip;
	double		pip_x_position;
	double		pip_y_position;
	int			pip_red;
	int			pip_green;
	int			pip_blue;
	double		pip_size;
	int			multipip;
	int			grid_size;
	double		speed_factor;
	char		desktop_monitor[4096];

	int			audio;
	int			mute_audio;
	char		mux_format[128];

	int		encoding;
	int		stream;
	int		visible_debug;
	int		interest_x[100];
	int		interest_y[100];
	int		interest_cnt;
	int		snapshot;
	int		timestamp;
	int		resizing_detail;
	int		drag_start_x;
	int		drag_start_y;
	int		motion_debug;
	int		split;
	int		retain_commands;
	int		retain_cameras;
	int		retain_audio;
	int		retain_ptz;

	int		record_all;
	int		record_desktop;
	int		desktop_x;
	int		desktop_y;
	int		desktop_w;
	int		desktop_h;
	int		single_stream;
	int		display_recording_camera;
	int		transition;
	
	char			ptz_device_path[NUMBER_OF_INTERFACES][4096];
	char			ptz_lock_alias[NUMBER_OF_INTERFACES][4096];
	char			ptz_alias[NUMBER_OF_INTERFACES][4096];
	int				ptz_device_cnt;
	int				ptz_zoom;
	int				old_ptz_zoom;
	int				ptz_panning;
	int				ptz_zooming;
	int				ptz_focusing;
	double			ptz_pan_speed;
	double			ptz_tilt_speed;
	int				use_pan_speed;
	int				use_tilt_speed;
	int				ptz_focus_speed;
	int				ptz_zoom_speed;
	int				ptz_follow;
	int				ptz_adjust_speed_for_zoom;
	int				ptz_tour_index;
	int				ptz_little_speed;
	int				ptz_little_mode;
	int				ptz_reverse_horizontal;
	int				ptz_reverse_vertical;
	int				ptz_joystick;
	int				transmitting;
	ImageMemory		image_memory;

	AVCodecID		use_video_codec;
	AVCodecID		use_audio_codec;
	char			use_extension[256];
};

class	TitleBox : public Fl_Window
{
public:
		TitleBox(ReviewWin *in_win, int xx, int yy, int frame);
		~TitleBox();

	int	handle(int);
	void	draw();

	Fl_Multiline_Input	*text_in;
	Fl_Button			*remove_button;
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

	Fl_Button			*play;
	Fl_Button			*play_trim;
	Fl_Repeat_Button	*advance_one;
	Fl_Repeat_Button	*retreat_one;
	Fl_Button			*encode;
	Fl_Button			*start_trim_button;
	Fl_Button			*end_trim_button;
	Fl_Button			*clear_trim_button;
	Fl_Button			*snap_one_button;
	Fl_Button			*moving_crop_button;
	Fl_Button			*add_text_button;
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

class	ImageWindow : public Fl_Group
{
public:
		ImageWindow(int in_index, MyWin *win, Camera *cam, Camera *dest_camera, int xx, int yy, int ww, int hh);
		~ImageWindow();

	int		handle(int);
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
	int			mw_transparency;
	int			mw_rotate;
	double		angle;
	PopupMenu	*popup;
	int			frame;
	int			flip_horizontal;
	int			flip_vertical;
};

class	EmbedAppSettings : public Fl_Window
{
public:
	EmbedAppSettings(MyWin *in_win);
	~EmbedAppSettings();

	MyWin		*my_window;
	Fl_Input	*path;
	Fl_Input	*use_w;
	Fl_Input	*use_h;
	Fl_Input	*arg[10];
	Fl_Button	*accept;
	Fl_Button	*cancel;
};

class	FltkPluginWindow : public Fl_Window
{
public:
		FltkPluginWindow(MyWin *in_win);
		~FltkPluginWindow();
	void	Populate();
	void	Reset();

	MyWin		*my_window;

	Fl_Light_Button	*plug_in[1024];

	Fl_Button	*accept;
	Fl_Button	*cancel;
};
