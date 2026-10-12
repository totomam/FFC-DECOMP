#include "ffc/types.h"

extern void func_02054254(void);
extern void func_020543b8(void);
extern void func_ov000_02152eb0(void);
extern void func_ov000_02152f94(void);
extern int func_ov000_02153050(void);
extern int func_ov000_02152f60(void);

typedef struct Sub {
    uint8_t pad[0x16];
    uint8_t flag;
} Sub;

typedef struct Obj {
    uint8_t pad0[0xc];
    uint32_t flags;
    uint32_t pad1;
    Sub *sub;
    uint32_t state;
} Obj;

void func_02074748(Obj *p)
{
    switch (p->state) {
    case 0:
        if (p->sub->flag == 0) {
            func_02054254();
            func_020543b8();
            p->sub->flag = 1;
        }
        func_ov000_02152eb0();
        p->state++;
        return;
    case 1: {
        int r;
        func_ov000_02152f94();
        r = func_ov000_02153050();
        switch (r) {
        case 0:
        case 7:
        case 8:
            p->flags = (p->flags & ~0xffu) | 2;
            break;
        default:
            break;
        }
        if (func_ov000_02152f60() != 0) {
            p->flags = (p->flags & ~0xffu) | 2;
        }
        return;
    }
    default:
        return;
    }
}
