#include "ffc/types.h"

typedef void (*FnT)(void *, uint32_t);

void func_02074f8c(void *a, uint8_t *b) {
    FnT f = *(FnT *)(b + 0x4264);
    if (f) {
        f(a, *(uint32_t *)(b + 0x4268));
    }
}
