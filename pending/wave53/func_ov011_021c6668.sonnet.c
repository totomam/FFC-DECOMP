/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_0203be8c(void);
extern "C" void func_0203bea0(void);
extern "C" void func_0203bf04(int a, int b, int c, int d);
extern "C" void func_0203c354(void);
extern "C" void func_0203c270(void);
extern "C" void func_0203bed8(int a, int b, int c, int d, int e, int f);
extern "C" void func_0204f550(uint32_t v);
extern "C" uint32_t func_0203c2e4(void);
extern "C" void func_0205947c(uint32_t r0, int v);
extern "C" void func_020591f4(uint32_t r0, int v);
extern "C" void func_0203c33c(void);
extern "C" void func_0203c264(void);
extern "C" void func_0203c36c(void);
extern "C" void func_0203c394(void);
extern "C" void *func_0203b9b4(int v);
extern "C" void func_02057958(void);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" void *func_02056aec(void *obj);
typedef struct { uint32_t a, b; } P;
extern "C" void *func_ov011_021c6754(void *obj, P p);
extern "C" void *func_0205681c(uint32_t size);
extern "C" void *func_ov011_021c5fdc(void *obj, void *p, uint32_t a, uint8_t b);
extern "C" void *func_0203b720(void);

extern "C" uint32_t data_0213df18;
extern "C" uint32_t data_ov011_021cb8bc[];

struct V { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual uint32_t f(int); };

extern "C" void func_ov011_021c6668(void *a0)
{
    uint8_t *s = (uint8_t *)a0;
    uint8_t *t;
    uint32_t *d;
    uint32_t x;
    uint32_t y;
    void *obj;
    void *r7;
    void *r6;
    void *r4;
    void *b;

    func_0203be8c();
    func_0203bea0();
    func_0203bf04(5, 4, 0, 0);
    func_0203c354();
    func_0203c270();
    func_0203bed8(5, 1, 3, 0, 1, 1);
    func_0204f550(data_0213df18);
    func_0205947c(func_0203c2e4(), 1);
    func_020591f4(func_0203c2e4(), 0);
    func_0203c33c();
    func_0203c264();
    func_0203c36c();
    func_0203c394();

    obj = func_0203b9b4(1);
    func_02057958();
    *(uint32_t *)(s + 0x80) = ((V *)obj)->f(0);
    func_02056bc0(s + 0x48, obj);

    r6 = func_02056aec(a0);
    r7 = func_ov011_021c6754(a0, *(P *)data_ov011_021cb8bc);

    r4 = func_0205681c(0xe8);
    if (r4 != 0) {
        r4 = func_ov011_021c5fdc(r4, s + 0x88, *(uint32_t *)(s + 0x80), *(uint8_t *)(s + 0x84));
    }

    b = func_0203b720();
    t = s + 0x14;

    func_02056bc0(t, b);
    func_02056bc0(t, r4);
    func_02056bc0(t, r7);
    func_02056bc0(t, r6);
}
