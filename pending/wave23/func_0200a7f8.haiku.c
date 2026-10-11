#include "ffc/types.h"

typedef struct { uint8_t c; } S1;

extern void func_0200a82c(uint32_t a, uint32_t b, uint32_t c, uint8_t *base, uint8_t *end, S1 v);

typedef struct { uint32_t flag : 1; uint32_t rest : 31; } HdrW;
typedef struct { uint8_t a : 1; uint8_t len : 7; } HdrB;

void func_0200a7f8(uint32_t a, uint32_t b, uint32_t c, uint8_t *p)
{
    uint8_t *base;
    uint32_t len;
    S1 s;

    if (((HdrW *)p)->flag == 0) {
        base = p + 2;
        len = ((HdrB *)p)->len;
    } else {
        base = *(uint8_t **)(p + 8);
        len = *(uint32_t *)(p + 4);
    }
    {
        uint8_t *end = base + (len << 1);
        func_0200a82c(a, b, c, base, end, s);
    }
}
