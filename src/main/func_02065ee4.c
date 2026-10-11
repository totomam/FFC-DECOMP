#include "ffc/types.h"

extern void func_02084ca4(void *dst, void *src, int32_t n);

typedef void (*VFn)(void *self, int32_t x, void *out);

void func_02065ee4(uint8_t *self, int32_t x, void *dst) {
    uint8_t buf[0x100];
    void *obj = *(void **)(self + 0x1c);
    VFn fn = (VFn)((void **)(*(void **)obj))[20];
    int32_t off;
    fn(obj, x - *(int32_t *)(self + 0x24), buf);
    off = *(int32_t *)(self + 0x20);
    func_02084ca4(buf + off, dst, *(int32_t *)(self + 0x28) - off);
}
