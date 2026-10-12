#include "ffc/types.h"

typedef struct { uint32_t w; uint32_t h; } Dim;
typedef struct { uint32_t pad0; void *f4; uint32_t pad8[12]; void *f38; } Obj;
typedef struct { uint8_t a; uint8_t b; uint8_t c; uint8_t d; uint8_t e; uint8_t f; uint8_t g; uint8_t h; } Pk;

extern void *func_0205e1a0(void *);
extern void func_0205dbe0(Dim *, void *);
extern Obj *func_0205e1a4(void *);
extern uint16_t *func_0204fae8(void *, void *, uint32_t, uint32_t);
typedef struct { uint32_t x, y; Dim sz; } Rect;
extern void func_0204fb70(void *, uint16_t *, Dim, Dim, uint32_t, uint32_t, uint32_t, uint32_t);
extern void func_ov003_0214b390(uint8_t *, uint32_t, uint32_t, uint32_t);

void func_ov003_0214b3b8(uint8_t *p0, uint32_t p1, uint8_t p2, uint8_t p3, Pk s, uint16_t *p4, uint8_t *p5, uint8_t *p6)
{
    Dim d;
    Rect rect;
    uint8_t buf[4];
    uint8_t *flagp;
    void **slot;
    int i; uint32_t x, y;
    uint32_t v2, v3, fa, fb, flag24, flag20;
    uint16_t v;
    Obj *o;

    buf[2] = p2;
    buf[3] = s.a;
    buf[0] = p3;
    buf[1] = s.e;

    for (i = 0; i < 2; i++) {
        uint32_t first = (i == 1);
        if (p1 != 0 && p1 != i + 1) {
            continue;
        }
        slot = (void **)(p0 + (first ? 0x1b8 : 0x1bc));
        flagp = first ? p6 : p5;
        v2 = buf[2 + i];
        v3 = buf[i];
        flag24 = (v2 != p0[i + 0x3f4]);
        flag20 = (v3 != p0[i + 0x3f6]);

        if (*slot != 0) {
            func_0205dbe0(&d, func_0205e1a0(*slot));
            for (y = 0; y < d.h; y++) {
                for (x = 0; x < d.w; x++) {
                    o = func_0205e1a4(*slot);
                    v = *func_0204fae8(o->f4, o->f38, x, y);
                    fa = (v & 0x400) != 0;
                    fb = (v & 0x800) != 0;
                    if (flag24) {
                        fa = !fa;
                    }
                    if (flag20) {
                        fb = !fb;
                    }
                    p4[(flag24 ? d.w - 1 - x : x) + d.w * (flag20 ? d.h - 1 - y : y)] =
                        (uint16_t)(((v >> 12) & 0xf) << 12 | (fb << 11) | (fa << 10) | (v & 0x3ff));
                }
            }
            rect.x = 0; rect.y = 0; rect.sz = d;
            func_0204fb70(func_0205e1a4(*slot), p4, rect.sz, *(Dim *)&rect, 0, 0, 0, 0);
            func_ov003_0214b390(p0, i, v2, v3);
        }
        if (flagp != 0) {
            *flagp = (*slot != 0);
        }
    }
}
