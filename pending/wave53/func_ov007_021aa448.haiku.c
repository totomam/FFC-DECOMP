#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t *func_020696e8(const void *object);
extern void func_02069300(uint32_t v);
extern int func_020692e8(uint32_t v);
extern void func_020692f0(uint32_t v);
extern int func_020692e0(uint32_t v);

typedef struct { uint32_t x; uint32_t y; } Pair;
extern void func_020696ec(Pair *p, uint32_t a);

void func_ov007_021aa448(void *p0)
{
    uint8_t *a = (uint8_t *)p0;
    uint8_t *sub = a + 0x14;
    uint8_t flag = sub[0x12];
    void *s6 = sub + 0x1c;
    int ok;
    uint32_t arr[2];
    uint32_t *ap = arr;
    uint32_t m;

    if (flag) {
        func_0208763c(s6);
    }
    ok = (*(uint32_t *)(sub + 0x14) == 0);
    if (flag) {
        func_02087678(s6);
    }
    if (!ok) {
        return;
    }

    {
        uint32_t *o = func_020696e8(a);
        arr[0] = o[1];
        arr[1] = o[2];
    }
    m = ap[0] & (ap[1] ^ ap[0]);
    if (m & 2) {
        if (a[0x134]) {
            func_02069300(*(uint32_t *)(a + 0xc4));
        } else {
            uint32_t v = *(uint32_t *)(a + 0xbc);
            if (func_020692e8(v)) {
                func_02069300(v);
            } else {
                func_020692f0(v);
            }
        }
        return;
    }

    {
        uint32_t *o = func_020696e8(a);
        arr[0] = o[1];
        arr[1] = o[2];
    }
    m = ap[0] & (ap[1] ^ ap[0]);
    if (m & 8) {
        uint32_t v = *(uint32_t *)(a + 0xc0);
        if (func_020692e0(v)) {
            uint32_t w = *(uint32_t *)(a + 0xc0);
            if (func_020692e8(w)) {
                func_02069300(w);
            } else {
                func_020692f0(w);
            }
        }
    }
}
