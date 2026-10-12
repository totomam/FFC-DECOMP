#include "ffc/types.h"

extern uint8_t data_ov007_021c2c14[];
extern uint8_t data_ov007_021c2d6c[];
extern uint32_t data_ov007_021c2f38[];
extern void *func_0203bb94(void *a, int b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_02008cc4(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_02056aec(void *a);
extern void func_02056c9c(void *a, uint32_t b);
extern uint32_t func_0203c030(void *object);

typedef struct { uint32_t a; uint32_t b; } P2;

void func_ov007_0219cdb8(uint8_t *self)
{
    uint8_t *p;
    void *local;
    void *a7;
    void *nn;
    uint32_t r6;
    uint32_t retval;
    void *fn;
    uint8_t *r6p;
    P2 tmp;

    p = (uint8_t *)func_0203bb94(*(void **)(data_ov007_021c2c14 + 0x1c), 1, 1, 0);
    fn = *(void **)(*(void **)p + 0x28);
    ((void (*)(void *))fn)(p);
    func_02056bc0(self + 0x48, p);

    local = func_0205681c(0x94);
    if (local != 0) {
        local = func_02008cc4(local, 0, 0, 0);
    }

    a7 = func_02056aec(p);

    nn = func_0205681c(0x94);
    if (nn != 0) {
        r6 = *(uint32_t *)(self + 0x8c);
        func_02056c9c(nn, 0);
        *(void **)nn = data_ov007_021c2d6c;
        *(uint8_t **)((uint8_t *)nn + 0x80) = self + 0x90;
        *(uint32_t *)((uint8_t *)nn + 0x84) = r6;
        *(uint32_t *)((uint8_t *)nn + 0x88) = 0x3c;
        *(uint32_t *)((uint8_t *)nn + 0x8c) = 0xf;
        *((uint8_t *)nn + 0x90) = 1;
        *((uint8_t *)nn + 0x91) = 0;
    }

    retval = func_0203c030((void *)0x14);
    r6p = self + 0x14;
    func_02056bc0(r6p, (void *)retval);
    func_02056bc0(r6p, nn);
    func_02056bc0(r6p, a7);
    func_02056bc0(r6p, local);

    tmp = *(P2 *)data_ov007_021c2f38;
    *(P2 *)(self + 0x80) = tmp;
}
