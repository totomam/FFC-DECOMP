#include "ffc/types.h"

typedef struct {
    uint8_t a;
    uint8_t b;
    uint16_t h;
    uint32_t w1;
    uint32_t w2;
} S;

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
} W;

typedef struct {
    uint8_t lo : 1;
    uint8_t val : 7;
} B;

extern void func_0200a82c(void *p, uint32_t a, int32_t b, void *s, void *q, uint8_t c);

void func_0200cdd8(uint8_t *p, S s)
{
    uint32_t r1;
    uint8_t b;

    if (((W *)p)->flag) {
        r1 = *(uint32_t *)(p + 4);
    } else {
        r1 = ((B *)p)->val;
    }
    func_0200a82c(p, r1, 0, &s, &s.h, *(volatile uint8_t *)&b);
}
