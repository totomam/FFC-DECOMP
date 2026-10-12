#include "ffc/types.h"

extern uint32_t func_02056aec(uint32_t a);
extern uint32_t func_02042d58(uint32_t a);
extern uint32_t func_0203c22c(void);
extern uint32_t func_02061000(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0203c21c(void);
extern uint32_t func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020b0114[];

void func_0204a13c(uint8_t *p)
{
    volatile uint32_t s4, s0; uint32_t r7, r5, r6;

    if (0x100b & (((uint32_t *)(*(uint32_t **)(p + 0x90)))[1] & (((uint32_t *)(*(uint32_t **)(p + 0x90)))[2] ^ ((uint32_t *)(*(uint32_t **)(p + 0x90)))[1]))) {
        *(uint32_t *)(p + 0x80) = data_020b0114[0];
        *(uint32_t *)(p + 0x84) = data_020b0114[1];
        s0 = func_02056aec(*(uint32_t *)(p + 0x88));
        s4 = func_02042d58(*(uint32_t *)(p + 0x88));
        r7 = func_02061000(func_0203c22c(), 0x1e, 0, 1);
        r5 = func_02061000(func_0203c21c(), 0x1e, 0, 1);
        r6 = func_0203b6fc();
        func_02056bc0((void *)r6, (void *)r5);
        func_02056bc0((void *)r6, (void *)r7);
        func_02056bc0((void *)(p + 0x14), (void *)r6);
        func_02056bc0((void *)(p + 0x14), (void *)s4);
        func_02056bc0((void *)(p + 0x14), (void *)s0);
        if (*(uint8_t **)(p + 0x94) != 0) {
            **(uint8_t **)(p + 0x94) = 1;
        }
    }
}
