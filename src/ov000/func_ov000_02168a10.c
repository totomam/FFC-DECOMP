#include "ffc/types.h"

extern void *func_ov000_021653d4(uint32_t size);
extern uint32_t func_ov000_021686f4(void *a, uint32_t b, uint32_t c);

typedef struct {
    uint32_t *arr;
    int32_t n;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
} FfcObj;

FfcObj *func_ov000_02168a10(void *a, int32_t n, uint32_t b, uint32_t d, uint32_t e, uint32_t f)
{
    FfcObj *p = (FfcObj *)func_ov000_021653d4(0x14);
    int32_t i = 0;
    p->arr = (uint32_t *)func_ov000_021653d4(n << 2);
    for (i = 0; i < n; i++) {
        p->arr[i] = func_ov000_021686f4(a, b, f);
    }
    p->n = n;
    p->f8 = f;
    p->f10 = e;
    p->fc = d;
    return p;
}
