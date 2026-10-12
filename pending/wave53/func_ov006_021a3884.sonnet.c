#include "ffc/types.h"

typedef struct Ctx {
    uint32_t slot[4];
    uint32_t f10;
    uint8_t pad14[2];
    int8_t s16;
    uint8_t b17;
    uint8_t b18;
} Ctx;

extern Ctx *data_ov006_021bc6a8;
extern uint8_t data_ov006_021b8058[];
extern uint16_t data_ov006_021b8060[];
extern uint8_t data_ov006_021b8076[];
extern uint8_t data_ov006_021b8054[];
extern uint8_t data_ov006_021b8068[];
extern uint16_t data_ov006_021b8062[];
extern void func_ov006_021a3a04(void);

extern void func_ov006_021b46cc(void *a, void *b, void *c);
extern int func_ov006_021b4d94(void *p);
extern uint32_t func_ov006_021b3bf8(uint32_t a, int b);
extern void func_ov006_021b3e20(int a, int b, uint32_t c);
extern void func_ov006_021b3cec(uint32_t a, int b, uint16_t c, uint16_t d, int e);
extern void func_ov006_021b3d84(uint32_t a, int b, int c);
extern uint32_t func_ov006_021b570c(int a, void *b, int c, int d);

void func_ov006_021a3884(void)
{
    int n;
    int i;
    int t;
    int neg;
    uint32_t buf[1];

    n = data_ov006_021b8058[data_ov006_021bc6a8->b17];
    if (data_ov006_021bc6a8->b18 != 0) goto fail;
    if (data_ov006_021bc6a8->s16 != -1) return;
    for (i = 0; i < n; i++) {
        t = (data_ov006_021b8076 + 2 * data_ov006_021bc6a8->b17)[i];
        func_ov006_021b46cc(&data_ov006_021b8060[2 * t], data_ov006_021b8054, buf);
        if (func_ov006_021b4d94(buf)) {
            if (data_ov006_021bc6a8->f10 != 0) goto fail;
            t = (data_ov006_021b8068 + 2 * data_ov006_021bc6a8->b17)[i];
            func_ov006_021b3e20(0, t + 1, func_ov006_021b3bf8(data_ov006_021bc6a8->slot[i], 0));
            t = (data_ov006_021b8076 + 2 * data_ov006_021bc6a8->b17)[i];
            neg = -1;
            func_ov006_021b3cec(data_ov006_021bc6a8->slot[i], neg, data_ov006_021b8060[2 * t], data_ov006_021b8062[2 * t], neg);
            func_ov006_021b3d84(data_ov006_021bc6a8->slot[i], neg, 1);
            data_ov006_021bc6a8->f10 = func_ov006_021b570c(0, (void *)func_ov006_021a3a04, 0, 0x6e);
            data_ov006_021bc6a8->s16 = (int8_t)i;
            return;
        }
    }
fail:
    data_ov006_021bc6a8->s16 = -1;
}
