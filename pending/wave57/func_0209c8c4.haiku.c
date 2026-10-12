#include "ffc/types.h"

typedef struct { uint32_t w[6]; } A6;
typedef struct { uint32_t w[7]; } H7;
typedef struct { uint32_t w[21]; } B21;
typedef struct { uint32_t x; A6 a; H7 h; B21 c; } Local;

extern int func_0209c0fc(void *p);
extern int func_0209c114(void *p);
extern void func_0209bf7c(uint32_t v, void *out);

uint32_t func_0209c8c4(uint32_t *out, uint32_t *in) {
    Local L;
    uint32_t st;
    uint8_t *p;

    L.a.w[0] = in[0];
    L.a.w[1] = in[1];
    L.a.w[2] = in[2];
    L.a.w[3] = in[3];
    L.a.w[4] = in[4];
    L.a.w[5] = in[5];
    L.h.w[0] = out[0];
    L.h.w[1] = out[1];
    L.h.w[2] = out[2];
    L.h.w[3] = out[3];
    L.h.w[4] = out[4];
    L.h.w[5] = out[5];
    L.h.w[6] = out[6];
    L.c = *(B21 *)(out + 7);

    st = func_0209c0fc(&L.a);
    for (;;) {
        switch (st) {
        case 1:
        case 14:
            return 0;
        case 0:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 15:
        case 16:
        case 17:
        case 18:
            st = func_0209c114(&L.a);
            continue;
        case 13:
            func_0209bf7c(L.a.w[2] + 1, &L.x);
            p = (uint8_t *)L.h.w[6] + L.x;
            out[0] = *(uint32_t *)(p + 4);
            out[1] = *(uint32_t *)p;
            out[2] = 0;
            out[3] = (uint32_t)p;
            return (uint32_t)p;
        default:
            return 0;
        }
    }
}
