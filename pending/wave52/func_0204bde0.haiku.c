#include "ffc/types.h"

typedef struct Ctx {
    uint32_t a[5];
    uint32_t f14;
    uint32_t b[3];
    void *f24;
} Ctx;

extern int func_0204b098(void);
extern int func_0204bd34(void *p, uint32_t a, uint32_t *out);
extern void *func_0204b07c(int a, int b);
extern void func_0204b6d8(void *p, void *buf, uint32_t x, int n);
extern int func_0204acb8(void *d, uint32_t a);
extern uint8_t data_020b0200[];

int func_0204bde0(void *self, uint32_t a1, void **a2) {
    Ctx *p = (Ctx *)self;
    int r;
    uint32_t local;
    void *buf;

    if (p->f14 == 0) {
        return -1;
    }
    if (p->f24 != 0) {
        func_0204b098();
        p->f24 = 0;
    }
    r = func_0204bd34(p, a1, &local);
    if (r >= 0) {
        buf = func_0204b07c(r + 1, 4);
        p->f24 = buf;
        if (buf == 0) {
            return -1;
        }
        ((uint8_t *)buf)[r] = 0;
        func_0204b6d8(p, p->f24, local, r);
        *a2 = p->f24;
        return r;
    }
    if (func_0204acb8(data_020b0200, a1) == 0) {
        buf = func_0204b07c(4, 4);
        p->f24 = buf;
        if (buf == 0) {
            return -1;
        }
        ((uint8_t *)buf)[3] = 0;
        func_0204b6d8(p, p->f24, 9, 3);
        *a2 = p->f24;
        return 3;
    }
    return -1;
}
