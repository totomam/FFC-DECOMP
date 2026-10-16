#include "ffc/types.h"
typedef struct { int32_t l, t, r, b; } Rect;
typedef struct { int32_t x, y; } Pt;
typedef struct { Rect rc; int32_t pad[2]; int32_t idx; } Ent;
extern void *func_0205681c(uint32_t);
extern void func_02055110(void *, void *);
extern uint32_t data_020b1264;
extern void **data_0213e098;
void func_020669a4(uint8_t *self, Rect R, uint32_t e) {
    uint32_t ee = (e << 4) | e;
    uint32_t i;
    int32_t a = R.l;
    int32_t mask = 0xff;
    Rect rr, r, rc, rr2;
    Pt off, sz, off2, sz2;
    int32_t c = R.r, b = R.t, d = R.b;
    for (i = 0; i < *(uint32_t*)(self + 0x30); i++) {
        Ent *ent = (Ent*)(*(uint8_t**)(self + 0x2c) + i * 0x1c);
        r = ent->rc;
        if (r.r > a && c > r.l && r.b > b && d > r.t) {
            uint32_t *o = (uint32_t*)func_0205681c(0x34);
            if (o) {
                uint8_t *q = *(uint8_t**)(self + 0x48);
                Ent *en = (Ent*)(*(uint8_t**)(self + 0x2c) + i * 0x1c);
                uint8_t *base = *(uint8_t**)(q + 4) + *(int32_t*)(q + 0x14) * en->idx;
                sz.x = (en->rc.r - en->rc.l) / 8;
                sz.y = (en->rc.b - en->rc.t) / 8;
                off.x = -en->rc.l; off.y = -en->rc.t;
                off2 = off;
                rc = en->rc;
                rr.b = rc.b; rr.r = rc.r; rr.t = rc.t; rr.l = rc.l;
                if (d < rr.b) rr.b = d;
                if (c < rr.r) rr.r = c;
                if (b > rr.t) rr.t = b;
                if (a > rr.l) rr.l = a;
                rr.l += off2.x; rr.t += off2.y; rr.r += off2.x; rr.b += off2.y;
                rr2 = rr;
                sz2 = sz;
                o[3] &= ~(uint32_t)mask;
                o[0] = (uint32_t)&data_020b1264;
                o[5] = ee;
                o[6] = (uint32_t)base;
                o[7] = sz2.x;
                o[8] = sz2.y;
                o[9] = rr2.r - rr2.l;
                o[10] = rr2.b - rr2.t;
                o[11] = rr2.l;
                o[12] = rr2.t;
            }
            func_02055110(*data_0213e098, o);
        }
    }
}
