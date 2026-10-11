#include "ffc/types.h"

extern void func_02084ca4(uint8_t *dst, uint8_t *src, int32_t n);

void func_02065ee4(uint8_t *self, int32_t a, uint8_t *c)
{
    uint8_t buf[0x100];
    uint32_t *obj = *(uint32_t **)(self + 0x1c);
    int32_t off;
    int32_t len;

    ((void (*)(uint32_t *, int32_t, uint8_t *))(*(uint32_t **)obj)[0x50 / 4])(
        obj, a - *(int32_t *)(self + 0x24), buf);

    off = *(int32_t *)(self + 0x20);
    len = *(int32_t *)(self + 0x28) - off;
    func_02084ca4(buf + off, c, len);
}
