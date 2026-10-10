#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02051e6c(void *a, Pair b);

void func_02052248(void *a, uint8_t *p)
{
    Pair t = *(Pair *)(p + 0x4c);
    func_02051e6c(a, t);
}
