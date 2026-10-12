/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern void func_02021b48(void *a, uint32_t b);
extern void *func_ov004_021489d0(void *a);
extern void func_ov004_0214969c(void *a, void *b);
extern void func_02021338(uint32_t a);
extern void func_02056c4c(void *a);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02064390(void *object, uint32_t first, uint32_t second);
extern void *func_0203b688(void);
extern void *func_02056aec(void *a);
extern void *func_020655b8(void *a);
extern void func_02056bc0(void *object, void *node);
extern int32_t func_ov004_02153514(void *a);
extern uint32_t func_0201c9ac(void *a, uint32_t b);
extern void func_0201c220(void *a, uint32_t b, uint32_t c);
extern void func_0201bf78(void *a, uint32_t b, uint32_t c);
extern uint8_t data_ov004_021596c4[];
extern void *data_020b93b8;
}

struct Obj {
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

extern "C" void func_ov004_02153770(uint8_t *p, uint32_t param)
{
    void *r4;
    void *r7;
    void *r6;
    void *s4;
    void *t;
    int32_t n;

    func_02021b48(*(void **)(p + 0xf4), 0x18);
    t = func_ov004_021489d0(*(void **)(p + 0xf8));
    func_ov004_0214969c(t, *(void **)(p + 0x284));
    func_02021338(0xa7);
    func_02056c4c(*(void **)(p + 0x254));
    r4 = func_0203b95c(*(void **)(data_ov004_021596c4 + 0x24), *(void **)(p + 0xe0), 0, 1);
    func_02064390(r4, 0x80, 0x60);
    ((Obj *)r4)->v14(1, 0);
    ((Obj *)r4)->v10();
    r7 = func_0203b688();
    s4 = func_02056aec(r4);
    func_02056bc0(r7, func_020655b8(r4));
    func_02056bc0(r7, s4);
    r6 = *(void **)(p + 0x254);
    func_02056bc0(r6, r4);
    func_02056bc0(r6, r7);

    if (param == (uint32_t)func_ov004_02153514(p)) {
        n = (int32_t)func_0201c9ac(data_020b93b8, 7);
        func_0201c220(data_020b93b8, 7, n - 1);
        if (n - 1 == 0) {
            func_0201bf78(data_020b93b8, 1, 0);
        }
    }
}
