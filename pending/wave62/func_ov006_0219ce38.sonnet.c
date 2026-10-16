/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern uint32_t data_ov006_021ba1c8[];
extern void func_02084ca4(void *, void *);
extern int32_t func_ov006_0219ce9c(int32_t);
uint8_t *func_ov006_0219ce38(uint8_t *p, int32_t idx) {
    if (data_ov006_021ba1c8[1] == 0) return 0;
    int32_t s = p[2];
    if (s > (int32_t)data_ov006_021ba1c8[3]) return 0;
    int32_t k = idx - 1;
    int32_t off = k * 32;
    uint8_t *q = (uint8_t *)data_ov006_021ba1c8[1] + off;
    func_02084ca4(p + 3, q + data_ov006_021ba1c8[2] * (uint32_t)s);
    ((uint32_t *)((uint8_t *)data_ov006_021ba1c8[1] + 0x1e0))[k] |= 1u << s;
    if (func_ov006_0219ce9c(idx) != 0) return (uint8_t *)data_ov006_021ba1c8[1] + off;
    return 0;
}
