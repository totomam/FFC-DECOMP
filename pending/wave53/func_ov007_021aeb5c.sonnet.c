/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_02056c9c(void *obj, uint32_t x);
extern "C" uint32_t func_02015a38(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern "C" uint32_t func_020159f8(uint32_t a);
typedef struct { uint32_t a; uint32_t b; } S;
extern "C" uint32_t func_0203b9cc(S s, uint32_t c, uint32_t d);
extern "C" void *func_0203b878(uint32_t a, uint32_t b);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" uint32_t func_02091b10(void *object, uint32_t first, ...);
extern "C" void func_02005988(void *a, void *b);
extern "C" void func_02068ddc(void *a, void *b);
extern "C" void *func_020059cc(void *object);
extern "C" char data_ov007_021c559c[];
extern "C" uint32_t data_020b8e44;
extern "C" S data_ov007_021c5540[];
extern "C" char data_ov007_021c5660[];


struct O { virtual void v0(); virtual void v1(); virtual void v2(); virtual void f3(S); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void f8(uint32_t); virtual void v9(); virtual void f10(); };

extern "C" void *func_ov007_021aeb5c(void *obj, uint32_t *arr)
{
    int i;
    uint32_t h;
    void *p48;
    uint32_t v;
    uint32_t w[3];
    S t;
    void *n;
    char *q;

    func_02056c9c(obj, 0);
    *(char **)obj = data_ov007_021c559c;
    h = func_02015a38(data_020b8e44, 0, 1, 0);
    p48 = obj;
    for (i = 0; i < 5; i++) {
        q = (char *)arr + i * 4;
        if (*(uint32_t *)(q + 0x144) != 0) {
            t.a = 0x10;
            t.b = 0x10;
            n = func_0203b878(func_0203b9cc(t, func_020159f8(data_020b8e44), 1), h);
            func_02056bc0((char *)p48 + 0x48, n);
            ((O*)n)->f3( data_ov007_021c5540[i]);
            ((O*)n)->f8( 2);
            ((O*)n)->f10();
            func_02091b10(&v, (uint32_t)data_ov007_021c5660, *(uint32_t *)(q + 0x144));
            func_02005988(w, &v);
            func_02068ddc(n, w);
            func_020059cc(w);
        }
    }
    return obj;
}
