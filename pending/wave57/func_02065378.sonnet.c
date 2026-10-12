#include "ffc/types.h"

typedef struct { uint32_t a:8; uint32_t m:2; uint32_t p0:3; uint32_t f:1; uint32_t lo:2; uint32_t p1:14; uint32_t hi:2; uint32_t u[9]; } Ent;
typedef struct { int32_t s:8; uint32_t b:8; int32_t f:1; } Src;
typedef struct { uint32_t x0, x1, x2, x3, x4; } Ent2;
typedef struct { uint32_t w0, v, r8, oi, r10, r14, r18; } Slot;
typedef struct { uint32_t *list; } Qs;

extern Src *func_020635a0(char *a, uint32_t b, char *c);
extern void func_0205f210(uint32_t *a, uint32_t b);
extern void func_0205fa1c(uint32_t a, uint32_t *b, uint32_t c, uint32_t d, uint32_t e);
extern uint32_t data_020b11b4[];
extern uint32_t data_020b11b8[];

#define F(t,o) (*(t *)(p + o))

void func_02065378(char *p, uint32_t idx0, uint32_t value0)
{
    volatile uint32_t idx = idx0;
    uint32_t off = idx * 28;
    Slot *e = (Slot *)(F(char *, 0x60) + off);
    volatile uint32_t value;
    Ent *A = &F(Ent *, 0x24)[e->oi];
    char *q;
    value = value0;
    Src *r7;
    int32_t s;
    Ent *B;
    uint32_t r3, r5, r6, r0v;

    if (F(char **, 0x7c) != 0) {
        q = F(char **, 0x7c)[0] + idx * 12;
    } else {
        q = 0;
    }
    r7 = func_020635a0(p + 0x18, value, q);
    ((Slot *)(F(char *, 0x60) + off))->v = value;
    A->f = r7->f;

    if (F(uint32_t, 0x38) & 2) {
        func_0205f210((uint32_t *)A, F(uint32_t *, 0x70)[idx]);
        s = r7->s;
        A->lo = s;
        A->hi = s >> 2;
        if (A->m != 3) {
            A->u[5] = data_020b11b4[s * 2];
            A->u[6] = data_020b11b8[s * 2];
        } else {
            A->u[5] = data_020b11b4[s * 2] << 1;
            A->u[6] = data_020b11b8[s * 2] << 1;
        }
        func_0205fa1c(F(uint32_t *, 0x70)[idx], (uint32_t *)((char *)r7 + 4), 0, r7->b, 0);
    } else {
        func_0205f210((uint32_t *)A, F(uint32_t *, 0x70)[value]);
        s = r7->s;
        A->lo = s;
        A->hi = s >> 2;
        if (A->m != 3) {
            A->u[5] = data_020b11b4[s * 2];
            A->u[6] = data_020b11b8[s * 2];
        } else {
            A->u[5] = data_020b11b4[s * 2] << 1;
            A->u[6] = data_020b11b8[s * 2] << 1;
        }
    }

    e = (Slot *)(F(char *, 0x60) + off);
    B = &F(Ent *, 0x24)[e->oi];
    r5 = e->r18;
    r3 = e->r14;
    if (F(uint8_t, 0x2f) != 0 || F(uint8_t, 0x30) != 0) {
        uint32_t i2 = B->lo | (B->hi << 2);
        r6 = data_020b11b4[i2 * 2];
        r0v = data_020b11b8[i2 * 2];
        if (e->r8 == 3) {
            r6 <<= 1;
            r0v <<= 1;
        }
        if (F(uint8_t, 0x2f) != 0) r3 = r6 - r3;
        if (F(uint8_t, 0x30) != 0) r5 = r0v - r5;
    }
    B->u[0] = r3;
    B->u[1] = r5 + F(uint32_t, 0x54);
}
