#include "ffc/types.h"

extern uint8_t data_020b0c94[];

typedef struct {
    void *vt;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10[5];
    uint32_t f24;
    uint8_t f28;
} S;

S *func_02057620(S *p) {
    uint8_t *q;
    p->vt = data_020b0c94;
    q = (uint8_t *)p + 0x28;
    p->f04 = 0;
    p->f08 = 0;
    p->f0c = 0;
    p->f24 = 0;
    *q = 0;
    return p;
}
