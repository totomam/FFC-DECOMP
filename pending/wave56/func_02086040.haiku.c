#include "ffc/types.h"

extern uint8_t data_02141400;
extern uint8_t data_021413e0;
extern uint8_t data_02141450;
extern int func_02086210(void *p, uint32_t a, uint16_t b);
extern void func_02087874(void *p, uint32_t n);
extern int func_020862c8(uint32_t a, uint16_t b, void *c);
extern void func_02087058(void *p);

typedef struct {
    uint32_t f0;
    void (*f4)(uint32_t, void *);
    void *f8;
    uint32_t pad[13];
    uint32_t f40;
    uint32_t f44;
    uint32_t f48;
    uint32_t f4c;
} G;

void func_02086040(uint32_t a, uint32_t b)
{
    G *g;
    uint16_t a16;
    uint16_t r5;
    uint32_t n;
    uint32_t code;
    void *p;

    a16 = (uint16_t)(uint8_t)a;
    g = (G *)&data_02141400;
    code = 7;
    n = g->f48;
    if (n > 0x20) {
        n = 0x20;
    }
    r5 = (uint16_t)n;

    if (b == 0 && a16 == 0) {
        p = &data_021413e0;
        if (func_02086210(p, g->f4c, r5) == 0) {
            code = 6;
            goto cleanup;
        }
        g->f44 += r5;
        g->f48 -= r5;
        g->f4c += r5;
        if (g->f48 == 0) {
            code = 0;
            goto cleanup;
        }
        func_02087874(p, 0x20);
        n = g->f48;
    if (n > 0x20) {
        n = 0x20;
    }
    r5 = (uint16_t)n;
        if (func_020862c8(g->f44, r5, p) == 1) {
            return;
        }
        code = 3;
        goto cleanup;
    }

    if (b == 1) {
        code = 3;
        goto cleanup;
    }

    if (a16 == 2) {
        code = 2;
    } else if (a16 == 3) {
        code = 4;
    } else if (a16 == 4) {
        p = &data_021413e0;
        func_02087874(p, 0x20);
        if (func_020862c8(g->f44, r5, p) == 1) {
            return;
        }
        code = 3;
    }

cleanup:
    g->f0 = 0;
    g->f40 = 0;
    if (g->f4 != 0) {
        void (*cb)(uint32_t, void *) = g->f4;
        g->f4 = 0;
        cb(code, g->f8);
    }
    func_02087058(&data_02141450);
}
