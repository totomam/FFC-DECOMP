#include "ffc/types.h"
extern void func_02084ca4(void *d, void *s, uint32_t n);
void func_02011df4(uint8_t *a, uint8_t *b) {
    func_02084ca4(b, a + 0xc, 4);
    func_02084ca4(b + 4, a + 0x10, 4);
    func_02084ca4(b + 8, a + 0x14, 4);
}
