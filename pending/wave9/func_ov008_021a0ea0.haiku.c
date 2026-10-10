#include "ffc/types.h"

extern void func_ov005_02197b74(void *p, int a, int b);
extern uint8_t data_ov008_021a88cc[];

void *func_ov008_021a0ea0(void *p) {
    func_ov005_02197b74(p, 2, 0);
    *(uint8_t **)p = data_ov008_021a88cc;
    ((uint8_t *)p)[0x105] = 0x40;
    return p;
}
