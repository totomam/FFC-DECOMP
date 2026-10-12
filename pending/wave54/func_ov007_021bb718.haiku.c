#include "ffc/types.h"

extern void *func_0203bb94(void *a, int b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern void func_02069288(void *object);
extern void func_0205f498(void *x);
extern void func_020697ac(void *object);
extern uint8_t data_ov007_021c7aa0[];
extern uint8_t data_ov007_021c7ab8[];

#define PTR(b, off) (*(void **)((uint8_t *)(b) + (off)))
#define WORD(b, off) (*(uint32_t *)((uint8_t *)(b) + (off)))
#define VCALL1(o, slot) (((void (*)(void *))(((void **)*(void **)(o))[(slot) / 4]))(o))
#define VCALL2(o, slot, arg) (((void (*)(void *, int))(((void **)*(void **)(o))[(slot) / 4]))(o, arg))

void func_ov007_021bb718(void *p) {
    void *o;
    uint8_t i;

    if (PTR(p, 0xcc) == 0) {
        void *a;
        if (WORD(p, 0xbc) == 0) {
            a = data_ov007_021c7aa0;
        } else {
            a = data_ov007_021c7ab8;
        }
        *(uint32_t *)((uint8_t *)p + 0xcc) = (uint32_t)func_0203bb94(a, 1, 0, 0);
        VCALL2(PTR(p, 0xcc), 0x20, 2);
        VCALL1(PTR(p, 0xcc), 0x28);
        func_02056bc0((uint8_t *)p + 0x48, PTR(p, 0xcc));
    }

    VCALL1(PTR(PTR(p, 0xd0), 0x94), 0x28);
    func_02069288(PTR(p, 0xd0));

    if (PTR(p, 0xd8) != 0) {
        VCALL1(PTR(PTR(p, 0xd8), 0x98), 0x28);
        func_02069288(PTR(p, 0xd8));
    }

    if (WORD(p, 0xbc) == 1) {
        VCALL1(PTR(PTR(p, 0xd4), 0x98), 0x28);
        func_02069288(PTR(p, 0xd4));
    }

    o = PTR(p, 0x138);
    *((uint8_t *)o + 0x3c) = 0;
    func_0205f498(PTR(PTR(o, 0x50), 0x94));
    VCALL1(PTR(p, 0xfc), 0x28);
    VCALL1(PTR(p, 0x100), 0x28);
    VCALL1(PTR(p, 0x104), 0x28);
    VCALL1(PTR(p, 0x108), 0x28);
    VCALL1(PTR(p, 0x10c), 0x28);

    for (i = 0; i < WORD(p, 0xf4); i++) {
        uint32_t idx = (uint8_t)((uint32_t *)WORD(p, 0xf0))[i] * 4;
        if (PTR((uint8_t *)PTR(p, 0xb8) + idx, 0x68) != 0) {
            VCALL1(*(void **)((uint8_t *)p + i * 4 + 0x110), 0x28);
            VCALL1(*(void **)((uint8_t *)p + i * 4 + 0x124), 0x28);
        }
    }

    *((uint8_t *)p + 0x13c) = 1;
    if (PTR(p, 0xd8) != 0) {
        func_020697ac(p);
    }
}
