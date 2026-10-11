#include "ffc/types.h"

extern void func_ov006_021b20f0(uint32_t x);
extern void func_ov006_021b2140(void);
extern int func_0208e924(void *f, int a, uint8_t *ctx);
extern void func_ov006_021b2210(void);
extern uint8_t data_ov006_021bc800[];

int func_ov006_021b21cc(void)
{
    uint8_t *base;
    uint32_t off;
    int r;

    func_ov006_021b20f0(3);
    off = 0x4f << 6;
    base = *(uint8_t **)(data_ov006_021bc800 + 4);
    r = (*(int (**)(uint8_t *))(base + (off - 0x14)))(base + off);
    if (func_0208e924((void *)func_ov006_021b2210, r,
                      *(uint8_t **)(data_ov006_021bc800 + 4) + off) != 2) {
        func_ov006_021b2140();
        func_ov006_021b20f0(9);
        return 0;
    }
    return 1;
}
