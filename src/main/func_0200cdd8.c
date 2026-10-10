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

typedef struct { uint8_t v; } C;

extern void func_0200a82c(void *p, uint32_t a, int32_t b, void *s, void *q, C c);

void func_0200cdd8(uint8_t *p, S s)
{
    uint32_t r1;
    C c;
    if (((W *)p)->flag == 0) {
 r1 = ((B *)p)->val;
 } else {
 r1 = *(uint32_t *)(p + 4);
 }
    func_0200a82c(p, r1, 0, &s, &s.h, c);
}
