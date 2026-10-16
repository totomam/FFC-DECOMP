/* cflags: -noO4,p -O4 -lang c++ */
#include "ffc/types.h"
extern "C" {
extern uint8_t data_020b35bc[], data_020b3270[], data_020b374c[], data_020b377c[];
extern uint32_t func_02092864(const uint8_t *text);
extern void *func_02056830(uint32_t n);
struct B { uint8_t c; };
extern void func_02097054(void *out, void *p, B c);
extern void func_02092878(void *a, const uint8_t *b);
extern void func_0209d245_unk(void *a, void *b, void *c);
extern void func_0209805c(void);
extern void func_020977fc(void *p);
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int mul(int b, const Num &a) { return b * a.v; }
void func_0209776c(uint8_t *p, uint32_t a);
void func_0209776c(uint8_t *p, uint32_t a)
{
    *(void **)p = data_020b35bc;
    p[0x26] = 0;
    p[0x27] = 0;
    *(uint32_t *)(p + 4) = 0;
    *(uint32_t *)(p + 8) = 0;
    *(uint32_t *)(p + 0xc) = 0;
    *(uint32_t *)(p + 0x10) = 0;
    *(uint32_t *)(p + 0x14) = 0;
    *(uint32_t *)(p + 0x18) = 0;
    *(uint32_t *)(p + 0x1c) = a;
    p[0x28] = 0;
    if (a == 0) {
        uint8_t *q = data_020b3270;
        uint8_t *out[1];
        uint8_t *const *pq = &q;
        B b;
        void *m = func_02056830(mul(func_02092864(data_020b374c) + 1, Num(1)));
        b.c = 0;
        func_02097054(out, m, b);
        func_02092878(out[0], data_020b374c);
        func_0209d245_unk(data_020b377c, (void*)pq, (void*)func_0209805c);
    }
    func_020977fc(p);
}
}
