#include "ffc/types.h"

typedef struct {
    uint8_t flag;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
} S;

void func_02005f78(S *p, uint32_t a, uint32_t b)
{
    p->f4 = a;
    p->f8 = 0;
    p->fc = b;
    p->flag = 1;
}
