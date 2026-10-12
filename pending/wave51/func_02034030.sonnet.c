#include "ffc/types.h"

extern void func_020340d0(void *a, void *b, void *c, uint32_t d, uint32_t e);
extern uint8_t func_02033d44(void *a, void *b, void *c);
extern void func_02033ea4(void *dst, void *a, void *b);
extern void func_02033e8c(void *p);

typedef struct {
    uint32_t w[5];
    uint16_t h[8];
} Blob;

typedef struct {
    Blob x;
    uint8_t pad[0x24];
    uint8_t q[0x24];
    uint8_t r;
} A;
typedef struct { uint8_t pad[0x2c]; uint32_t f; } B;

void func_02034030(A *a, B *b, uint32_t c, uint32_t d)
{
    Blob t;

    func_020340d0(a, a->pad, b, c, *(volatile uint32_t *)&d);
    if (b->f != 0) {
        a->r = func_02033d44(a, b, a->q);
    }
    func_02033ea4(&t, a->pad, a->q);
    a->x.w[0] = t.w[0];
    a->x.w[1] = t.w[1];
    a->x.w[2] = t.w[2];
    a->x.w[3] = t.w[3];
    a->x.w[4] = t.w[4];
    a->x.h[0] = t.h[0];
    a->x.h[1] = t.h[1];
    a->x.h[2] = t.h[2];
    a->x.h[3] = t.h[3];
    a->x.h[4] = t.h[4];
    a->x.h[5] = t.h[5];
    a->x.h[6] = t.h[6];
    a->x.h[7] = t.h[7];
    func_02033e8c(&t);
}
