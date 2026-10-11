#include "ffc/types.h"

struct Obj;
struct Ctx { uint32_t f0; struct Obj *f4; };
struct Obj { uint32_t f0[5]; uint32_t f14; uint32_t f18; struct Obj *f1c; };

extern void func_ov000_021591a8(uint32_t a, uint32_t b, uint32_t c);
extern struct Ctx data_ov007_021c9c34;

void func_ov007_021c0084(void)
{
    struct Obj *n = data_ov007_021c9c34.f4;
    if (n != 0) {
        do {
            struct Obj *c = n;
            n = c->f1c;
            if (c->f14 != 0) {
                func_ov000_021591a8(6, c->f14, 0);
            }
            func_ov000_021591a8(6, (uint32_t)c, 0);
        } while (n != 0);
    }
    data_ov007_021c9c34.f4 = 0;
}
