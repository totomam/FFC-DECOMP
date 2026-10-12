/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
typedef struct O O;
struct O {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
  virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
  virtual void v10(); virtual void v11(); virtual void v12();
  virtual int v13(); virtual void *v14(); virtual int v15();
  virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(void *);
};

extern "C" void func_ov001_0218def8(void *obj, uint32_t a);
extern "C" void *func_ov001_0218b160(void *obj, S s);
extern "C" void *func_ov001_0218de3c(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" void func_020559d4(void *p);
extern "C" void *func_0205681c(uint32_t size);
extern "C" S data_ov001_02194680;
extern "C" S data_ov001_02194688;
extern "C" S data_ov001_02194690;
extern "C" S data_ov001_02194698;
extern "C" char data_020ac6b8[];

typedef struct {
    void *vt; uint32_t pad; uint32_t f8; uint32_t fc; uint32_t f10; uint8_t f14;
} Node;

extern "C" void func_ov001_0218b01c(O *obj)
{
    uint32_t r6;
    void *t, *q;
    Node *n;

    if (obj->v15() != 0) {
        r6 = 0;
        func_ov001_0218def8(obj, 0);
        t = func_ov001_0218b160(obj, data_ov001_02194680);
        q = func_ov001_0218de3c(obj, 0x8d, 2, 0, r6);
        obj = (O *)((uint8_t *)obj + 0x14);
        func_02056bc0(obj, q);
        func_02056bc0(obj, t);
        return;
    }
    if (obj->v13() != 0) {
        { uint32_t x = data_ov001_02194688.a, y = data_ov001_02194688.b; *(uint32_t *)((uint8_t *)obj + 0xf4) = x; *(uint32_t *)((uint8_t *)obj + 0xf8) = y; }
        return;
    }
    func_020559d4((uint8_t *)obj + 0xb0);
    if (((uint8_t *)obj)[0x107] == 0) return;
    if (((uint8_t *)obj)[0x3df] == 0) return;
    if (((uint8_t *)obj)[0x108] != 0 && ((uint8_t *)obj)[0x3e0] != 0) {
        r6 = 0;
        func_ov001_0218def8(obj, 0);
        n = (Node *)func_0205681c(0x18);
        if (n != 0) {
            if (*(uint32_t *)((uint8_t *)obj + 0x6c4) != 0) r6 = 1;
            t = obj->v14();
            n->f8 = 0;
            n->fc = 0x100b2;
            n->vt = data_020ac6b8;
            n->f10 = (uint32_t)t;
            n->f14 = (uint8_t)r6;
        }
        obj->v19(n);
        { uint32_t x = data_ov001_02194690.a, y = data_ov001_02194690.b; *(uint32_t *)((uint8_t *)obj + 0xf4) = x; *(uint32_t *)((uint8_t *)obj + 0xf8) = y; }
    } else {
        r6 = 0;
        func_ov001_0218def8(obj, 0);
        t = func_ov001_0218b160(obj, data_ov001_02194698);
        q = func_ov001_0218de3c(obj, 0x8d, 2, 0, r6);
        obj = (O *)((uint8_t *)obj + 0x14);
        func_02056bc0(obj, q);
        func_02056bc0(obj, t);
    }
}
