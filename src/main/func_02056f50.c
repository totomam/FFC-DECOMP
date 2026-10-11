#include "ffc/types.h"

extern uint32_t data_0213e098;
extern uint32_t func_02055058(uint32_t x);

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint32_t w2;
    uint32_t w3;
    uint32_t w4;
    int32_t w5;
} S;

void func_02056f50(S *p) {
    uint32_t t = func_02055058(data_0213e098);
    p->w5 = p->w5 - t;
    if (p->w5 < 0) {
        p->w3 = (p->w3 & ~0xffu) | 2;
    }
}
