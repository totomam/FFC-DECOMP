#include "ffc/types.h"

extern void func_02054218(void);
extern void func_02054380(void);
extern void func_02056844(void *p);
extern uint8_t data_020b237c[];

void *func_020746c0(void *p)
{
    uint8_t *o = (uint8_t *)p;
    uint8_t *s;

    *(uint8_t **)o = data_020b237c;
    s = *(uint8_t **)(o + 0x14);
    if (s[0x16] != 0) {
        func_02054218();
        func_02054380();
        s = *(uint8_t **)(o + 0x14);
        s[0x16] = 0;
    }
    func_02056844(p);
    return p;
}
