#include "ffc/types.h"
extern void func_021bf750(uint32_t a, uint32_t b, uint32_t c);
void func_02074504(uint8_t *p) {
    func_021bf750(*(uint32_t*)(p + 0x24), *(uint32_t*)(p + 0x28), *(p + 0x2c));
}
