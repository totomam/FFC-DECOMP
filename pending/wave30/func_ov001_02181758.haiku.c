#include "ffc/types.h"

extern int func_ov001_02181620(void *self, int a, void *b, int *c);
extern void func_ov001_0217fe28(void *dst, const void *src, uint32_t n);
extern int func_ov001_021816dc(void *self);

int func_ov001_02181758(void *self, const void *src)
{
    int flag;
    int ret = 1;
    uint8_t *s = *(uint8_t **)((uint8_t *)self + 8);
    uint8_t *m = *(uint8_t **)(s + 0x44);

    if (!func_ov001_02181620(self, 1, m + 0x27, &flag)) {
        return 0;
    }
    if (flag) {
        return ret;
    }
    func_ov001_0217fe28((uint8_t *)self + 0x50, src, 0x20);
    if (!func_ov001_021816dc(self)) {
        ret = 0;
    }
    return ret;
}
