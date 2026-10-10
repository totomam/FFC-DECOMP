#include "ffc/types.h"

extern void func_020397e4(uint32_t *p, uint32_t a, uint32_t v);

void func_020397d8(uint32_t *p, uint32_t a, uint32_t v) {
    *p = v;
    func_020397e4(p, a, v);
}
