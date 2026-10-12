#include "ffc/types.h"

typedef struct Obj {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint8_t fc;
} Obj;

typedef struct Glob {
    uint8_t pad[0x18];
    Obj *f18;
} Glob;

extern Glob data_020b8df0;
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);
extern void func_02056844(void *object);

void func_02015944(void)
{
    Obj *p = data_020b8df0.f18;
    if (p == 0) {
        return;
    }
    if (p != 0) {
        if (p->f4 != 0) {
            if (p->fc != 0) {
                func_02052d3c(p->f4, p->f8);
            }
            func_02052c04(p->f4);
        }
        func_02053290(p);
        func_02056844(p);
    }
    data_020b8df0.f18 = 0;
}
