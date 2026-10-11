#include "ffc/types.h"

typedef struct Outer {
    uint8_t pad[0x80];
    uint8_t *ptr80;
    uint8_t pad2[0x0c];
    int32_t f90;
} Outer;

int32_t func_0206940c(Outer *p)
{
    if (p->f90 == -1) {
        if (p->ptr80 != 0) {
            return *(int32_t *)(p->ptr80 + 0x8c);
        }
    }
    return *(volatile int32_t *)&p->f90;
}
