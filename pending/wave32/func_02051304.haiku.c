#include "ffc/types.h"

extern void func_02051600(void *p);
extern void func_0205134c(void *p, uint32_t a, uint32_t b);
extern uint32_t data_0213df5c[];

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
    uint32_t w4;
    uint32_t w8;
} S;

void func_02051304(S *p) {
    uint32_t r1;
    uint32_t r2;
    uint32_t c;
    uint32_t tmp[2];

    func_02051600(data_0213df5c);
    c = !p->flag;
    if (c) {
        r2 = (uint32_t)((uint8_t *)p + 2);
        r1 = (uint32_t)(((uint8_t *)p)[0] << 24) >> 25;
    } else {
        r2 = p->w8;
        r1 = p->w4;
    }
    r2 = r2 + (r1 << 1);
    r1 = (uint32_t)((uint8_t *)p + 2);
    if (!c) {
        r1 = p->w8;
    }
    func_0205134c(data_0213df5c, r1, r2);
}
