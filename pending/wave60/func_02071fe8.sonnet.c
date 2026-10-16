#include "ffc/types.h"
extern void func_021553c4(uint8_t *a, uint32_t b);
void func_02071fe8(uint8_t *p, uint8_t *q) {
    func_021553c4(q + 8, *(uint32_t *)(p + 8));
}
