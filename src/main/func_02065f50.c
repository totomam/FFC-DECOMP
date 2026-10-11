#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } S;
extern void func_02062930(void *p, S s);
extern uint32_t data_020b1974[];
void *func_02065f50(uint32_t *p, S s)
{
    func_02062930(p, s);
    *p = (uint32_t)data_020b1974;
    return p;
}
