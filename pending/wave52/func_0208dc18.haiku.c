#include "ffc/types.h"

extern void *func_0208ceec(void *a);
extern uint32_t func_0208cf38(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02087874(void *p, uint32_t n);
extern void func_0208cdd8(uint32_t x, void *p);
extern uint32_t func_0208ce30(uint32_t a, uint32_t b, uint32_t c);

uint32_t func_0208dc18(void *a, uint32_t b) {
    uint8_t *obj;
    uint8_t *q;
    uint32_t r;
    obj = (uint8_t *)func_0208ceec(a);
    r = func_0208cf38(5, 7, 9, 8, 10, 11);
    if (r != 0) return r;
    q = *(uint8_t **)(obj + 4);
    if (*(uint16_t *)q == 7 || *(uint16_t *)q == 9) {
        if (b < 1 || b > 15) return 6;
        func_02087874(q + 0x182, 2);
        if (*(uint16_t *)(*(uint8_t **)(obj + 4) + 0x182) & (1u << b)) goto L66;
        return 7;
    } else {
        if (b == 0) goto L66;
        return 6;
    }
L66:
    func_0208cdd8(13, a);
    r = func_0208ce30(13, 1, 1u << b);
    if (r != 0) return r;
    return 2;
}
