#include "ffc/types.h"

extern void func_0208f69c(uint32_t a, void *p);
extern void func_0208f6a4(void *object);

uint32_t func_0208f70c(uint32_t *obj, uint32_t *out) {
    uint32_t r;
    uint32_t d = obj[9] - obj[7];
    if (d != 0) {
        obj[10] = d;
        if (((obj[1] << 19) >> 31) == 0) {
            func_0208f69c(obj[7], &obj[10]);
        }
        r = ((uint32_t (*)(void *, uint32_t, uint32_t *, uint32_t))obj[16])(
            (void *)obj[0], obj[7], &obj[10], obj[18]);
        if (out != 0) {
            *out = obj[10];
        }
        if (r != 0) {
            return r;
        }
        obj[6] += obj[10];
    }
    func_0208f6a4(obj);
    return 0;
}
