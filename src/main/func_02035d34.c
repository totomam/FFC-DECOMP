#include "ffc/types.h"

extern uint8_t data_020ae644;

typedef struct {
    void *f0;
    uint32_t f4;
} S;

void func_02035d34(S *p) {
    p->f0 = &data_020ae644;
    p->f4 &= ~0xffu;
    p->f4 &= 0xfffffeffu;
}
