#include "ffc/types.h"

typedef struct {
    uint32_t x;
    uint32_t y;
} T;

extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *buf, void *obj);
extern void *func_02032540(void *obj, uint32_t a, T bc, void *buf, uint32_t e, uint32_t f, uint8_t g);
extern void *func_020059cc(void *object);

void *func_0203bdf0(uint32_t a, T t, void *d, uint32_t e, uint32_t f, uint8_t g) {
    uint8_t buf[0xc];
    int done = 0;
    void *res = func_0205681c(0xc0);
    if (res) {
        func_02005988(buf, d);
        done = 1;
        res = func_02032540(res, a, t, buf, e, f, g);
    }
    if (done) {
        func_020059cc(buf);
    }
    return res;
}
