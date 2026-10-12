/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct S2 {
    uint32_t a;
    uint32_t b;
} S2;

struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    uint32_t a;
    uint32_t b;
    uint32_t f12;
};

extern "C" void *func_0205681c(uint32_t size);
extern "C" void func_020095b8(void *dst, void *src);
extern "C" void *func_02039420(void *p);
extern "C" void *func_0200b8bc(void *a, uint32_t b, uint32_t c, uint32_t d, void *e);
extern "C" void func_020059cc(void *object);
extern "C" void *func_020660b0(void *p, S2 s);
extern "C" void *func_0203b884(void *a, void *b, S2 s, uint32_t f);
extern "C" void *func_02035298(void *a, void *b, uint32_t c, uint32_t d);
extern "C" void func_020686d0(void *a, void *b);
extern "C" void func_020686e8(void *a, void *b);
extern "C" void func_020685ac(void *a, void *b);
extern "C" void func_02020f40(void *a, void *b, uint32_t c, uint32_t d);
extern "C" void func_02020ec4(void *a, uint32_t b, void *c);
extern "C" void func_02020ff8(void *a, void *b, uint32_t c, void *d);
extern "C" S2 data_020ad5bc;

extern "C" void func_02021028(void *r0, void *r1, uint32_t r2, uint32_t r3)
{
    void *self = r0;
    void *r4;
    Obj *r5;
    void *tmp;
    struct { uint32_t z; S2 t10; uint32_t sp18[2], sp20[2], sp28[2], sp30[2]; uint32_t pad; uint32_t t3c[3]; } F;
    uint32_t flag = 0;
#define t3c F.t3c
#define t10 F.t10
#define sp18 F.sp18
#define sp20 F.sp20
#define sp28 F.sp28
#define sp30 F.sp30
    r4 = func_0205681c(0x28);
    if (r4 != 0) {
        func_020095b8(t3c, r1);
        flag = 1;
        tmp = func_02039420(t3c);
        r4 = func_0200b8bc(r4, 0, 1, 0, tmp);
    }
    if (flag) {
        func_020059cc(t3c);
        flag = 0;
    }
    tmp = func_0205681c(0x2c);
    if (tmp != 0) {
        t10.a = 0xd8;
        t10.b = 0xc0;
        tmp = func_020660b0(tmp, t10);
    }
    r5 = (Obj *)func_0203b884(tmp, r4, data_020ad5bc, flag);
    tmp = func_0205681c(0x20);
    if (tmp != 0) {
        tmp = func_02035298(tmp, r4, 0, 0);
    }
    func_020686d0(r5, tmp);
    func_020095b8(sp30, r1);
    func_020686e8(r5, sp30);
    func_020059cc(sp30);
    if ((int8_t)r5->f12 == 0) {
        r5->v2();
    }
    func_020685ac(sp28, r5);
    if (r5 != 0) {
        if (r5 != 0) {
            r5->v1();
        }
    }
    func_02020f40(sp20, sp28, 0, 0);
    func_02020ec4(sp18, r3, sp20);
    func_02020ff8(self, sp20, r2, sp18);
}
