#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_ov007_021c60c0;

void func_ov007_021b2b1c(uint8_t *p)
{
    uint32_t b = data_ov007_021c60c0.b;
    uint32_t a = data_ov007_021c60c0.a;
    uint32_t off = 0x3114;
    *(uint32_t *)(p + off) = b;
    off += 4;
    *(uint32_t *)(p + off) = a;
}
