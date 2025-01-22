#include	<unistd.h>
#include	<sched.h>
#include	<time.h>
#include	<sys/time.h>
#include	<fcntl.h>
#include	<semaphore.h>
#include	<sys/sendfile.h>
#include	<signal.h>
#include	<link.h>
#include	<dlfcn.h>
#include	<dirent.h>
#include	<magic.h>

#include <iostream>
#include <string>
#include <memory>
#include <thread>
#include <chrono>

#include	<visca/libvisca_ip.h>
#include    <Processing.NDI.Lib.h>
#include    <Processing.NDI.DynamicLoad.h>

#define	PTZ_MODE_VISCA	0
#define	PTZ_MODE_NDI	1

extern const NDIlib_v3		*NDILib;

class	PTZ
{
public:
						PTZ();
						~PTZ();

	int					clear();
	int					close();
	int					get_auto_exp_mode();
	int					get_backlight_comp();
	int					get_camera_info();
	int					get_dzoom();
	int					get_focus_auto();
	int					get_focus_value();
	int					get_pantilt_maxspeed();
	int					get_pantilt_position();
	int					get_zoom_value();
	int					memory_recall(int num);
	int					memory_reset(int num);
	int					memory_set(int num);
	int					open_serial(char *path);
	int					open_tcp(char *host, int port);
	int					open_udp4(char *host, int port, char *addr);
	int					set_address();
	int					set_auto_exp_mode(uint8_t in_mode);
	int					set_backlight_comp(uint8_t in_mode);
	int					set_dzoom(uint8_t in_mode);
	int					set_focus_auto(uint8_t in_mode);
	int					set_focus_far_speed(int focus_speed);
	int					set_focus_near_speed(int focus_speed);
	int					set_focus_stop();
	int					set_focus_value(int val);
	int					set_iris_down();
	int					set_iris_up();
	int					set_pantilt_absolute_position(int pan_speed, int tilt_speed, int pan, int tilt);
	int					set_pantilt_down(int pan_speed, int tilt_speed);
	int					set_pantilt_downleft(int pan_speed, int tilt_speed);
	int					set_pantilt_downright(int pan_speed, int tilt_speed);
	int					set_pantilt_home();
	int					set_pantilt_left(int pan_speed, int tilt_speed);
	int					set_pantilt_relative_position(int pan_speed, int tilt_speed, int pan, int tilt);
	int					set_pantilt_right(int pan_speed, int tilt_speed);
	int					set_pantilt_stop();
	int					set_pantilt_up(int pan_speed, int tilt_speed);
	int					set_pantilt_upleft(int pan_speed, int tilt_speed);
	int					set_pantilt_upright(int pan_speed, int tilt_speed);
	int					set_zoom_and_focus_value(int zoom, int focus);
	int					set_zoom_stop();
	int					set_zoom_tele_speed(int speed);
	int					set_zoom_value(int val);
	int					set_zoom_wide_speed(int speed);

	int					mode;

	VISCAInterface_t    iface;
	VISCACamera_t		camera;
	uint8_t				auto_val;
	uint8_t				pan_max_speed;
	uint8_t				tilt_max_speed;
	uint8_t				focus_reading;
	short int			pan_reading;
	short int			tilt_reading;
	uint16_t			zoom_reading;
	uint16_t			focus_value;
	int					visca_assigned_address;

	NDIlib_recv_instance_t	ndi_instance;
};

PTZ::PTZ()
{
}

PTZ::~PTZ()
{
}

int		PTZ::clear()
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_clear(&iface, &camera);
	}
	return(err);
}

int		PTZ::close()
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_close(&iface);
	}
	return(err);
}

int		PTZ::get_auto_exp_mode()
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_get_auto_exp_mode(&iface, &camera, &auto_val);
	}
	return(err);
}

int		PTZ::get_backlight_comp()
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_get_backlight_comp(&iface, &camera, &auto_val);
	}
	return(err);
}

int		PTZ::get_camera_info()
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_get_camera_info(&iface, &camera);
	}
	return(err);
}

int		PTZ::get_dzoom()
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_get_dzoom(&iface, &camera, &auto_val);
	}
	return(err);
}

int		PTZ::get_focus_auto()
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_get_focus_auto(&iface, &camera, &auto_val);
	}
	return(err);
}

int		PTZ::get_focus_value()
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_get_focus_auto(&iface, &camera, &focus_reading);
	}
	return(err);
}

int		PTZ::get_pantilt_maxspeed()
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_get_pantilt_maxspeed(&iface, &camera, &pan_max_speed, &tilt_max_speed);
	}
	return(err);
}

int		PTZ::get_pantilt_position()
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_get_pantilt_position(&iface, &camera, &pan_reading, &tilt_reading);
	}
	return(err);
}

int		PTZ::get_zoom_value()
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_get_zoom_value(&iface, &camera, &zoom_reading);
	}
	return(err);
}

int		PTZ::memory_recall(int num)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_memory_recall(&iface, &camera, num);
	}
	return(err);
}

int		PTZ::memory_reset(int num)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_memory_reset(&iface, &camera, num);
	}
	return(err);
}

int		PTZ::memory_set(int num)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_memory_set(&iface, &camera, num);
	}
	return(err);
}

int		PTZ::open_serial(char *path)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_open_serial(&iface, path);
	}
	return(err);
}

int		PTZ::open_tcp(char *host, int port)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_open_tcp(&iface, host, port);
	}
	return(err);
}

int		PTZ::open_udp4(char *host, int port, char *addr)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_open_udp4(&iface, host, port, addr);
	}
	return(err);
}

int		PTZ::set_address()
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		visca_assigned_address = 0;
		err = VISCA_set_address(&iface, &visca_assigned_address);
	}
	return(err);
}

int		PTZ::set_auto_exp_mode(uint8_t in_mode)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_auto_exp_mode(&iface, &camera, in_mode);
	}
	return(err);
}

int		PTZ::set_backlight_comp(uint8_t in_mode)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_backlight_comp(&iface, &camera, in_mode);
	}
	return(err);
}

int		PTZ::set_dzoom(uint8_t in_mode)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_dzoom(&iface, &camera, in_mode);
	}
	return(err);
}

int		PTZ::set_focus_auto(uint8_t in_mode)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_focus_auto(&iface, &camera, in_mode);
	}
	return(err);
}

int		PTZ::set_focus_far_speed(int focus_speed)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_focus_far_speed(&iface, &camera, focus_speed);
	}
	return(err);
}

int		PTZ::set_focus_near_speed(int focus_speed)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_focus_near_speed(&iface, &camera, focus_speed);
	}
	return(err);
}

int		PTZ::set_focus_stop()
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_focus_stop(&iface, &camera);
	}
	return(err);
}

int		PTZ::set_focus_value(int val)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_focus_value(&iface, &camera, val);
	}
	return(err);
}

int		PTZ::set_iris_down()
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_iris_down(&iface, &camera);
	}
	return(err);
}

int		PTZ::set_iris_up()
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_iris_up(&iface, &camera);
	}
	return(err);
}

int		PTZ::set_pantilt_absolute_position(int pan_speed, int tilt_speed, int pan, int tilt)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_pantilt_absolute_position(&iface, &camera, pan_speed, tilt_speed, pan, tilt);
	}
	else if(mode == PTZ_MODE_NDI)
	{
		NDILib->NDIlib_recv_ptz_pan_tilt(ndi_instance, pan, tilt);
	}
	return(err);
}

int		PTZ::set_pantilt_down(int pan_speed, int tilt_speed)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_pantilt_down(&iface, &camera, pan_speed, tilt_speed);
	}
	return(err);
}

int		PTZ::set_pantilt_downleft(int pan_speed, int tilt_speed)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_pantilt_downleft(&iface, &camera, pan_speed, tilt_speed);
	}
	return(err);
}

int		PTZ::set_pantilt_downright(int pan_speed, int tilt_speed)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_pantilt_downright(&iface, &camera, pan_speed, tilt_speed);
	}
	return(err);
}

int		PTZ::set_pantilt_home()
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_pantilt_home(&iface, &camera);
	}
	return(err);
}

int		PTZ::set_pantilt_left(int pan_speed, int tilt_speed)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_pantilt_left(&iface, &camera, pan_speed, tilt_speed);
	}
	return(err);
}

int		PTZ::set_pantilt_relative_position(int pan_speed, int tilt_speed, int pan, int tilt)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_pantilt_relative_position(&iface, &camera, pan_speed, tilt_speed, pan, tilt);
	}
	return(err);
}

int		PTZ::set_pantilt_right(int pan_speed, int tilt_speed)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_pantilt_right(&iface, &camera, pan_speed, tilt_speed);
	}
	return(err);
}

int		PTZ::set_pantilt_stop()
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_pantilt_stop(&iface, &camera, 0, 0);
	}
	return(err);
}

int		PTZ::set_pantilt_up(int pan_speed, int tilt_speed)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_pantilt_up(&iface, &camera, pan_speed, tilt_speed);
	}
	return(err);
}

int		PTZ::set_pantilt_upleft(int pan_speed, int tilt_speed)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_pantilt_upleft(&iface, &camera, pan_speed, tilt_speed);
	}
	return(err);
}

int		PTZ::set_pantilt_upright(int pan_speed, int tilt_speed)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_pantilt_upright(&iface, &camera, pan_speed, tilt_speed);
	}
	return(err);
}

int		PTZ::set_zoom_and_focus_value(int zoom, int focus)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_zoom_and_focus_value(&iface, &camera, zoom, focus);
	}
	return(err);
}

int		PTZ::set_zoom_stop()
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_zoom_stop(&iface, &camera);
	}
	return(err);
}

int		PTZ::set_zoom_tele_speed(int speed)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_zoom_tele_speed(&iface, &camera, speed);
	}
	return(err);
}

int		PTZ::set_zoom_value(int val)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_zoom_tele_speed(&iface, &camera, val);
	}
	return(err);
}

int		PTZ::set_zoom_wide_speed(int speed)
{
	int err = 0;
	if(mode == PTZ_MODE_VISCA)
	{
		err = VISCA_set_zoom_wide_speed(&iface, &camera, speed);
	}
	return(err);
}
