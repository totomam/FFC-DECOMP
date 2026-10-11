#include "ffc/types.h"

extern void func_020695d0(void);
extern void func_02056844(void *p);

typedef struct {
    uint8_t pad0[0xe0];
    uint32_t *ptr;
    uint8_t pad1[0xf4 - 0xe4];
    uint8_t val;
} S;

void *func_ov007_021b9368(void *p)
{
    S *s = (S *)p;
    s->ptr[0] = s->val;
    func_020695d0();
    func_02056844(s);
    return s;
}
