#include "ffc/types.h"

extern int func_ov006_021a42d4(uint32_t v);
extern void func_ov006_021a64c8(void (*f)(void));
extern void func_ov006_021b11fc(int a, int b, int c, int d, int e);
extern void func_ov006_021a6508(uint32_t a, uint32_t *out);
extern void func_ov006_021aa2d0(void);
extern void func_ov006_021aa5e0(void);
extern void func_ov006_021aa45c(void);
extern uint32_t data_ov006_021b8614[2];
extern uint8_t *data_ov006_021bc780;

void func_ov006_021aa248(void)
{
    uint32_t tbl[2];
    uint32_t idx;
    uint32_t zero;
    uint32_t *p;
    uint8_t mode;

    p = tbl;
    zero = 0;
    tbl[0] = data_ov006_021b8614[0];
    tbl[1] = data_ov006_021b8614[1];
    if (func_ov006_021a42d4(tbl[1]) != 0) {
        return;
    }
    mode = data_ov006_021bc780[0x2a];
    if (mode == 0) {
        func_ov006_021a64c8(func_ov006_021aa2d0);
        return;
    }
    if (mode == 2) {
        func_ov006_021b11fc(6, 3, 1, -1, zero);
        func_ov006_021a64c8(func_ov006_021aa5e0);
        return;
    }
    func_ov006_021a6508(zero, &idx);
    func_ov006_021b11fc((int)p[idx], 2, 1, -1, zero);
    func_ov006_021a64c8(func_ov006_021aa45c);
}
