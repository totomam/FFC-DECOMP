#include "ffc/types.h"

extern uint8_t data_020b0344[];
extern void func_0204e84c(uint32_t v, void *p);

typedef struct {
    void *vt;
    uint32_t f4;
} S;

void *func_0204f45c(S *p)
{
    p->vt = data_020b0344;
    func_0204e84c(p->f4, p);
    return p;
}
