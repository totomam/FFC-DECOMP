#include "ffc/types.h"

extern void *func_02092b00(void *base, const void *s);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_02093b18(void *p);
extern uint8_t data_ov000_02169de0[];
extern uint8_t data_ov000_02169dfc[];
extern uint8_t data_ov000_02169e10[];

int func_ov000_02156708(uint8_t *a)
{
    uint8_t *r6 = a + 0x1a44;
    uint8_t *r7;
    uint32_t off;
    uint8_t *p;
    int8_t c;

    r7 = *(uint8_t **)r6;
    if (func_02092b00(r7, data_ov000_02169de0) == 0) {
        return 0;
    }
    r7 = (uint8_t *)func_02092b00(r7, data_ov000_02169de0) + 4;
    func_0208763c(a + 0x1a54);
    *(uint32_t *)(a + 0x1a70) = *(uint32_t *)(r6 + 4) - (uint32_t)r7;
    func_02087678(a + 0x1a54);

    r6 = (uint8_t *)func_02092b00(*(void **)r6, data_ov000_02169dfc);
    if (r6 == 0) {
        return 1;
    }
    off = func_02092864(data_ov000_02169dfc);
    p = (uint8_t *)func_02092b00(r6 + off, data_ov000_02169e10);
    c = *(int8_t *)p;
    *p = 0;
    func_0208763c(a + 0x1a54);
    *(uint32_t *)(a + 0x1a6c) = func_02093b18(r6 + off);
    func_02087678(a + 0x1a54);
    *p = (uint8_t)c;
    return 1;
}
