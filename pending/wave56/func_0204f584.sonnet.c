#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_0204e7ac(uint32_t v);
extern void func_02087678(uint8_t *p);
extern uint8_t *data_0209e698[];

typedef struct { uint32_t lo:16; uint32_t idx:2; uint32_t mid:13; uint32_t en:1; } Reg;

void func_0204f584(uint8_t *p) {
    struct {
        uint32_t t;
        uint8_t *q;
        volatile uint8_t flag;
    } loc;
    uint32_t i;
    uint32_t w;
    uint16_t v;
    uint16_t *reg;

    loc.q = p + 0x7c;
    loc.flag = 1;
    if (loc.flag) {
        func_0208763c();
    }

    for (i = 1; i < 10; i++) {
        if (((Reg *)(p + 0x74))->en && ((Reg *)(p + 0x74))->idx == i - 1) {
            *(uint8_t *)&loc.t = 0;
            loc.t |= 0x80;
            *data_0209e698[i] = *(uint8_t *)&loc.t;
        } else {
            *data_0209e698[i] = p[0x34 + i * 4];
        }
    }

    w = *(uint32_t *)(p + 0x74);
    if (w >> 31) {
        *(uint32_t *)0x04000064 = w;
        *(uint32_t *)(p + 0x74) = *(uint32_t *)(p + 0x74) & 0x7fffffff;
    }

    func_0204e7ac(*(uint32_t *)(p + 0x20));
    func_0204e7ac(*(uint32_t *)(p + 0x24));

    v = *(uint16_t *)(p + 0x5c);
    if (*(p + 0x78)) {
        v ^= 0x8000;
    }
    reg = (uint16_t *)0x04000304;
    *reg = (v & 0xfdf0) | (*reg & 0x020f);

    if (loc.flag) {
        func_02087678(loc.q);
    }
}
