#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *obj, uint32_t n);
extern void func_02005988(void *obj, uint32_t v);
extern void *func_02032d24(void *a, Pair s, void *d, uint32_t e, uint32_t f);
extern void *func_020059cc(void *object);
extern void *data_020b8e44;

void *func_ov007_021b1f24(void) {
    uint32_t obj[3];
    Pair s;
    void *p;
    uint32_t n;
    uint32_t z = 0;
    int flag = 0;

    p = func_0205681c(0xb0);
    if (p != 0) {
        n = func_020159c8(*(void **)&data_020b8e44, 0x109);
        func_02005988(obj, n);
        s.a = 0x80;
        s.b = 0x60;
        flag = 1;
        p = func_02032d24(p, s, obj, 4, z);
    }
    if (flag) {
        func_020059cc(obj);
    }
    return p;
}
