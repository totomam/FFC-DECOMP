#include "ffc/types.h"
extern void func_02069694(void *p, uint32_t a, int b);
extern void func_02069670(void *p, uint32_t a, int b, uint32_t c);
void func_ov005_02198588(uint8_t *p) {
    int v = p[0x149];
    uint8_t i = v % 4;
    func_02069694(p, *(uint32_t*)(p + 0x12c), 4);
    func_02069694(p, *(uint32_t*)(p + 0x12c), 2);
    func_02069670(p, *(uint32_t*)(p + 0x12c), 4, (*(uint32_t**)(p + 0x114))[(uint8_t)(i + 4)]);
    func_02069670(p, *(uint32_t*)(p + 0x12c), 2, (*(uint32_t**)(p + 0x114))[i]);
}
