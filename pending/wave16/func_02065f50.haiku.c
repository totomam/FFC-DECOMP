#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern void func_02062930(void *p, uint32_t a, uint32_t b);
extern uint32_t data_020b1974[];

void *func_02065f50(uint32_t *p, S s)
{
    uint32_t *q = (uint32_t *)&s;
    uint32_t a = *q++;
    uint32_t b = *q++;
    func_02062930(p, a, b);
    *p = (uint32_t)data_020b1974;
    return p;
}
