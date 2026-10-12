/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_0208763c(void *p);
extern "C" void func_02087678(void *p);
extern "C" uint32_t func_020696e8(const void *object);
extern "C" void func_02069300(void *p);
extern "C" int func_020692e8(void *p);
extern "C" void func_020692f0(void *p);
extern "C" void func_02021338(int x);
extern "C" void func_ov012_021ce750(void *p);
extern "C" int func_020692e0(void *p);

struct G { uint8_t *q; uint8_t f; G(uint8_t *x, uint8_t fl):q(x),f(fl){ if(f) func_0208763c(q);} ~G(){ if(f) func_02087678(q);} };
extern "C" void func_ov012_021d0628(void *obj);
extern "C" void func_ov012_021d0628(void *obj)
{
    uint8_t *a = (uint8_t *)obj;
    uint8_t *p = a + 0x14;
    uint8_t flag = *(p + 0x12);
    uint8_t *q = p + 0x1c;
    int ok;
    uint32_t *w;

    {
    G g(q, flag);
    ok = (*(uint32_t *)(p + 0x14) == 0);
    }
    if (!ok) {
        return;
    }

    w = (uint32_t *)func_020696e8(obj);
    if ((w[1] & (w[1] ^ w[2])) & 2) {
        if (*(a + 0x33c) != 0 || (int8_t)*(a + 0x338) > 0) {
            func_02069300(*(void **)(a + 0x25c));
        } else {
            void *r4v = *(void **)(a + 0x254);
            if (*(a + 0x33b)) {
                if (func_020692e8(r4v)) {
                    func_02069300(r4v);
                } else {
                    func_020692f0(r4v);
                }
            }
        }
    }

    w = (uint32_t *)func_020696e8(obj);
    if ((w[1] & (w[1] ^ w[2])) & 0x800) {
        *(int8_t *)(a + 0x338) = (int8_t)(*(int8_t *)(a + 0x338) - 1);
        func_02021338(0xb9);
        func_ov012_021ce750(obj);
    }

    w = (uint32_t *)func_020696e8(obj);
    if ((w[1] ^ w[2]) & w[1] & 0x400) {
        *(int8_t *)(a + 0x338) = (int8_t)(*(int8_t *)(a + 0x338) + 1);
        func_02021338(0xb9);
        func_ov012_021ce750(obj);
    }

    w = (uint32_t *)func_020696e8(obj);
    if ((w[1] & (w[1] ^ w[2])) & 8) {
        void *r4v;
        int c = func_020692e0(*(void **)(a + 0x258));
        r4v = *(void **)(a + 0x258);
        if (c) {
            if (func_020692e8(r4v)) {
                func_02069300(r4v);
            } else {
                func_020692f0(r4v);
            }
        }
    }
}
