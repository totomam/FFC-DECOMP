#include "ffc/types.h"
extern void func_020974f8(void *p);
void func_0209923c(uint8_t *p) {
    p += *(int32_t *)(*(int32_t *)p - 12);
    func_020974f8(p);
}
