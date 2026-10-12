#include "ffc/types.h"

extern void func_ov000_02168848(void *obj, int32_t x);
extern int32_t func_ov000_02168768(void *obj);
extern int32_t *func_ov000_0216876c(void *obj, int32_t i);
extern void func_ov001_0217fe60(void *obj, int32_t a, int32_t b);

void func_ov001_02180e68(uint8_t *self, int32_t *args, int32_t arg2) {
    int32_t a = args[0];
    int32_t b = args[1];
    int32_t i;
    int32_t n;
    int32_t max = 0;

    func_ov000_02168848(*(void **)(self + 0x5c), arg2);
    n = func_ov000_02168768(*(void **)(self + 0x5c));
    for (i = 0; i < n; i++) {
        int32_t *e = func_ov000_0216876c(*(void **)(self + 0x5c), i);
        if (e[0] > a) {
            e[0] = e[0] - b;
            if (max <= e[0] + e[1]) {
                max = e[0] + e[1];
            }
        }
    }
    func_ov001_0217fe60(self + 0x44, a, b);
}
