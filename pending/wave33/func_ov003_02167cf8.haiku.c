#include "ffc/types.h"

extern void func_0201e954(void *h, uint32_t i, void *out);
extern uint32_t func_02036cd8(const void *object);
extern uint32_t func_02036cfc(const void *object);
extern uint32_t func_02036ce0(const void *object);
extern void *func_02084b2c(void *d, int c, uint32_t n);
extern void func_0201e92c(void *h, uint32_t i, void *out);
extern void func_0201e9e4(void *h);
extern void *data_020b93b8;

void func_ov003_02167cf8(void) {
    uint8_t buf[0x18];
    uint32_t i;
    for (i = 0; i < 0x40; i++) {
        func_0201e954(data_020b93b8, i, buf);
        if (func_02036cd8(buf) && func_02036cfc(buf) && func_02036ce0(buf) == 2) {
            func_02084b2c(buf, 0, 0x18);
            func_0201e92c(data_020b93b8, i, buf);
        }
    }
    func_0201e9e4(data_020b93b8);
}
