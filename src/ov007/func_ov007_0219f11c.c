#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_02056c9c(void *p, int x);
extern char data_ov007_021c3250[];
extern Pair data_ov007_021c3260;

void *func_ov007_0219f11c(void *p, uint32_t a, uint8_t b, uint32_t c)
{
    uint8_t *q = (uint8_t *)p;
    func_02056c9c(p, 0);
    *(char **)p = data_ov007_021c3250;
    *(uint32_t *)(q + 0x88) = a;
    *(uint8_t *)(q + 0x90) = b;
    *(uint32_t *)(q + 0x94) = c;
    *(Pair *)(q + 0x80) = data_ov007_021c3260;
    return p;
}
