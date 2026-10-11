#include "ffc/types.h"

typedef struct { uint32_t x; uint32_t y; } S2;

extern void *func_0205681c(uint32_t size);
extern void func_02066204(void *p, uint32_t a, S2 s, uint32_t d, uint32_t e, uint32_t f);

void func_0203bad4(uint32_t a, S2 s, uint32_t d, uint32_t e, uint32_t f) {
    void *p = func_0205681c(0x40);
    if (p != 0) {
        func_02066204(p, a, s, d, e, f);
    }
}
