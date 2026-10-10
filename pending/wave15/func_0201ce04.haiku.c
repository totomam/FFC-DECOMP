#include "ffc/types.h"

extern void func_02088f30(void);

struct S {
    uint8_t pad[0x38];
    uint16_t *tbl;
};

void func_0201ce04(struct S *s, uint32_t idx, uint32_t v)
{
    if (v != s->tbl[idx]) {
        func_02088f30();
    }
    s->tbl[idx] = 0;
}
