#include "ffc/types.h"

typedef struct {
    uint8_t a;
    uint8_t p[3];
    uint8_t b;
    uint8_t q[3];
} Arg;

extern void func_ov002_021c90a0(void *p);
extern void func_ov002_021a619c(void *a, uint32_t b, uint32_t c, uint32_t d, void *e);
extern void func_ov002_021a6414(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_0209d02c(void *p, int n, int size, void (*dtor)(void));
extern void func_ov002_021c9054(void);

void func_ov002_021a5f2c(void *a, uint32_t b, uint32_t *c, uint32_t d, Arg t)
{
    struct { uint8_t buf[4][0x30]; volatile Arg tmp; } L;

    func_ov002_021c90a0(L.buf);
    L.tmp.b = t.b;
    func_ov002_021a619c(a, c[1], c[2], d, L.buf);
    func_ov002_021a6414(a, L.buf, b, c[0], c[1], t.a, d);
    func_0209d02c(L.buf, 4, 0x30, func_ov002_021c9054);
}
