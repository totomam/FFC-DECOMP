/* cflags: -nothumb -lang c++ */
#include "ffc/types.h"
extern "C" {
extern uint32_t data_0213df20;
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
}
struct Sub { virtual void v0(); virtual void v1(); virtual void v2(); int x; int y; int32_t f; };
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    uint8_t pad04[0x10];
    Sub s1;           // 0x14, f at 0x20
    uint8_t b24[2];
    uint8_t b26;
    uint8_t b27;
    uint32_t w28;
    uint8_t b2c[4];
    uint8_t sub30[0x18];
    Sub s2;           // 0x48, f at 0x54
    uint8_t b58[0x24];
    uint32_t w7c;
};
struct Guard { uint32_t saved; Guard(uint32_t n):saved(data_0213df20){data_0213df20=n;} ~Guard(){data_0213df20=saved;} };
struct Lock { uint8_t on; void *p; Lock(int o, void *q):on(o),p(q){ if(on) func_0208763c(p);} ~Lock(){ if(on) func_02087678(p);} };
extern "C" void func_01ff8be8(Obj *self)
{
    Guard gd(self->w7c);
    int r7;
    {
        Lock lk((int)self->b26<<24>>24, self->sub30);
        r7 = (self->w28 == 0);
    }
    if (r7) self->v3();
    if ((int8_t)self->s1.f == 0) self->s1.v2();
    if ((int8_t)self->s2.f == 0) self->s2.v2();
}
