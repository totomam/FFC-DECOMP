#include "ffc/types.h"

typedef struct Vec2 {
    int32_t x;
    int32_t y;
} Vec2;

extern void *func_ov004_02149be0(void *p);
extern void *func_ov004_02149c04(void *p);
extern void *func_ov004_021530bc(void *a, void *b);
extern void func_0205770c(Vec2 *out, void *x);
extern void *func_ov004_02153114(void *a);
extern void func_ov004_0214e6c4(void *a, void *b, Vec2 d);
extern int func_ov004_02153144(void *a, void *b, Vec2 d);

typedef struct Obj {
    uint8_t pad[0x88];
    uint8_t f88;
    uint8_t pad2[3];
    Vec2 pos;
} Obj;

void func_ov004_0214ba30(Obj *p) {
    Vec2 pos;
    volatile Vec2 zz;
    Vec2 nv;
    uint32_t *r4 = (uint32_t *)func_ov004_021530bc(func_ov004_02149be0(p), func_ov004_02149c04(p));
    func_0205770c(&pos, r4);

    if (p->f88) {
        if (r4[1] & 0x1000) {
            int32_t dx = pos.y - p->pos.y;
            int32_t dy = pos.x - p->pos.x;
            zz.x = 0;
            zz.y = 0;
            if (dy != 0 || dx != 0) {
                nv.x = -dy;
                nv.y = -dx;
                void *t = func_ov004_02153114(func_ov004_02149be0(p));
                func_ov004_0214e6c4(t, func_ov004_02149c04(p), nv);
            }
            p->pos = pos;
        } else {
            p->f88 = 0;
        }
    }

    if (!p->f88 && (r4[1] & 0x1000)) {
        void *q = func_ov004_02149be0(p);
        if (func_ov004_02153144(q, func_ov004_02149c04(p), pos)) {
            p->f88 = 1;
            p->pos = pos;
        }
    }
}
