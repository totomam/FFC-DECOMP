#include "ffc/types.h"

extern void func_0208763c(void *m);
extern void func_02087678(void *m);

void func_02056bc0(uint8_t *p, uint32_t *n)
{
    volatile uint32_t loc[2];
    uint8_t f = p[0x12];
    uint8_t *m = p + 0x1c;
    if (f != 0) {
        func_0208763c(m);
    }
    {
        uint32_t **tail = *(uint32_t ***)(p + 0x18);
        *tail = n;
        *(uint32_t **)(p + 0x18) = n + 1;
    }
    n[1] = 0;
    if (f != 0) {
        func_02087678(m);
    }
    (void)loc;
}
