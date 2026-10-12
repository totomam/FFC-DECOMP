#include "ffc/types.h"

extern uint8_t data_ov009_021bd120;
extern uint32_t data_0209de08;
extern uint32_t data_0209de0c;
extern uint32_t data_ov009_021b06d0[];

extern uint32_t func_02056aec(void);
extern uint32_t func_02056b34(uint32_t a);
extern uint32_t func_0203c12c(uint32_t a, uint32_t b);
extern uint32_t func_0203c114(uint32_t a, uint32_t b);
extern uint32_t func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);

void func_ov009_021a2338(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    uint32_t *node;
    uint32_t a, b;

    if (data_ov009_021bd120 == 0) {
        node = *(uint32_t **)(p + 0x210);
        a = node[1];
        b = node[2];
        if (0x1003 & (a & (a ^ b))) {
            uint32_t t0 = func_02056aec();
            uint32_t r7 = func_02056b34(*(uint32_t *)(p + 0x218));
            uint32_t r4 = data_0209de08;
            uint32_t r6 = data_0209de0c;
            uint32_t s4 = func_0203c12c(r6, r4);
            uint32_t c = func_0203c114(r6, r4);
            uint32_t x = func_0203b6fc();
            func_02056bc0((void *)x, (void *)c);
            func_02056bc0((void *)x, (void *)s4);
            func_02056bc0((void *)(p + 0x14), (void *)x);
            func_02056bc0((void *)(p + 0x14), (void *)r7);
            func_02056bc0((void *)(p + 0x14), (void *)t0);
            return;
        }
    }
    *(uint32_t *)(p + 0x80) = data_ov009_021b06d0[0];
    *(uint32_t *)(p + 0x84) = data_ov009_021b06d0[1];
}
