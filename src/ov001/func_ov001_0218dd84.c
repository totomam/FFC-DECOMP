/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_0208763c(void *p);
extern "C" void func_02087678(void *p);
extern "C" void func_ov001_0218dd84(void *s);
struct E { uint8_t pad[0x12]; uint8_t f; uint8_t pad2; uint32_t v; uint8_t pad3[4]; uint8_t q[1]; };
struct S {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5();
    uint8_t pad[0x80]; uint32_t cnt; E *e[4];
};
void func_ov001_0218dd84(void *sv)
{
    S *self = (S*)sv;
    int i = 0; volatile int t[2]; (void)t;
    self->cnt = 0;
    self->v4();
    for (; i < 4; i++) {
        E *p;
        int f, done; uint8_t *q;
        if (i == 3) continue;
        p = self->e[i];
        f = p->f; q = p->q;
        if (f) func_0208763c(q);
        done = p->v == 0;
        if (f) func_02087678(q);
        if (!done) goto end;
    }
    self->v5();
end:
    return;
}
