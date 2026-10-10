#include "ffc/types.h"

extern uint32_t data_020b2164;
extern void func_02086aa4(int32_t bit_index);
extern void func_02056844(void *p);

typedef struct {
    uint32_t vt;
    uint8_t pad[2];
    uint16_t x;
} S;

void *func_02070a0c(void *p)
{
    S *s = (S *)p;
    s->vt = (uint32_t)&data_020b2164;
    func_02086aa4(s->x);
    func_02056844(s);
    return s;
}
