#include "ffc/types.h"

extern int func_ov002_021bc7cc(void *p);

typedef struct {
    uint8_t pad0[0xc];
    uint32_t w0c;
    uint8_t pad10[4];
    void *p14;
} Obj;

void func_ov002_021bd4b8(Obj *p) {
    if (func_ov002_021bc7cc(p->p14) == 0) {
        p->w0c = (p->w0c & ~0xffu) | 2;
    }
}
