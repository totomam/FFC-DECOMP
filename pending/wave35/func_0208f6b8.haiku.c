#include "ffc/types.h"

extern void func_0208f6a4(void *object);
extern void func_0208f6a0(uint32_t a, void *b);

typedef uint32_t (*FnCall)(uint32_t, uint32_t, void *, uint32_t);

uint32_t func_0208f6b8(void *obj, uint32_t *out, uint32_t mode) {
    uint8_t *s = (uint8_t *)obj;
    uint32_t ret;

    func_0208f6a4(obj);
    if (mode == 1) {
        *(uint32_t *)(s + 0x28) = *(uint32_t *)(s + 0x20);
    }
    ret = ((FnCall)*(uint32_t *)(s + 0x3c))(*(uint32_t *)s, *(uint32_t *)(s + 0x1c), s + 0x28, *(uint32_t *)(s + 0x48));
    if (ret == 2) {
        *(uint32_t *)(s + 0x28) = 0;
    }
    if (out != 0) {
        *out = *(uint32_t *)(s + 0x28);
    }
    if (ret == 0) {
        *(uint32_t *)(s + 0x18) += *(uint32_t *)(s + 0x28);
        if (!((*(uint32_t *)(s + 4) << 19) >> 31)) {
            func_0208f6a0(*(uint32_t *)(s + 0x1c), s + 0x28);
        }
        ret = 0;
    }
    return ret;
}
