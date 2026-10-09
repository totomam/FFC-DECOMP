#include "ffc/types.h"
extern void func_02084ca4(void *d, void *s, uint32_t n);
void func_0200ff88(uint8_t *a, uint8_t *b) {
    func_02084ca4(a + 0xc, b, 4);
    func_02084ca4(a + 0x10, b + 4, 4);
    func_02084ca4(a + 0x14, b + 8, 4);
}
