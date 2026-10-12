#include "ffc/types.h"

extern void func_02056c9c(void *obj, uint32_t x);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_0204f7ec(const void *object);
extern void func_0204f408(void *obj, uint32_t x);
extern uint32_t func_0204f7d4(const void *object);
extern void func_02056bc0(void *object, void *node);
extern char data_020ab188[];
extern void *data_0213df18;
extern char data_020ab1b8[];
extern char data_020ab1d8[];

void *func_0200d050(void *self)
{
    uint8_t *p4;
    uint8_t *p5;
    uint32_t f;
    uint32_t z = 0;

    func_02056c9c(self, 0);
    *(char **)self = data_020ab188;

    p4 = func_0205681c(0x94);
    if (p4 != 0) {
        volatile uint32_t v0 = 4;
        volatile uint32_t v1 = 4;
        volatile uint32_t v2 = 0xec;
        volatile uint32_t v3 = 0xec;
        f = func_0204f7ec(data_0213df18);
        func_02056c9c(p4, f);
        func_0204f408(p4 + 0x80, f);
        *(char **)p4 = data_020ab1b8;
        *(char **)(p4 + 0x80) = data_020ab1d8;
        *(uint32_t *)(p4 + 0x8c) = v3;
        *(uint32_t *)(p4 + 0x90) = v1;
        *(uint32_t *)(p4 + 0x88) = z;
    }

    p5 = func_0205681c(0x94);
    if (p5 != 0) {
        volatile uint32_t w0 = 4;
        volatile uint32_t w1 = 4;
        volatile uint32_t w2 = 0xec;
        volatile uint32_t w3 = 0xec;
        f = func_0204f7d4(data_0213df18);
        func_02056c9c(p5, f);
        func_0204f408(p5 + 0x80, f);
        *(char **)p5 = data_020ab1b8;
        *(char **)(p5 + 0x80) = data_020ab1d8;
        *(uint32_t *)(p5 + 0x8c) = w3;
        *(uint32_t *)(p5 + 0x90) = w0;
        *(uint32_t *)(p5 + 0x88) = 0;
    }

    func_02056bc0((uint8_t *)self + 0x48, p5);
    func_02056bc0((uint8_t *)self + 0x48, p4);
    return self;
}
