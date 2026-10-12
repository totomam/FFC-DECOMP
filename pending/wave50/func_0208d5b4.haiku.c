#include "ffc/types.h"

extern void *func_0208ceec(void);
extern int func_0208cef8(void);
extern void func_02087874(void *p, int n);

uint16_t func_0208d5b4(void) {
    uint8_t *s = (uint8_t *)func_0208ceec();
    uint8_t *o;

    if (func_0208cef8() != 0) {
        return 0;
    }
    func_02087874(*(void **)(s + 4), 2);
    o = *(uint8_t **)(s + 4);
    switch (*(uint16_t *)o) {
    case 9:
        func_02087874(o + 0x182, 2);
        o = *(uint8_t **)(s + 4);
        if (*(uint16_t *)(o + 0x182) == 0) {
            return 0;
        }
        /* fall through */
    case 10:
    case 11:
        func_02087874(o + 0xbc, 2);
        o = *(uint8_t **)(s + 4);
        return *(uint16_t *)(o + 0xbc);
    default:
        return 0;
    }
}
