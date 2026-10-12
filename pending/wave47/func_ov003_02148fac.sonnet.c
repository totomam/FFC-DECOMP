#include "ffc/types.h"

extern int32_t func_02064b40(void *p);
extern void func_ov003_0214f570(void *p);
extern void func_ov003_0214f5e0(void *p);
extern void func_0201cf34(void *a, void *b);
extern void func_ov003_0214649c(void *p);
extern void *func_ov003_02153470(void);
extern int32_t func_020192f4(void *a, uint32_t b);
extern void func_020095b8(void *a, void *b);
extern void *func_0201c9ac(void *a, int32_t b);
extern void *func_0201b7a8(void *a);
extern void func_ov003_021633dc(void *a, void *b, void *c, void *d, uint32_t e, int32_t f);
extern void *func_020059cc(void *object);
extern void *data_020b93b8;
extern void *data_020b8e44;

void func_ov003_02148fac(uint8_t *self, uint32_t param)
{
    uint32_t buf[38];
    uint32_t arr[3];
    uint32_t tmp[3];
    uint32_t idx;
    void *o;
    void *r;
    void *p;
    void *q;
    void *s;
    uint32_t i;

    idx = 0x208;
    o = *(void **)(self + idx);
    ((void (*)(void *))((void **)(*(void **)o))[10])(o);
    if (func_02064b40(*(void **)(self + idx)) != 3 && func_02064b40(*(void **)(self + idx)) != -1) {
        idx += 8;
        func_ov003_0214f570(*(void **)(self + idx));
    } else {
        func_ov003_0214f5e0(*(void **)(self + 0x210));
    }

    func_0201cf34(data_020b93b8, buf);

    if (((buf[7] << 25) >> 30) != 0) {
        func_ov003_0214649c(self);
        r = func_ov003_02153470();
        if (func_020192f4(data_020b8e44, *(uint32_t *)r) != 0) {
            o = *(void **)(self + 0x20c);
            ((void (*)(void *))((void **)(*(void **)o))[10])(o);
        }
    }

    for (i = 0; i < 3; i++) {
        arr[i] = i;
    }

    func_020095b8(tmp, arr);

    p = *(void **)(self + 0x17c);
    s = *(void **)((uint8_t *)p + 0xc0);
    q = func_0201c9ac(data_020b93b8, 0x3b);
    r = func_0201b7a8(data_020b93b8);
    func_ov003_021633dc(s, q, r, tmp, param, 1);

    func_020059cc(tmp);
    func_020059cc(arr);
}
