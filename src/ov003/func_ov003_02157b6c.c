#include "ffc/types.h"

extern void func_0202b31c(uint32_t a, uint32_t b, uint32_t c);
typedef struct { uint32_t a3; } A;
extern void func_ov003_02157be0(uint8_t *p, uint32_t id, uint32_t a2, A a3, uint32_t s1, uint32_t s2, uint8_t c);
typedef struct { uint32_t s1, s2; uint8_t c; } S;

void func_ov003_02157b6c(uint8_t *p, uint32_t id, uint32_t a2, A a, S s)
{
    if (*(uint16_t *)(p + 0xbe) == id) {
        if (*(uint32_t *)(p + 0x110) != 0) {
            func_0202b31c(*(uint32_t *)(p + 0x110), 10, a.a3);
        }
        if (*(uint32_t *)(p + 0x114) != 0) {
            func_0202b31c(*(uint32_t *)(p + 0x114), 10, a.a3);
        }
        if (*(uint32_t *)(p + 0x118) != 0) {
            func_0202b31c(*(uint32_t *)(p + 0x118), 10, a.a3);
        }
    } else {
        func_ov003_02157be0(p, id, a2, a, s.s1, s.s2, s.c);
    }
}
