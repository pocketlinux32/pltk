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

typedef struct vector2d {
	unsigned int x;
	unsigned int y;
} plvcoords_t;
typedef struct pltkrender pltkrender_t;

pltkrender_t* pltkInitRender(void);
void pltkStopRender(pltkrender_t* renderer);

void pltkVectorLineDraw(plvcoords_t* start, plvcoords_t* stop);
void pltkVectorDraw(plarray_t coords);

#ifdef __cplusplus
}
#endif
