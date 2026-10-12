#include "ffc/types.h"

extern void *func_ov003_0214886c(void *a, void *b, void **out, uint8_t *p, uint8_t *q);
extern void *func_ov003_0214e214(void *a, void *b, uint8_t x, uint8_t y, void *tmp);
extern uint32_t data_ov003_021793e0[];

void *func_ov003_02148814(void *a, uint32_t *b) {
    void *out;
    uint32_t tmp[2];
    uint8_t buf[2];
    void *r;
    int take;
    r = func_ov003_0214886c(a, b, &out, &buf[1], &buf[0]);
    take = 1;
    if (out != 0 && *(uint32_t *)((uint8_t *)out + 0xc) >= *b) {
        take = 0;
    }
    if (take) {
        tmp[0] = *b;
        tmp[1] = data_ov003_021793e0[5];
        return (uint8_t *)func_ov003_0214e214(a, r, buf[1], buf[0], tmp) + 0xc;
    }
    return (uint8_t *)out + 0xc;
}
