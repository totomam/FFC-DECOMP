#include "ffc/types.h"

extern uint8_t *func_ov000_02166414(uint8_t *p);
extern void func_ov000_021652a8(int a, int b, int c, void *d);
extern uint32_t func_ov000_021686f4(int a, int b, int c);
extern void func_ov000_02168784(uint8_t *a, uint8_t *b);
extern uint8_t data_ov000_0216b7fc[];
extern uint8_t data_ov000_0216b900[];
extern uint8_t data_ov000_0216b924[];
extern uint8_t data_ov000_0216b7dc[];

typedef struct {
    uint8_t *s;
    uint8_t k1[16];
    uint8_t k2[16];
    uint32_t h;
    uint32_t f5;
    uint32_t f7;
    uint32_t f4;
    uint32_t f6;
    uint32_t f3;
    uint32_t f8;
} Big;

uint32_t func_ov000_02166f08(uint8_t *p1, uint8_t *p2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8)
{
    Big b;
    uint32_t i, j;
    uint8_t *d;
    uint8_t *s;

    b.s = func_ov000_02166414(p1);
    if (*(uint32_t *)(b.s + 0xc) == 0) {
        func_ov000_021652a8(12, 0, 15, data_ov000_0216b7fc);
        return 3;
    }
    if (*(int8_t *)p1 == 0) {
        func_ov000_021652a8(12, 0, 15, data_ov000_0216b900);
        return 10;
    }
    if (*(int8_t *)p2 == 0) {
        func_ov000_021652a8(12, 0, 15, data_ov000_0216b924);
        return 10;
    }
    b.f4 = a4;
    b.f5 = a5;
    b.f6 = a6;
    b.f3 = a3;
    b.f7 = a7;
    s = p1;
    d = b.k1;
    for (i = 16; i != 0; i--) {
        *d++ = *s++;
    }
    s = p2;
    d = b.k2;
    for (j = 16; j != 0; j--) {
        *d++ = *s++;
    }
    b.h = func_ov000_021686f4(4, 1, 0);
    if (b.h == 0) {
        func_ov000_021652a8(12, 2, 1, data_ov000_0216b7dc);
        return 1;
    }
    b.f8 = a8;
    func_ov000_02168784(*(uint8_t **)(b.s + 8), b.k1);
    return 0;
}
