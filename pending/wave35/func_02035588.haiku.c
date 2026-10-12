#include "ffc/types.h"

extern uint32_t data_02139504;
extern uint32_t func_020355d8(uint32_t idx, uint32_t *buf, uint32_t n);
extern uint32_t func_02052698(void *object, uint32_t v);

uint32_t func_02035588(void *obj, uint32_t idx) {
    uint32_t buf[16];
    uint32_t i, n, r;
    uint32_t m;
    r = 1;
    m = 1;
    m = m << idx;
    m = ~m;
    data_02139504 &= m;
    n = func_020355d8(idx, buf, 0x10);
    i = 0;
    if (n != 0) {
        do {
            if (func_02052698(obj, buf[i]) & r) {
                r = 1;
            } else {
                r = 0;
            }
            i++;
        } while (i < n);
    }
    return r;
}
