#include "ffc/types.h"

extern int func_02064b38(void *p);

typedef struct {
    uint8_t pad0[0xc];
    uint32_t w0c;
    uint8_t pad10[4];
    void *p14;
} Obj;

void func_0206561c(Obj *p) {
    if (func_02064b38(p->p14) == 0) {
        p->w0c = (p->w0c & ~0xffu) | 2;
    }
}
