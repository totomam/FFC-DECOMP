#include "ffc/types.h"
typedef struct { int32_t x, y; } P;
typedef struct { P s; P o; } Q;
extern int32_t func_ov004_02153114(int32_t);
extern int32_t func_ov004_02153514(int32_t);
extern void func_ov004_0214e830(P*, int32_t, int32_t);
extern int32_t func_0209a76c(int32_t, int32_t);
extern int32_t data_ov004_0215872c[];
typedef void (*Fn)(void*, P);
void func_ov004_021499c0(uint8_t *self) {
    Q q; P *p;
    int32_t a = func_ov004_02153114(*(int32_t*)(self + 0x80));
    int32_t b = func_ov004_02153514(*(int32_t*)(self + 0x80));
    int32_t t;
    p = &q.s;
    func_ov004_0214e830(p, a, b);
    t = p->y << 5;
    p[1].x = data_ov004_0215872c[2] + func_0209a76c(p->x << 5, 0x300);
    p[1].y = data_ov004_0215872c[3] + func_0209a76c(t, 0x300);
    {
        void *obj = *(void**)(self + 0x84);
        (*(Fn**)obj)[3](obj, p[1]);
    }
}
