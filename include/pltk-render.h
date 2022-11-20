#pragma once
#ifdef PLTK_DEBUG
#include <pl32-shell.h>
#else
#include <pl32-memory.h>
#include <pl32-file.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pltkpoint2d {
	unsigned int x;
	unsigned int y;
} pltkpoint_t;
typedef struct pltkrender pltkrender_t;

pltkrender_t* pltkInitRender(void);
void pltkStopRender(pltkrender_t* renderer);

void pltkVectorLineDraw(pltkpoint_t* start, pltkpoint_t* stop);
void pltkVectorDraw(plarray_t coords);

#ifdef __cplusplus
}
#endif
