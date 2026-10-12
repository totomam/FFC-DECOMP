/* cflags: -lang c++ */
#include "ffc/types.h"

struct Obj {
    virtual void m0(void);
    virtual void m1(void);
    virtual void m2(void);
    virtual void m3(void);
    virtual void m4(void);
    virtual void m5(void);
    virtual void m6(void);
    virtual void m7(void);
    virtual void m8(uint32_t a);
    virtual void m9(void);
    virtual void m10(void);
    virtual void m11(void);
    virtual void m12(void);
    virtual void m13(void);
    virtual void m14(uint32_t a, uint32_t b);
    virtual void m15(uint32_t a);
};

struct S { uint32_t x, y; };
extern "C" {
int func_ov004_02153488(void *obj);
Obj *func_0203b95c(void *a, uint32_t b, uint32_t c, uint32_t d);
void func_02064390(void *object, uint32_t first, uint32_t second);
void func_02056bc0(void *object, void *node);
void func_ov004_0214f878(uint32_t x);
uint32_t func_0203b708(uint32_t x);
uint32_t func_ov004_021547b4(uint32_t a, S b, uint32_t d, uint32_t e);
uint32_t func_0203b750(void);
extern uint8_t data_ov004_021596c4[];
extern uint32_t data_ov004_02159ca0[];
extern uint32_t data_ov004_02159ca8[];

void func_ov004_021546e8(uint8_t *a) {
    Obj *obj;
    uint32_t r6, r7, t;
    uint32_t *p, *s, v1, v2;
    uint8_t *q;

    if (func_ov004_02153488(a)) {
        obj = func_0203b95c(*(void **)(data_ov004_021596c4 + 0x10), *(uint32_t *)(a + 0xe0), 0, 1);
        obj->m8(2);
        obj->m15(3);
        func_02064390(obj, 0x80, 0x60);
        obj->m14(2, 0);
        obj->m10();
        func_02056bc0(*(void **)(a + 0x24c), obj);
    }
    func_ov004_0214f878(*(uint32_t *)(a + 0xe4));
    r6 = func_0203b708(2);
    r7 = func_ov004_021547b4(*(uint32_t *)(a + 0xf4), *(S *)data_ov004_02159ca0, 3, 1);
    t = func_0203b750();
    q = a + 0x14;
    func_02056bc0(q, (void *)t);
    func_02056bc0(q, (void *)r7);
    func_02056bc0(q, (void *)r6);
    *(uint32_t *)(a + 0x204) = 3;
    S *ps = (S *)data_ov004_02159ca8;
    uint32_t w0 = ps->x;
    uint32_t w1 = ps->y;
    *(uint32_t *)(a + 0x94) = w0;
    *(uint32_t *)(a + 0x98) = w1;
}
}
