/* cflags: -lang c++ */
#include "ffc/types.h"
struct V { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void *f(int); };


extern "C" void func_02056c9c(void *obj, int x);
extern "C" void *func_0203b6f0(void);
extern "C" V *func_0203b9b4(int x);
extern "C" void func_02057958(void *x);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" char data_ov009_021afd4c[];

extern "C" void *func_ov009_0219a7b0(void *p)
{
    uint8_t *o = (uint8_t *)p;
    uint8_t *q;
    V *v;
    int zero = 0;

    func_02056c9c(p, 0);
    *(void **)o = data_ov009_021afd4c;
    *(int16_t *)(o + 0xac) = -1;
    *(int16_t *)(o + 0xae) = -1;
    *(int16_t *)(o + 0xb0) = 0;
    *(void **)(o + 0x80) = func_0203b6f0();
    q = o + 0x88;
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    q[3] = 0;
    q[4] = 0;
    q[5] = 0;
    q[6] = 0;
    q[7] = 0;
    q[8] = 0;
    q[9] = 0;
    q[10] = 0;
    q[11] = 0;
    v = func_0203b9b4(1);
    func_02057958(v);
    {
        *(void **)(o + 0x84) = v->f(0);
    }
    func_02056bc0(o + 0x48, v);
    func_02056bc0(o + 0x48, *(void **)(o + 0x80));
    return p;
}
