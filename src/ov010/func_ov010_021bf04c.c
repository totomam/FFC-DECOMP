/* cflags: -lang c++ */
#include "ffc/types.h"
struct P { uint32_t a, b; };
struct O { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual P v4(); };
extern "C" {
extern uint64_t func_0209a978(uint32_t a, uint32_t b);
extern void func_ov010_021bf10c(void *p);
extern void func_ov005_02196144(uint32_t a, uint32_t b);
extern void func_ov010_021bf160(void *p);
extern void func_02069828(void *p, P s);
int func_ov010_021bf04c(uint8_t *self);
}
int func_ov010_021bf04c(uint8_t *self) {
    uint64_t d = func_0209a978(*(uint32_t*)(self + 0xf8) + 1, *(uint32_t*)(self + 0xfc) + 1);
    *(uint32_t*)(self + 0xf8) = (uint32_t)(d >> 32);
    func_ov010_021bf10c(self);
    func_ov005_02196144(*(uint32_t*)(self + 0x114), (uint8_t)(*(uint32_t*)(self + 0xf8) + 1));
    func_ov010_021bf160(self);
    func_02069828(self, (*(O**)(self + 0xf4))->v4());
    return 1;
}
