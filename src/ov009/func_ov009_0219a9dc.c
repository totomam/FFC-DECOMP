#include "ffc/types.h"

typedef void (*fn_t)(void *);

void func_ov009_0219a9dc(uint8_t *self, int idx) {
    void *obj = *(void **)(self + idx * 4 + 0x88);
    if (obj != 0) {
        fn_t f = (fn_t)(*(void ***)obj)[11];
        f(obj);
    }
    *(int16_t *)(self + 0xac) = -1;
    *(int16_t *)(self + 0xae) = -1;
}
