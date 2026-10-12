#include "ffc/types.h"

extern uint8_t *data_ov000_0216e268;
extern uint16_t func_0208d570(void);
extern uint16_t func_0208d65c(void);
extern void func_02084b2c(void *dst, int val, int n);
extern uint32_t func_0208da6c(void *fn, void *arg);
extern void func_ov000_0215149c(void);

uint32_t func_ov000_021516a4(void *a) {
    uint32_t r;

    if (a == 0) {
        return -1;
    }
    *(uint32_t *)(data_ov000_0216e268 + 0x1300) = (uint32_t)(data_ov000_0216e268 + 0xF00);
    *(uint16_t *)(data_ov000_0216e268 + 0x1304) = 0x400;
    *(uint16_t *)(data_ov000_0216e268 + 0x1306) = func_0208d570();
    *(uint16_t *)(data_ov000_0216e268 + 0x1308) = func_0208d65c();
    *(uint16_t *)(data_ov000_0216e268 + 0x1310) = 1;
    func_02084b2c(data_ov000_0216e268 + 0x130A, 0xff, 6);
    *(void **)(data_ov000_0216e268 + 0x1344) = a;
    *(uint32_t *)(data_ov000_0216e268 + 0x1A90) = 1;
    r = func_0208da6c(func_ov000_0215149c, data_ov000_0216e268 + 0x1300);
    if (r == 2) {
        return 0;
    }
    return r;
}
