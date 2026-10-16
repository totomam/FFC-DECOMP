#include "ffc/types.h"
typedef struct { int32_t x, y; } P;
typedef struct { int32_t a, b; P p1; P p2; } R;
extern int32_t func_0209a978(int32_t);
extern void *func_02062a78(void *o, P a, P b);
extern void func_02056bc0(void *object, void *node);
typedef void (*Fn)(void*, ...);
void func_ov004_02148f38(uint8_t *self) {
    void *p = *(void**)(self + 0xa0);
    (*(Fn**)p)[14](p, 1, 0);
    p = *(void**)(self + 0xa0);
    (*(Fn**)p)[10](p);
    int32_t x = 0x80;
    int32_t k = 100;
    int32_t v = k - *(int32_t*)(self + 0x84);
    R s;
    s.p1.x = x;
    int32_t r = func_0209a978(v * k);
    s.p2.y = 0x92;
    s.a = 0x5a; s.b = -1;
    s.p2.x = x;
    s.p1.y = r + 0x2e;
    void *n = func_02062a78(*(void**)(self + 0xa0), s.p2, s.p1);
    func_02056bc0(self + 0x14, n);
}
