#include "ffc/types.h"

extern void func_02081bb4(uint32_t *a, uint32_t *b, uint32_t *c, int x, uint32_t *m);

typedef struct {
    uint8_t pad0[0x21];
    uint8_t flag;
    uint8_t pad1[0x5c - 0x22];
    uint32_t a[3];
    uint32_t c[3];
    uint32_t b[3];
    uint8_t pad2[0x90 - 0x80];
    uint32_t m[9];
    uint8_t pad3[0x140 - 0xb4];
    uint32_t out[9];
} S;

void func_020230f0(S *p)
{
    uint32_t la[3];
    uint32_t lb[3];
    uint32_t lc[3];
    uint8_t zero = 0;
    int doit = 0;

    if (p->flag) {
        doit = 1;
        la[0] = p->a[0];
        la[1] = p->a[1];
        la[2] = p->a[2];
        lb[0] = p->b[0];
        lb[1] = p->b[1];
        lb[2] = p->b[2];
        lc[0] = p->c[0];
        lc[1] = p->c[1];
        lc[2] = p->c[2];
        p->flag = zero;
    }

    if (doit) {
        if (la[0] != lc[0] || la[1] != lc[1] || la[2] != lc[2]) {
            *(volatile uint32_t *)0x04000440 = 2;
            func_02081bb4(la, lb, lc, 1, p->m);
            p->out[0] = p->m[0];
            p->out[1] = p->m[3];
            p->out[2] = p->m[6];
            p->out[3] = p->m[1];
            p->out[4] = p->m[4];
            p->out[5] = p->m[7];
            p->out[6] = p->m[2];
            p->out[7] = p->m[5];
            p->out[8] = p->m[8];
        }
    }
}
