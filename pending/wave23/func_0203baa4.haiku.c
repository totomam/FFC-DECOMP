#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S8;

extern void *func_0205681c(uint32_t size);
extern void func_020661c8(void *p, S8 s, uint32_t c, uint32_t d, uint32_t e);

void func_0203baa4(S8 s, uint32_t c, uint32_t d, uint32_t e) {
    void *p = func_0205681c(0x40);
    if (p != 0) {
        func_020661c8(p, s, c, d, e);
    }
}
