#include "ffc/types.h"

typedef struct {
    uint32_t w0, w1, w2, w3, w4, w5, w6, w7, w8;
} S;

uint32_t func_ov001_0217cb40(S *p)
{
    if (p != 0 && p->w4 == 0 && p->w2 == 0 && p->w3 == 0 && p->w7 == 0 && p->w5 == 0 && p->w8 == 0) {
        return 1;
    }
    return 0;
}
