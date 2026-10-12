/* cflags: -lang c++ */
#include "ffc/types.h"
struct Pair { uint32_t a; uint32_t b; };
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void v3(Pair p);
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9();
    virtual void v10();
    virtual void v11(); virtual void v12(); virtual void v13();
    virtual void v14(uint32_t a, uint32_t b);
};
extern "C" {
extern uint32_t func_02021338(uint32_t x);
extern void func_02056c4c(uint32_t x);
extern Obj *func_0203b95c(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_020aaddc[];
void func_02009c34(uint8_t *self, Pair p, uint32_t n);
}
void func_02009c34(uint8_t *self, Pair p, uint32_t n)
{
    func_02021338(0xdd);
    func_02056c4c(*(uint32_t *)(self + 0x9c));
    Obj *obj = func_0203b95c(*(void **)(data_020aaddc + 0xc), *(uint32_t *)(self + 0xa0), 0, 1);
    obj->v3(p);
    obj->v14(n + 1, 0);
    obj->v10();
    func_02056bc0(*(void **)(self + 0x9c), obj);
}
