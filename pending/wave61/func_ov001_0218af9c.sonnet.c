/* cflags: -lang c++ */
#include "ffc/types.h"
struct Pair { uint32_t a, b; };
struct Node { uint32_t vt; uint32_t pad; uint32_t f8, fc, f10; uint8_t f14; };
struct Base {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual uint32_t v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(Node*);
    virtual void v20(); virtual void v21(); virtual void v22();
    uint8_t pad[0x6c4 - 4];
    uint32_t f6c4;
};
extern "C" {
extern void func_02037550(void *p);
extern void *func_0205681c(int n);
extern void func_ov001_0218de64(void *p, int a, int b, int c);
extern uint32_t data_020ac6b8;
extern Pair data_ov001_02194678;
void func_ov001_0218af9c(Base *self)
{
    func_02037550(self);
    if (self->f6c4 == 0) { self->v22(); return; }
    Node *n = (Node*)func_0205681c(0x18);
    if (n) {
        uint8_t flag = self->f6c4 != 0;
        uint32_t r = self->v14();
        n->f8 = 0; n->fc = 0x100b2; n->vt = (uint32_t)&data_020ac6b8; n->f10 = r; n->f14 = flag;
    }
    self->v19(n);
    func_ov001_0218de64(self, 4, 1, 0);
    uint32_t a = data_ov001_02194678.a; uint32_t b = data_ov001_02194678.b;
    uint32_t *p = (uint32_t*)((uint8_t*)self + 0xf4);
    uint32_t *q = (uint32_t*)((uint8_t*)self + 0xf8);
    *p = a; *q = b;
}
}
