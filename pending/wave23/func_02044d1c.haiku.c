#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02056bf4(void *obj, uint32_t val);
extern Pair data_020afb78;

void func_02044d1c(uint8_t *p)
{
    uint32_t a = *(uint32_t *)(p + 0x94);
    uint8_t *q = p + 0x48;
    uint32_t b = *(uint32_t *)(p + 0x90);
    func_02056bf4(q, b);
    func_02056bf4(q, a);
    *(Pair *)(p + 0x80) = data_020afb78;
}
