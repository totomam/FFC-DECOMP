#include "ffc/types.h"

extern void func_0201fee0(uint32_t a, void *b, uint32_t c);
extern uint32_t data_020b93b8;
extern uint32_t data_ov007_021c711c[2];
extern uint32_t data_ov007_021c7124[2];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t a0;
    uint32_t a1;
    uint32_t a2;
    uint32_t flags;
    uint8_t pad[0xb0 - 0x10];
    Pair pr;
    uint32_t state;
} Obj;

void func_ov007_021b8324(Obj *p)
{
    uint32_t buf[0x2c];

    switch (p->state) {
    case 0:
        p->flags = (p->flags & ~0xffu) | 2;
        break;
    case 1:
        func_0201fee0(data_020b93b8, buf, 0);
        if (buf[0] != 0) {
            p->pr = *(Pair *)data_ov007_021c711c;
        } else {
            p->pr = *(Pair *)data_ov007_021c7124;
        }
        break;
    }
}
