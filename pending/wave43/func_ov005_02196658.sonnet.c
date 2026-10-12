#include "ffc/types.h"

extern void func_02005988(void *obj, void *data);
extern void func_02068ddc(void *obj, void *arg);
extern void *func_020059cc(void *object);
extern void *func_020159c8(void *p, uint32_t x);
extern uint32_t func_02005efc(void *object, uint32_t first, ...);
extern void func_020095b8(void *a, void *b);
extern uint8_t data_ov005_021992f4[];
extern void *data_020b8e44;

void func_ov005_02196658(uint8_t *self, uint32_t param, int flag)
{
    uint32_t b[3];
    uint32_t a[3];
    uint32_t c[3];
    uint8_t *obj;
    uint32_t *vt;
    void *q;
    void *p;
    uint32_t i;
    uint32_t n;

    func_02005988(a, data_ov005_021992f4);
    func_02068ddc(*(void **)(self + 0x84), a);
    func_020059cc(a);

    obj = *(uint8_t **)(self + 0x84);
    if ((int8_t)*(uint32_t *)(obj + 0xc) == 0) {
        vt = *(uint32_t **)obj;
        ((void (*)(void *))vt[2])(obj);
    }

    if (flag) {
        q = *(void **)(self + 0x80);
        n = 3;
    } else {
        q = *(void **)(self + 0x80);
        n = 1;
    }
    vt = *(uint32_t **)q;
    ((void (*)(void *, uint32_t))vt[6])(q, n);

    for (i = 0; i < 3u; i++) {
        b[i] = i;
    }

    p = func_020159c8(data_020b8e44, 0xd3);
    func_02005efc(b, p, param);
    func_020095b8(c, b);
    func_02068ddc(*(void **)(self + 0x84), c);
    func_020059cc(c);
    func_020059cc(b);
}
