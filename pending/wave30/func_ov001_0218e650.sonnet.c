/* cflags: -lang c++ */
#include "ffc/types.h"

struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void *v6();
};
struct Root { char pad[0x88]; void *f88; };
extern "C" {
extern Root **data_020b8e44;
void *func_ov001_0218de10(void);
void func_02056bc0(void *object, void *node);
int func_ov001_0218ddec(void *p);
void func_ov001_0218e3b4(void *p, int x);
void *func_02056aec(void *p);

void func_ov001_0218e650(Obj *a)
{
    if ((*data_020b8e44)->f88 == 0) return;
    func_02056bc0((uint8_t *)a + 0x14, func_ov001_0218de10());
    if (func_ov001_0218ddec(a) == 0) {
        func_ov001_0218e3b4(a, 0);
    }
    void *n = func_02056aec(a);
    void *x = a->v6();
    uint8_t *p = (uint8_t *)a + 0x14;
    func_02056bc0(p, x);
    func_02056bc0(p, n);
}
}
