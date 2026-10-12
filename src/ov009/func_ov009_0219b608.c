#include "ffc/types.h"

extern void func_02021338(uint32_t a, uint32_t b);

typedef void (*fn_t)(void *, uint32_t, uint32_t, uint32_t);

void func_ov009_0219b608(uint8_t *p, uint32_t a) {
    uint32_t r4 = a;
    uint32_t r6;
    uint32_t flags;
    void **obj;
    fn_t fn;

    if (*(uint32_t *)(p + 0x228) != a) {
        return;
    }
    r6 = 0xbb;
    func_02021338(0xbb, a);
    obj = *(void ***)(p + 0x210);
    if (obj == 0) {
        return;
    }
    r6 += 0xc9;
    if (*(uint32_t *)(p + r6) == 2) {
        r4 += 3;
    }
    flags = 0;
    if (*(uint32_t *)(p + 0x238) == r4) {
        flags |= 1;
        r4 = *(uint32_t *)(p + 0x23c);
    } else if (*(uint32_t *)(p + 0x240) == r4) {
        flags |= 2;
    }
    fn = *(fn_t *)(*obj);
    fn(obj, r4, flags, 0);
}
