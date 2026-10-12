#include "ffc/types.h"

extern void *data_020b8e44;
extern void func_02075ad0(uint32_t v, void *a, void *b, uint32_t c);
extern void func_ov001_0218e4a8(uint8_t *self);
extern void func_ov001_0218e54c(uint8_t *self);
extern void func_ov001_0218e5e4(uint8_t *self);
extern void func_ov001_0218e650(uint8_t *self);
extern void func_ov001_0218e6ac(uint8_t *self);

int func_ov001_0218e32c(uint8_t *self, int unused1, int unused2, uint32_t p3)
{
    int ret = 0;
    void *q = *(void **)data_020b8e44;
    uint32_t v = *(uint32_t *)((uint8_t *)q + 0x88);
    func_02075ad0(v, self + 0xa4, self + 0xa8, p3);

    switch (*(uint32_t *)(self + 0xa8)) {
    case 1:
        if (self[0x9d]) {
            func_ov001_0218e4a8(self);
            ret = 1;
        }
        break;
    case 2:
        if (self[0x9e]) {
            func_ov001_0218e54c(self);
            ret = 1;
        }
        break;
    case 4:
    case 5:
        func_ov001_0218e5e4(self);
        ret = 1;
        break;
    case 3:
    case 6:
        func_ov001_0218e650(self);
        ret = 1;
        break;
    case 7:
        func_ov001_0218e6ac(self);
        ret = 1;
        break;
    default:
        break;
    }
    return ret;
}
