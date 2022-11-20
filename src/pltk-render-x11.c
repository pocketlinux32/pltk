#include <pltk-render.h>
#include <xcb/xcb.h>

struct pltkrender {
	xcb_connection_t* serverConn;
	xcb_setup_t* serverSetup;
	xcb_screen_t* rootWindow;
	xcb_gcontext_t graphicsContext;
};

pltkrender_t* pltkInitRender(void){
	
}
