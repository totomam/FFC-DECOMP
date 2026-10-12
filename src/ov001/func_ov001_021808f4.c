#include "ffc/types.h"

extern int32_t func_ov000_02168768(void *list);
extern void *func_ov000_0216876c(void *list, int32_t idx);
extern int32_t func_ov001_02180868(uint32_t v, int32_t x);
extern void func_ov000_02168848(void *list, int32_t idx);
extern void func_ov001_0217fe60(void *p, int32_t a, int32_t b);

int32_t func_ov001_021808f4(uint8_t *self, int32_t arg) {
    int32_t count, i, n, first;


    count = func_ov000_02168768(*(void **)(self + 0x60));
    if (count == 0) {
        return 1;
    }
    n = 0;
    while (n < count) {
        uint16_t *e = (uint16_t *)func_ov000_0216876c(*(void **)(self + 0x60), n);
        if (func_ov001_02180868(e[4], arg) >= 0) {
            break;
        }
        n++;
    }
    if (n == 0) {
        return 1;
    }
    i = n;
    n = n - 1;
    if (i != 0) {
        do {
            func_ov000_02168848(*(void **)(self + 0x60), n);
        } while (n-- != 0);
    }
    count = func_ov000_02168768(*(void **)(self + 0x60));
    if (count == 0) {
        *(int32_t *)(self + 0x58) = 0;
        return 1;
    }
    first = *(int32_t *)func_ov000_0216876c(*(void **)(self + 0x60), 0);
    for (i = 0; i < count; i++) {
        int32_t *q = (int32_t *)func_ov000_0216876c(*(void **)(self + 0x60), i);
        *q -= first;
    }
    func_ov001_0217fe60(self + 0x50, 0, first);
    return 1;
}
