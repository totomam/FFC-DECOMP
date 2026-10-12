#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint16_t pad[5];
    uint16_t c;
} FooRegs;

extern FooRegs data_02141390;
extern void func_02082d4c(uint16_t v);

void func_02083264(uint32_t x)
{
    data_02141390.a = (data_02141390.a | data_02141390.c) & ~x;
    data_02141390.c = x;

    volatile uint8_t *p;
    uint32_t v;
    switch (x) {
    case 3:
        *(volatile uint8_t *)0x4000240 = 0x93;
        /* fall through */
    case 2:
        v = 0x9b; p = (volatile uint8_t *)0x4000241;
        goto common;
    case 12:
        *(volatile uint8_t *)0x4000242 = 0x93;
        /* fall through */
    case 8:
        v = 0x9b; p = (volatile uint8_t *)0x4000243;
        goto common;
    case 0:
        *(volatile uint16_t *)0x4000060 &= 0xbfff;
        goto tail;
    case 1:
        v = 0x9b; p = (volatile uint8_t *)0x4000240;
        goto common;
    case 4:
        p = (volatile uint8_t *)0x4000242; v = 0x9b;
        goto common;
    default:
        goto tail;
    }

common:
    *p = v;
    *(volatile uint16_t *)0x4000060 |= 0x4000;
tail:
    func_02082d4c(data_02141390.a);
}
