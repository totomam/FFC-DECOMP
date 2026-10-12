/* cflags: -lang c++ */
#include "ffc/types.h"
struct V;

extern "C" uint32_t func_02056aec(void *p);
extern "C" uint32_t func_0203c250(void);
extern "C" uint32_t func_02061094(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern "C" uint32_t func_0203c23c(void);
extern "C" uint32_t func_0203b6fc(void);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" uint32_t func_ov001_0218de3c(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern "C" uint32_t func_ov001_0218de10(void *p);
extern "C" uint32_t func_0203c2d0(void);
extern "C" uint32_t func_02060610(uint32_t x);
extern "C" uint32_t func_0203c2bc(void);
extern "C" uint32_t func_02061128(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern "C" void func_02075ac8(uint32_t v, uint32_t x);
extern "C" uint32_t data_020b8e44;

struct V { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual uint32_t f6(); };

extern "C" void func_ov001_0218bcd0(uint8_t *p)
{
    uint32_t v4, v8, v0c, v10, v14, v18, v1c;
    uint32_t r4, r6, r7, q;
    int st;

    st = *(int *)(p + 0xf0);
    if (st == 0) goto main_path;
    if (st == 1) goto check;
    if (st != 2) goto main_path;
    return;

main_path:
    v4 = func_02056aec(p);
    v8 = ((V *)p)->f6();

    r6 = func_02061094(func_0203c250(), 0x10, 0, 0);
    r4 = func_02061094(func_0203c23c(), 0x10, 0, 0);
    r7 = func_0203b6fc();
    func_02056bc0((void *)r7, (void *)r4);
    func_02056bc0((void *)r7, (void *)r6);

    v0c = func_ov001_0218de3c(p, 0x13f, 2, 0, 0);
    v10 = func_ov001_0218de10(p);
    v14 = func_02060610(func_0203c2d0());
    v18 = func_02060610(func_0203c2bc());

    v1c = func_02061128(func_0203c250(), 0x10, 0, 0);
    r4 = func_02061128(func_0203c23c(), 0x10, 0, 0);
    r6 = func_0203b6fc();
    func_02056bc0((void *)r6, (void *)r4);
    func_02056bc0((void *)r6, (void *)v1c);

    q = (uint32_t)(p + 0x14);
    func_02056bc0((void *)q, (void *)r6);
    func_02056bc0((void *)q, (void *)v18);
    func_02056bc0((void *)q, (void *)v14);
    func_02056bc0((void *)q, (void *)v10);
    func_02056bc0((void *)q, (void *)v0c);
    func_02056bc0((void *)q, (void *)r7);
    func_02056bc0((void *)q, (void *)v8);
    func_02056bc0((void *)q, (void *)v4);
    return;

check:
    {
        uint32_t *h = *(uint32_t **)data_020b8e44;
        if (h[0x88 / 4] != 0) {
            func_02075ac8(h[0x88 / 4], 1);
        }
    }
}
