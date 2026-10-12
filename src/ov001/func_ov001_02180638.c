#include "ffc/types.h"

typedef struct Obj {
    uint32_t pad0[3];
    int32_t f0c;
    uint32_t pad1[2];
    int32_t f18;
    uint32_t f1c;
    uint32_t f20;
    int32_t f24;
} Obj;

extern int func_ov001_02182214(uint32_t x, uint32_t *a, uint16_t *b);
extern int func_ov001_02180298(void *a, Obj **out, uint32_t v, uint32_t mip);
extern int func_ov001_021802d0(Obj *o, uint32_t p, uint32_t a5, uint32_t a7);
extern void func_ov001_02181f60(Obj *o);
extern void func_ov001_02180600(void *a);
extern void func_ov000_02165938(int x);

int func_ov001_02180638(void *a, Obj **p1, uint32_t x, uint32_t p3, uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8)
{
    Obj *S;
    uint16_t mip;
    uint32_t v;
    int r;
    int done;
    uint32_t b;

    if (!func_ov001_02182214(x, &v, &mip) || v == 0 || mip == 0) {
        return 4;
    }
    b = (uint8_t)(v >> 24) | ((v >> 8) & 0x0000ff00u) | ((v << 8) & 0x00ff0000u) | ((v << 24) & 0xff000000u);
    if ((b & 0xE0000000u) == 0xE0000000u) {
        return 4;
    }
    r = func_ov001_02180298(a, &S, v, mip);
    if (r != 0) {
        return r;
    }
    S->f20 = a6;
    r = func_ov001_021802d0(S, p3, a5, a7);
    if (r != 0) {
        func_ov001_02181f60(S);
        return r;
    }
    if (a8 == 0) {
        if (p1) {
            *p1 = S;
        }
        return 0;
    }
    S->f24++;
    done = 0;
    do {
        func_ov001_02180600(a);
        done = S->f0c >= 5;
        if (!done) {
            func_ov000_02165938(1);
        }
    } while (!done);
    S->f24--;
    if (S->f0c == 5) {
        *p1 = S;
    }
    return S->f18;
}
