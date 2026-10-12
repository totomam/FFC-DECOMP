#include "ffc/types.h"

typedef struct Blk { uint32_t w[4]; } Blk;
typedef struct Tri { uint32_t a, b, c; } Tri;

extern void func_020628ac(void *obj, Tri t);
extern void func_02056c4c(void *obj);
extern void *func_ov005_02195e2c(void *obj, Tri t);
extern void func_02056bc0(void *object, void *node);
extern int func_ov005_02198678(void *self, uint32_t idx);
extern void func_ov005_021963cc(void *obj, void *p, int flag);
extern void func_ov005_021964c4(void *obj);

void func_ov005_02198340(uint8_t *self, void *p)
{
    void *o;
    void **vt;
    Blk b, d, e, g;
    uint32_t x[8];
    uint32_t i;
    uint32_t idx;
    int ok;
    Tri t;

    *(self + 0x14a) = 0;
    if (p == 0) {
        o = *(void **)(self + 0x134);
        vt = *(void ***)o;
        ((void (*)(void *))vt[11])(o);
        return;
    }
    o = *(void **)(self + 0x134);
    vt = *(void ***)o;
    if (((int (*)(void *))vt[12])(o) != 0) {
        o = *(void **)(self + 0x134);
        vt = *(void ***)o;
        ((void (*)(void *))vt[10])(o);
        ((void (*)(Blk *, void *))(*(void ***)p)[4])(&b, p);
        x[0] = b.w[0]; x[1] = b.w[1]; x[2] = b.w[2]; x[3] = b.w[3];
        t = *(Tri *)&x[0];
        func_020628ac(*(void **)(self + 0x134), t);
    } else {
        func_02056c4c(*(void **)(self + 0x130));
        o = *(void **)(self + 0x134);
        vt = *(void ***)o;
        ((void (*)(Blk *, void *))vt[7])(&d, o);
        ((void (*)(Blk *, void *))(*(void ***)p)[4])(&e, p);
        x[1] = e.w[0]; x[2] = e.w[1]; x[3] = e.w[2]; x[4] = e.w[3];
        x[5] = 10;
        x[6] = (uint32_t)-5;
        x[0] = d.w[0]; x[1] = d.w[1]; x[2] = d.w[2]; x[3] = d.w[3];
        t = *(Tri *)&x[0];
        o = func_ov005_02195e2c(*(void **)(self + 0x134), t);
        func_02056bc0(*(void **)(self + 0x130), o);
    }

    for (i = 0; i < 8; i++) {
        if (p == ((void **)*(uint32_t *)(self + 0x114))[i]) {
            self[0x149] = (uint8_t)i;
            idx = (uint8_t)(self[0x149] + (*(uint32_t *)(self + 0xfc) << 3));
            if (idx < *(uint32_t *)(self + 0x140)) {
                if (func_ov005_02198678(self, idx) != 0) {
                    ok = 0;
                } else {
                    vt = *(void ***)self;
                    ok = 0;
                    if (((int (*)(void *, Blk *))vt[14])(self, &g) == 0) {
                        ok = 1;
                    } else if (((int (*)(void *))vt[13])(self) == 0) {
                        ok = 1;
                    }
                }
                func_ov005_021963cc(*(void **)(self + 0x138), &g, ok);
                self[0x148] = (uint8_t)idx;
                return;
            }
        }
    }
    func_ov005_021964c4(*(void **)(self + 0x138));
    self[0x148] = 0xff;
}
