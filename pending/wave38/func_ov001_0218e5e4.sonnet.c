/* cflags: -lang c++ */
#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;
struct Obj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual uint32_t v6(); };
extern "C" {
uint32_t func_ov001_0218de10(void);
void func_02056bc0(void *object, uint32_t node);
void func_ov001_0218e3b4(void *obj, uint32_t x);
uint32_t func_02056aec(void *obj);
uint32_t func_020763c4(void *q, S s);
extern uint8_t **data_020b8e44;
extern S data_ov001_021949ec;

void func_ov001_0218e5e4(Obj *a)
{
    uint32_t r4, r6, r1;
    if (*(uint32_t *)(*data_020b8e44 + 0x88) == 0) return;
    func_02056bc0((uint8_t *)a + 0x14, func_ov001_0218de10());
    func_ov001_0218e3b4(a, 0);
    r4 = func_02056aec(a);
    r6 = func_020763c4(*data_020b8e44, data_ov001_021949ec);
    r1 = a->v6();
    uint8_t *p = (uint8_t *)a + 0x14;
    func_02056bc0(p, r1);
    func_02056bc0(p, r6);
    func_02056bc0(p, r4);
}
}
