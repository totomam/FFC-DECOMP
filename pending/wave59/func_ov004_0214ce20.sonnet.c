#include "ffc/types.h"
typedef struct { int x, y, w, h; } R;
typedef R (*Fn)(void*);
static inline R mk(int x, int y, int w, int h) { R r; r.x = x; r.y = y; r.w = w; r.h = h; return r; }
void func_ov004_0214ce20(R *out, uint8_t *p) {
    R lim = mk(0, 0, 256, 192);
    void *o = *(void**)(p + 0x9c);
    R t = (*(Fn**)o)[7](o);
    int h = t.h < lim.h ? t.h : lim.h;
    int w = t.w < lim.w ? t.w : lim.w;
    int y = t.y > lim.y ? t.y : lim.y;
    int x = t.x > lim.x ? t.x : lim.x;
    out->x = x; out->y = y; out->w = w; out->h = h;
}
