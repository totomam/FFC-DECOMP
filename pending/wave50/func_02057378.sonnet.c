/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct S {
    void *vt;
    uint8_t r04[8];
    uint32_t w0c;
    uint8_t r10[3];
    uint8_t b13;
    uint8_t b14;
    uint8_t b15;
    uint8_t r16[6];
    int32_t w1c;
    int32_t w20;
    int32_t w24;
    uint8_t r28[4];
    int32_t w2c;
    int32_t w30;
    uint8_t r34[16];
    int32_t w44;
    int32_t w48;
    int32_t w4c;
    int32_t w50;
    int32_t w54;
    int32_t w58;
    int32_t w5c;
    int32_t w60;
    int32_t w64;
    int32_t w68;
    int32_t w6c;
    int32_t w70;
} S;

extern "C" {
extern int32_t func_0208f694(int32_t value);
extern int32_t func_0209a76c(int32_t a, int32_t b);
extern char data_020b0c7c[];
}
inline int32_t *mx(int32_t a, int32_t b) { return a < b ? &b : &a; }
inline int32_t *mq(int32_t *a, int32_t *b) { return *a < *b ? b : a; }

typedef struct { int32_t x, y, z, w; } R;
extern "C" S *func_02057378(S *p, R A, R B)
{
    p->w0c &= ~0xFFu;
    p->b13 = 0;
    p->b14 = 0;
    p->b15 = 0;
    p->w30 = 0;
    p->w1c = -1;
    p->w24 = -1;
    p->w2c = 1;
    p->vt = data_020b0c7c;
    p->w44 = A.x;
    p->w48 = A.y;
    p->w4c = A.z;
    p->w50 = A.w;
    p->w54 = B.x;
    p->w58 = B.y;
    p->w5c = B.z;
    p->w60 = B.w;

    int32_t x1 = func_0208f694(A.w - B.w);
    int32_t x2 = func_0208f694(A.z - B.z);
    int32_t *m1 = mx(x2, x1);
    int32_t y1 = func_0208f694(A.y - B.y);
    int32_t y2 = func_0208f694(A.x - B.x);
    int32_t *m2 = mx(y2, y1);
    int32_t *mq2 = mq(m2, m1);
    p->w1c = *mq2 + 1;
    p->w64 = func_0209a76c((B.x - A.x) << 16, p->w1c - 1);
    p->w68 = func_0209a76c((B.y - A.y) << 16, p->w1c - 1);
    p->w6c = func_0209a76c((B.z - A.z) << 16, p->w1c - 1);
    p->w70 = func_0209a76c((B.w - A.w) << 16, p->w1c - 1);
    return p;
}
