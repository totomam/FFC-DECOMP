/* cflags: -lang c++ */
#include "ffc/types.h"
struct G { uint8_t pad[0x88]; int f; };
struct O { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void *v6(); uint8_t pad[0x10]; uint8_t m[4]; };
extern "C" {
extern void func_02056bc0(void *object, void *node);
extern void *func_ov001_0218de10(void);
extern int func_ov001_0218ddec(void *p);
extern void func_ov001_0218e3b4(void *p, int x);
extern void *func_02056aec(void *p);
extern G **data_020b8e44;
void func_ov001_0218e650(O *self);
void func_ov001_0218e650(O *self) {
    if ((*data_020b8e44)->f == 0) return;
    func_02056bc0((uint8_t*)self + 0x14, func_ov001_0218de10());
    if (func_ov001_0218ddec(self) == 0) func_ov001_0218e3b4(self, 0);
    void *r = func_02056aec(self);
    void *v = self->v6();
    uint8_t *q = (uint8_t*)self + 0x14;
    func_02056bc0(q, v);
    func_02056bc0(q, r);
}
}
