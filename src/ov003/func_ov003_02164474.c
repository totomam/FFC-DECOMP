#include "ffc/types.h"

extern void *data_020b93b8;
extern void func_0201cde8(void *, uint16_t, uint16_t);
extern void func_0201ce04(void *, uint16_t, uint16_t);

typedef struct {
    uint8_t pad0[0xc];
    uint32_t flags;
    uint8_t pad1[0x18 - 0x10];
    uint16_t x;
    uint16_t y;
    uint8_t a;
    uint8_t b;
} Obj;

void func_ov003_02164474(Obj *p)
{
    if (p->a) {
        func_0201cde8(data_020b93b8, p->x, p->y);
        if (p->b) {
            func_0201cde8(data_020b93b8, p->y, p->x);
        }
    } else {
        func_0201ce04(data_020b93b8, p->x, p->y);
        if (p->b) {
            func_0201ce04(data_020b93b8, p->y, p->x);
        }
    }
    p->flags = (p->flags & ~0xffu) | 2;
}
