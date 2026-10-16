#include "ffc/types.h"
extern uint32_t func_ov000_0214e898(uint32_t a);
extern void func_02084b2c(void *p, int v, int n);
extern void func_0208bcc8(void *d, void *s, int n);
extern uint8_t data_ov000_0216e110[];
extern uint8_t data_ov000_0216e0a0[];
extern uint8_t data_ov000_0216e0a8[];
typedef struct { uint32_t w0; uint32_t pad[5]; void *p18; uint32_t w1c; void *p20; uint32_t w24; uint16_t h28; uint16_t h2a; void *p2c; } S;
extern S data_ov000_0216e088;
static inline uint32_t bs(uint32_t x) {
    return ((x << 8) & 0xff0000u) | ((x >> 8) & 0xff00u) | ((x << 24) & 0xff000000u) | (uint8_t)(x >> 24);
}
void *func_ov000_0214ee74(void *a) {
    uint32_t r = func_ov000_0214e898((uint32_t)a);
    if (r == 0) return 0;
    func_02084b2c(data_ov000_0216e110, 0, 0x101);
    func_0208bcc8(data_ov000_0216e110, a, 0x101);
    data_ov000_0216e088.p20 = data_ov000_0216e110;
    data_ov000_0216e088.w24 = 0;
    data_ov000_0216e088.h28 = 2;
    data_ov000_0216e088.h2a = 4;
    data_ov000_0216e088.p2c = data_ov000_0216e0a0;
    data_ov000_0216e088.p18 = &data_ov000_0216e088;
    data_ov000_0216e088.w1c = 0;
    data_ov000_0216e088.w0 = bs(r);
    return data_ov000_0216e0a8;
}
