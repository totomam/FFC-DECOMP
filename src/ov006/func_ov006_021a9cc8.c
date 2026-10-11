#include "ffc/types.h"

extern uint32_t func_02081334(uint32_t a, uint32_t b);
extern uint32_t data_ov006_021bc778;

typedef struct {
    uint16_t a;
    uint16_t h;
    uint8_t *p;
} S;

void func_ov006_021a9cc8(void) {
    S *s = (S *)&data_ov006_021bc778;
    if (s->p[0x56]) {
        uint32_t v = func_02081334(s->h, 0x1c);
        v = ((v - 0x32) << 16) & 0x1ff0000;
        *(uint32_t *)0x4000010 = v;
        *(uint32_t *)0x4000018 = v;
        s->p[0x56] = 0;
    }
}
