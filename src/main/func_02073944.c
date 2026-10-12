/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" uint32_t func_02055054(uint32_t v);
extern "C" int32_t func_02073c44(uint32_t *p);
extern "C" uint32_t data_0213e098;
extern "C" uint32_t data_0213e1cc[];

struct S {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual int v3();
    uint32_t pad04;
    uint32_t pad08;
    uint32_t flags;   /* 0x0c */
    uint32_t pad10;
    uint32_t *obj;    /* 0x14 */
    uint32_t idx;     /* 0x18 */
    uint8_t f1c;      /* 0x1c */
    uint8_t pad1d[3];
    int32_t acc;      /* 0x20 */
    uint32_t state;   /* 0x24 */
};

extern "C" void func_02073944(S *p) {
    switch (p->state) {
    case 0:
        if (p->v3()) {
            p->state = 1;
        } else {
            p->flags = (p->flags & ~0xffu) | 2;
        }
        break;
    case 1: {
        uint32_t v;
        p->acc += func_02055054(data_0213e098);
        v = data_0213e1cc[p->idx];
        if (v != 9) {
            p->obj[6] = v;
            p->flags = (p->flags & ~0xffu) | 2;
            break;
        }
        if (p->f1c != 0) {
            if (p->acc >= func_02073c44(p->obj)) {
                p->obj[6] = 100;
                p->flags = (p->flags & ~0xffu) | 2;
            }
        }
        break;
    }
    default:
        break;
    }
}
