#include "ffc/types.h"

extern void func_02069288(void *object);
extern void func_020692a4(void *object);
extern uint32_t func_ov011_021c1eb8(void *object, uint32_t value);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);

typedef struct {
    uint8_t pad0[0xd8];
    void *a[5];
    void *b[10];
    uint8_t pad1[0x150 - 0x114];
    void *c[2];
    uint8_t pad3[0x160 - 0x158];
    void *d;
    uint8_t pad2[0x279 - 0x164];
    uint8_t idx;
} Obj;

void func_ov011_021c2fac(Obj *p)
{
    uint8_t i;
    uint32_t zero;

    for (i = 0; i < 5; i++) {
        func_02069288(p->a[i]);
    }
    func_020692a4(p->a[p->idx]);

    zero = 0;
    for (i = 0; i < 10; i++) {
        if (func_ov011_021c1eb8(p, i) == 0) {
            func_0205f2f0((void *)func_02064aa8(*(void **)((uint8_t *)p->b[i] + 0x94)), zero);
            func_020692a4(p->b[i]);
        } else {
            func_0205f2f0((void *)func_02064aa8(*(void **)((uint8_t *)p->b[i] + 0x94)), 1);
            func_02069288(p->b[i]);
        }
    }

    for (i = 0; i < 2; i++) {
        func_020692a4(p->c[i]);
    }
    func_020692a4(p->d);
}
