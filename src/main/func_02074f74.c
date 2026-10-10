#include "ffc/types.h"

void func_02074f74(uint32_t a, uint32_t b, uint8_t *p) {
    void (*fn)(uint32_t, uint32_t, uint32_t) = *(void (**)(uint32_t, uint32_t, uint32_t))(p + 0x425c);
    if (fn != 0) {
        fn(a, b, *(uint32_t *)(p + 0x4260));
    }
}
