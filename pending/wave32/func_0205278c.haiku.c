#include "ffc/types.h"

typedef struct {
    uint8_t v;
} Byte1;

extern void func_020059e4(uint32_t *p, uint32_t b);
extern void func_02005af4(uint32_t *p, uint32_t z1, uint32_t z2, uint32_t a, uint32_t s, Byte1 c);

uint32_t *func_0205278c(uint32_t *p, uint32_t a, uint32_t b) {
    Byte1 c;
    Byte1 *pc = &c;
    uint32_t i;
    for (i = 0; i < 3; i++) {
        p[i] = 0;
    }
    func_020059e4(p, b);
    func_02005af4(p, 0, 0, a, a + b, *pc);
    return p;
}
