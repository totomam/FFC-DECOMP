#include "ffc/types.h"

extern uint8_t data_020b0440[];

typedef struct {
    uint32_t vt;
    uint8_t pad4;
    uint8_t flag5;
    uint16_t pad6;
    uint32_t w8;
    uint32_t w0c;
    uint32_t w10;
    uint32_t w14;
} S;

void func_020509dc(S *p) {
    uint32_t *q;
    p->vt = (uint32_t)data_020b0440;
    p->flag5 = 0;
    q = &p->w0c;
    q[0] = p->w8 = 0;
    q[1] = 0;
    q[2] = 0;
}
