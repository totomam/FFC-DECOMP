#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t func_020696e8(const void *object);
extern void func_02069300(void *p);
extern int func_020692e8(void *p);
extern void func_020692f0(void *p);
extern void func_02021338(int x);
extern void func_ov012_021ce750(void *p);
extern int func_020692e0(void *p);

void func_ov012_021d0628(void *obj)
{
    uint8_t *a = (uint8_t *)obj;
    uint8_t *p = a + 0x14;
    uint8_t flag = *(p + 0x12);
    uint8_t *q = p + 0x1c;
    int ok;
    uint32_t *w;

    if (flag) {
        func_0208763c(q);
    }
    ok = (*(uint32_t *)(p + 0x14) == 0);
    if (flag) {
        func_02087678(q);
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
        if (func_020692e0(*(void **)(a + 0x258))) {
            r4v = *(void **)(a + 0x258);
            if (func_020692e8(r4v)) {
                func_02069300(r4v);
            } else {
                func_020692f0(r4v);
            }
        }
    }
}
