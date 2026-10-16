/* cflags: -lang c++ */
#include "ffc/types.h"
struct Pair { uint32_t a, b; };
struct Obj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual Pair get(); };
extern "C" long long func_0209a978(uint32_t n, uint32_t d);
extern "C" void func_ov010_021bf10c(void *p);
extern "C" void func_ov005_02196144(void *o, uint32_t v);
extern "C" void func_ov010_021bf160(void *p);
extern "C" void func_02069828(void *p, Pair v);
extern "C" int func_ov010_021bf0ac(uint8_t *p) {
    uint32_t d = *(uint32_t *)(p + 0xfc);
    long long r = func_0209a978(*(uint32_t *)(p + 0xf8) + d, d + 1);
    *(uint32_t *)(p + 0xf8) = (uint32_t)(r >> 32);
    func_ov010_021bf10c(p);
    func_ov005_02196144(*(void **)(p + 0x114), (uint8_t)(*(uint32_t *)(p + 0xf8) + 1));
    func_ov010_021bf160(p);
    func_02069828(p, (*(Obj **)(p + 0xf4))->get());
    return 1;
}
