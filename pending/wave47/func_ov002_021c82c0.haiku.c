#include "ffc/types.h"

extern void func_02056c9c(void *obj, int x);
extern void *func_0203b9b4(int x);
extern void func_02057958(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_ov002_021b836c(void *a, int b, void *c, uint32_t d, uint32_t e, void *f);
extern void func_ov002_021c82b0(void *a, int b);
extern char data_ov002_021d77dc[];

typedef void *(*VFn)(void *, int);

void *func_ov002_021c82c0(void *p0, int a1, void *a2, int a3)
{
    uint8_t *p = (uint8_t *)p0;
    uint8_t *r4 = (uint8_t *)a2;
    void *tmp;
    void *obj;

    *(uint32_t *)(p + 0x80) = 0xa21b58b6;
    *(uint32_t *)(p + 0x84) = 0x20505254;
    *(uint32_t *)(p + 0x88) = 0x5a1bb469;

    func_02056c9c(p, 0);
    *(void **)p = data_ov002_021d77dc;
    *(uint32_t *)(p + 0x8c) = 0;
    *(int *)(p + 0x90) = a1;
    *(uint32_t *)(p + 0x94) = 0;
    *(uint8_t *)(p + 0x98) = 0;
    *(uint8_t *)(p + 0x99) = 0;
    *(uint8_t *)(p + 0x9a) = 0;
    *(uint32_t *)(p + 0x9c) = 0;

    tmp = func_0203b9b4(1);
    if (tmp != 0) {
        func_02057958();
        *(void **)(p + 0x8c) = ((VFn)((void **)*(void **)tmp)[9])(tmp, 0);
        func_02056bc0(p + 0x48, tmp);
    }

    *(uint32_t *)(p + 0x94) = *(uint32_t *)(r4 + 0x14);
    *(uint8_t *)(p + 0x98) = r4[0x28];
    *(uint8_t *)(p + 0x99) = r4[0x29];

    obj = func_0205681c(0x134);
    if (obj != 0) {
        obj = func_ov002_021b836c(obj, a1, r4, *(uint32_t *)(r4 + 0x14), *(uint32_t *)(p + 0x8c), p);
    }
    *(void **)(p + 0x9c) = obj;

    func_ov002_021c82b0((uint8_t *)obj + 0xb8, a3);

    if (*(void **)(p + 0x9c) != 0) {
        func_02056bc0(p + 0x48, *(void **)(p + 0x9c));
    }
    return p;
}
