#include "ffc/types.h"

extern uint8_t data_ov009_021bd120;
extern void *data_0209de08;
extern void *data_0209de0c;
extern uint32_t data_ov009_021b06c0[];

extern uint32_t func_02056aec(void);
extern uint32_t func_0203c12c(void *a, void *b);
extern void *func_0203c114(void *a, void *b);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);

void func_ov009_021a210c(void *param_0)
{
    uint8_t *r5 = (uint8_t *)param_0;

    if (data_ov009_021bd120 == 0) {
        uint32_t *node = *(uint32_t **)(r5 + 0x210);
        uint32_t a = node[1];
        uint32_t b = node[2];
        if (0x1003 & (a & (a ^ b))) {
            uint32_t r7 = func_02056aec();
            void *r4 = data_0209de08;
            void *r6 = data_0209de0c;
            uint32_t s = func_0203c12c(r6, r4);
            r4 = func_0203c114(r6, r4);
            r6 = func_0203b6fc();
            func_02056bc0(r6, r4);
            func_02056bc0(r6, (void *)s);
            r5 += 0x14;
            func_02056bc0(r5, r6);
            func_02056bc0(r5, (void *)r7);
            return;
        }
    }

    {
        uint32_t x = data_ov009_021b06c0[0];
        uint32_t y = data_ov009_021b06c0[1];
        uint8_t *p0 = r5 + 0x80;
        r5 += 0x84;
        *(uint32_t *)p0 = x;
        *(uint32_t *)r5 = y;
    }
}
