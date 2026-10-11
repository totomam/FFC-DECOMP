#include "ffc/types.h"

extern uint32_t func_ov002_02195fa4(void *p);
extern uint32_t func_ov002_02195fac(void *p);

void func_ov002_0219686c(uint8_t *a, void *b) {
    if (b) {
        *(uint32_t *)(a + 0xbc) = func_ov002_02195fa4(b);
        *(uint32_t *)(a + 0xc0) = func_ov002_02195fac(b);
    }
}
