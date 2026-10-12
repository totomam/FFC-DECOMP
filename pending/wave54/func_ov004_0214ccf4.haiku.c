#include "ffc/types.h"

typedef struct {
    int32_t x0, y0, x1, y1;
} Rect;

typedef struct Ele {
    void *vt;
} Ele;

int32_t func_ov004_0214ccf4(uint8_t *self, int32_t x, int32_t y, int32_t z) {
    Ele *e = *(Ele **)(self + 0xc0);
    if (e != 0) {
        Rect r = ((Rect (*)(Ele *))((void **)(*(void ***)e))[4])(e);
        if (x >= r.x0 && x < r.x1 && y >= r.y0 && y < r.y1) {
            return 1;
        }
    }
    {
        Ele **q = *(Ele ***)(self + 0xc4);
        Ele **end = q + *(int32_t *)(self + 0xc8);
        for (; q != end; q++) {
            Ele *el = *q;
            Rect r = ((Rect (*)(Ele *))((void **)(*(void ***)el))[4])(el);
            if (x >= r.x0 && x < r.x1 && y >= r.y0 && y < r.y1) {
                return 1;
            }
        }
    }
    {
        Ele **q = *(Ele ***)(self + 0xd0);
        Ele **end = q + *(int32_t *)(self + 0xd4);
        for (; q != end; q++) {
            Ele *el = *q;
            Rect r = ((Rect (*)(Ele *))((void **)(*(void ***)el))[4])(el);
            if (x >= r.x0 && x < r.x1 && y >= r.y0 && y < r.y1) {
                return 1;
            }
        }
    }
    return 0;
}
