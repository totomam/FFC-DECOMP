#include "ffc/types.h"

typedef struct { uint32_t w[6]; } H;
typedef struct { uint32_t w[7]; } S7;
typedef struct { uint32_t w[21]; } S21;
typedef struct { S7 s; S21 t; } A;
typedef struct { H h; S7 s; S21 t; } Loc;

extern int func_0209c0fc(void *p);
extern uint8_t *func_0209bfdc(uint8_t *in, void *out);
extern uint32_t func_0209bf7c(uint8_t *in, void *out);
extern int func_0209cd1c(uint32_t a, uint32_t v, uint32_t c);
extern int func_0209c980(uint32_t a, void *t);
extern void func_0209ca50(void *a, void *b, void *t, uint32_t p);
extern void func_0209cce4(void);
extern int func_0209c114(void *p);

uint32_t func_0209ca84(A *a, H *b, uint32_t c) {
    Loc loc;
    uint32_t tmp[7];
    uint8_t *p;
    int st;

    loc.h.w[0] = b->w[0];
    loc.h.w[1] = b->w[1];
    loc.h.w[2] = b->w[2];
    loc.h.w[3] = b->w[3];
    loc.h.w[4] = b->w[4];
    loc.h.w[5] = b->w[5];
    loc.s.w[0] = a->s.w[0];
    loc.s.w[1] = a->s.w[1];
    loc.s.w[2] = a->s.w[2];
    loc.s.w[3] = a->s.w[3];
    loc.s.w[4] = a->s.w[4];
    loc.s.w[5] = a->s.w[5];
    loc.s.w[6] = a->s.w[6];
    loc.t = a->t;

    st = func_0209c0fc(&loc);
    for (;;) {
        if ((uint32_t)st > 0x13 || st == 1 || st == 14) {
            func_0209cce4();
            break;
        }
        if (st == 12) {
            p = (uint8_t *)loc.h.w[2];
            tmp[4] = p[1] | ((uint32_t)p[2] << 8) | ((uint32_t)p[3] << 16) | ((uint32_t)p[4] << 24);
            p = func_0209bfdc(p + 5, &tmp[5]);
            func_0209bf7c(p, &tmp[6]);
            if (func_0209cd1c(a->s.w[0], tmp[4], c) != 0) {
                break;
            }
        } else if (st == 15) {
            p = (uint8_t *)loc.h.w[2];
            p = func_0209bfdc(p + 1, &tmp[0]);
            p = func_0209bfdc(p, &tmp[1]);
            tmp[3] = func_0209bf7c(p, &tmp[2]);
            if (func_0209c980(a->s.w[0], &tmp[0]) == 0) {
                func_0209ca50(a, b, &tmp[0], loc.h.w[2]);
            }
        }
        st = func_0209c114(&loc);
    }
    return loc.h.w[2];
}
