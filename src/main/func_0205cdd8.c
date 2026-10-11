#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_0205730c(void *p);
extern void func_0205cbe0(uint32_t x, Pair v);

void func_0205cdd8(uint8_t *p)
{
    Pair v;
    func_0205730c(p);
    v.a = *(uint32_t *)(p + 0x34);
    v.b = *(uint32_t *)(p + 0x38);
    func_0205cbe0(*(uint32_t *)(p + 0x4c), v);
}
