#include "ffc/types.h"

extern uint32_t data_02139504;
extern void *data_020b8f64;
extern void *func_0205681c(uint32_t size);
extern void *func_020358c8(void *object);
extern void func_020359a8(void *obj, uint32_t idx);
extern uint32_t func_020355d8(uint32_t idx, uint32_t *buf, uint32_t max);
extern uint32_t func_02052664(void *p, uint32_t v);

int func_0203550c(void *p, uint32_t n)
{
    uint32_t buf[16];
    uint32_t count;
    uint32_t i;
    int res;

    data_02139504 |= 1u << n;
    if (data_020b8f64 == 0) {
        void *r = func_0205681c(0x10);
        if (r != 0) {
            r = func_020358c8(r);
        }
        data_020b8f64 = r;
    }
    func_020359a8(data_020b8f64, n);
    count = func_020355d8(n, buf, 0x10);
    res = 1;
    for (i = 0; i < count; i++) {
        if (func_02052664(p, buf[i]) & res) {
            res = 1;
        } else {
            res = 0;
        }
    }
    return res;
}
