#include "ffc/types.h"
extern uint32_t func_0207abbc(void *p, uint32_t n);
extern void func_0207b684(uint32_t n);
extern void func_0207b818(void *p, uint32_t n);
extern void func_020078bc(void *p);
void func_020066a4(uint8_t *a) {
    uint32_t v;
    uint8_t *b = a + 0xb4;
    v = func_0207abbc(b, 0x2800);
    *(uint32_t *)(a + 0x31ec) = v;
    func_0207b684(10);
    func_0207b818(a + 0x31f0, 11);
    func_020078bc(a + 0x31d8);
}
