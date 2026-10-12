#include "ffc/types.h"

extern uint8_t *data_ov006_021bc820;
extern uint32_t func_020783a4(uint8_t *p);
extern uint8_t *func_020783d0(uint8_t *p);
extern void func_ov006_021b4510(void *a, int32_t x, int32_t y, int32_t z, uint16_t id, int32_t idx);

void func_ov006_021b453c(void *a, int32_t b, int32_t c, int32_t d, int32_t stride, uint16_t *list, int32_t idx)
{
    while (*list != 0) {
        uint32_t w = func_020783a4(data_ov006_021bc820 + (idx << 3));
        if (w == 0xffff) {
            w = *(uint16_t *)(*(uint8_t **)(data_ov006_021bc820 + (idx << 3)) + 2);
        }
        uint8_t *p = func_020783d0(data_ov006_021bc820 + (idx << 3));
        func_ov006_021b4510(a, b + ((stride - (int8_t)p[2]) >> 1), c, d, *list, idx);
        list++;
        b += stride;
    }
}
