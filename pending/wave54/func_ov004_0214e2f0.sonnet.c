/* cflags: -lang c++ */
#include "ffc/types.h"

struct S2 { uint32_t a, b; };
extern "C" uint32_t func_ov004_0215311c(void *obj);
extern "C" void func_02021b48(uint32_t v, uint32_t n);
extern "C" void func_02021338(uint32_t n);
extern "C" void func_02056c4c(void *o);
extern "C" uint32_t func_01ffe5a4(void *o, uint32_t a, uint32_t b, uint32_t c, int32_t d);
extern "C" void *func_02056dd4(void *o);
extern "C" void *func_02061094(void *o, uint32_t a, uint32_t b, uint32_t c);
extern "C" void *func_0203b6fc(void);
extern "C" void func_02056bc0(void *o, void *n);
extern "C" void func_02060548(void *o, uint32_t n);
extern "C" void func_02060564(void *o, uint32_t a, uint32_t b);
extern "C" void func_02060574(void *o, uint32_t v);
extern "C" void func_02060584(void *o, uint32_t v);
extern "C" void func_01ffdd50(S2 *out, uint32_t v);
extern "C" void func_01ffdc1c(void *o, S2 v, uint32_t c);
extern "C" void func_01ffcfc0(uint32_t v);
extern "C" uint32_t data_0209e088;
extern "C" S2 data_ov004_0215967c;

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int idv(const Num &a) { return a.v; }
inline int inv(const Num &a) { return ~a.v; }
extern "C" void func_ov004_0214e2f0(uint8_t *p)
{
    S2 tmp;
    uint8_t *obj;
    void *o;
    void *r4;
    void *r7;
    uint32_t t;
    void *obj88;

    func_02021b48(func_ov004_0215311c(*(void **)(p + 0x88)), 0xb);
    obj = *(uint8_t **)(p + 0xa8);
    if (obj != 0) {
        func_02021338(0x7d);
        func_02056c4c(*(void **)(obj + 0x94));
        t = func_01ffe5a4(*(void **)(obj + 0x88), 0x1b33, 0x1000, 0x2d, inv(Num(0)));
        o = func_02056dd4(obj);
        r4 = func_02061094(*(void **)((char *)o + 0x24), 0x3c, 0, 0);
        r7 = func_0203b6fc();
        func_02056bc0(r7, r4);
        func_02056bc0(r7, (void *)t);
        func_02056bc0(*(void **)(obj + 0x94), r7);
        obj88 = *(void **)(obj + 0x88);
        (*(void (**)(void *))((char *)*(void **)obj88 + 0x28))(obj88);
        obj88 = *(void **)(obj + 0x88);
        (*(void (**)(void *, uint32_t))((char *)*(void **)obj88 + 0x20))(obj88, 2);
        o = func_02056dd4(obj);
        r4 = *(void **)((char *)o + 0x20);
        func_02060548(r4, 1);
        func_02060564(r4, 0x10, 0x10);
        obj88 = *(void **)(obj + 0x88);
        func_02060574(r4, (*(uint32_t (**)(void *))((char *)*(void **)obj88 + 0x34))(obj88));
        func_02060584(r4, 0x2f);
        *(uint32_t *)(obj + 0x8c) = data_0209e088;
        *(S2 *)(obj + 0x80) = data_ov004_0215967c;
        obj[0x90] = idv(Num(0));
    }
    if (*(void **)(p + 0x94) != 0) {
        func_01ffdd50(&tmp, *(uint32_t *)(p + 0x90));
        func_01ffdc1c(*(void **)(p + 0x94), tmp, 1);
    }
    func_01ffcfc0(*(uint32_t *)(p + 0x90));
}
