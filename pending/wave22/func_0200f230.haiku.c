#include "ffc/types.h"

extern uint8_t data_020ac058[];

typedef struct {
    void *vtbl;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t arr[6];
} S;

void func_0200f230(S *s)
{
    int i = 0;
    uint32_t z;

    s->fc = 0x1014c;
    s->f8 = i;
    s->vtbl = data_020ac058;
    z = i;
    for (; i < 6; i++) {
        s->arr[i] = z;
    }
}
