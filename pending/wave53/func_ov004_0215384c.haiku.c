/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern void func_02021b48(uint32_t a, uint32_t b);
extern void func_02056c4c(uint32_t a);
extern uint32_t func_ov004_02155248(void *obj, uint32_t b);
extern void func_02021338(uint32_t a);
extern void *func_0203b95c(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02064390(void *object, uint32_t first, uint32_t second);
extern void *func_0203b688(void);
extern uint32_t func_02056aec(void *obj);
extern uint32_t func_020655b8(void *obj);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov004_02153514(void *obj);
extern uint32_t func_0201c9ac(uint32_t a, uint32_t b);
extern void func_0201c220(uint32_t a, uint32_t b, uint32_t c);
extern void func_0201bf78(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_ov004_021596c4[];
extern uint32_t data_020b93b8;
}

class Obj {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14(uint32_t a, uint32_t b);
};

extern "C" void func_ov004_0215384c(uint32_t *self, uint32_t arg1)
{
    Obj *obj;
    void *h6;
    uint32_t n;
    uint32_t tmp;

    func_02021b48(self[61], 0x19);
    func_02056c4c(self[149]);
    func_02021338(func_ov004_02155248((void *)self, self[162]) ? 0xa6 : 0xa8);
    obj = (Obj *)func_0203b95c(data_ov004_021596c4[9], self[56], 0, 1);
    func_02064390(obj, 0x80, 0x60);
    obj->v14(2, 0);
    obj->v10();
    h6 = func_0203b688();
    n = func_02056aec(obj);
    func_02056bc0(h6, (void *)func_020655b8(obj));
    func_02056bc0(h6, (void *)n);
    tmp = self[149];
    func_02056bc0((void *)tmp, obj);
    func_02056bc0((void *)tmp, h6);

    if (arg1 == func_ov004_02153514((void *)self)) {
        uint32_t cnt = func_0201c9ac(data_020b93b8, 8);
        func_0201c220(data_020b93b8, 8, cnt - 1);
        if (cnt - 1 == 0) {
            func_0201bf78(data_020b93b8, 2, 0);
        }
    }
}
