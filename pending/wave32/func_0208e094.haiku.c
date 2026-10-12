#include "ffc/types.h"

extern void *func_0208ceec(void);
extern int32_t func_0208cf38(int32_t a, int32_t b);
extern void func_02087874(void *p, int32_t n);
extern void func_0208cdd8(int32_t a, void *b);
extern int32_t func_0208ce30(int32_t a, int32_t b);

int32_t func_0208e094(void *param) {
    uint8_t *s = (uint8_t *)func_0208ceec();
    int32_t r = func_0208cf38(1, 11);
    if (r != 0) {
        return r;
    }
    func_02087874((uint8_t *)*(void **)(s + 4) + 0x10, 4);
    if (*(uint32_t *)((uint8_t *)*(void **)(s + 4) + 0x10) == 0) {
        return 3;
    }
    func_0208cdd8(0x13, param);
    r = func_0208ce30(0x13, 0);
    if (r != 0) {
        return r;
    }
    return 2;
}
