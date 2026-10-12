#include "ffc/types.h"

extern int32_t func_ov001_02181620(void *self, int32_t kind, int32_t idx, uint32_t *out);
extern void func_ov001_0217fe28(void *dst, void *src, uint32_t n);
extern int32_t func_ov001_021816dc(void *self);

int32_t func_ov001_0218180c(uint8_t *self, uint8_t *a, uint8_t *b, uint32_t c)
{
    uint32_t local;
    uint8_t *sub = *(uint8_t **)(self + 8);
    int32_t idx = (int32_t)(c + 0x27 + *(uint32_t *)(sub + 0x44));

    if (func_ov001_02181620(self, 3, idx, &local) == 0) {
        return 0;
    }
    if (local != 0) {
        return 1;
    }
    func_ov001_0217fe28(self + 0x50, a, 0x20);
    func_ov001_0217fe28(self + 0x50, b, c);
    if (func_ov001_021816dc(self) != 0) {
        return 1;
    }
    return 0;
}
