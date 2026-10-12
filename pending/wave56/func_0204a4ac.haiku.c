#include "ffc/types.h"

extern void func_0201b8ec(uint32_t a, uint32_t b);
extern void func_0201b8c4(uint32_t a, uint32_t b);
extern uint32_t data_020b93b8;
extern uint32_t data_020b0184[2];
extern uint32_t data_020b018c[2];
extern uint32_t data_020b0194[2];
extern uint32_t data_020b019c[2];

typedef struct {
    uint32_t x;
    uint32_t y;
} Pair;

typedef struct {
    uint8_t pad0[0x80];
    Pair pr;
    uint8_t pad1[0x20 - 0x08];
    uint32_t mode;
    uint32_t pad2;
    uint32_t st;
} Obj;

void func_0204a4ac(Obj *p)
{
    if (p->st != 1 && p->st != 3) {
        func_0201b8ec(data_020b93b8, 8);
        func_0201b8c4(data_020b93b8, 8);
    }

    switch (p->st) {
    case 1:
        p->mode = 3;
        p->pr = *(Pair *)data_020b0184;
        break;
    case 3:
        p->mode = 0x12;
        p->pr = *(Pair *)data_020b018c;
        break;
    case 2:
        p->mode = 2;
        p->pr = *(Pair *)data_020b0194;
        break;
    case 0:
        p->mode = 0;
        p->pr = *(Pair *)data_020b019c;
        break;
    default:
        break;
    }
}
