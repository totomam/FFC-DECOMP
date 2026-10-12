#include "ffc/types.h"

extern uint32_t func_020363a4(const void *object);
extern void func_02059c0c(uint32_t arg);

void func_ov009_0219d9c8(uint8_t *self, uint32_t a, uint32_t b, uint8_t c)
{
    *(self + 0x17b) = c;
    if (*(uint32_t *)(self + 0x98) == a) {
        if (b != 0) {
            if (*(uint32_t *)(self + 0xa0) == func_020363a4((const void *)b)) {
                return;
            }
        } else {
            if (*(uint32_t *)(self + 0x114) == 0) {
                return;
            }
        }
    }
    *(uint32_t *)(self + 0x98) = a;
    *(uint32_t *)(self + 0x114) = b;
    *(uint32_t *)(self + 0xa0) = 0;
    if (b != 0) {
        *(uint32_t *)(self + 0xa0) = func_020363a4((const void *)b);
    }
    func_02059c0c(*(uint32_t *)(*(uint32_t *)(self + 0x84) + 0x8c));
    *(self + 0x179) = 1;
}
