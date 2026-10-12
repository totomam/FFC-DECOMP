#include "ffc/types.h"

extern void func_02050bb0(void *p);
extern void func_020213f0(void *p);
extern void func_020211d4(void *p, int x);
extern void *func_ov003_02153470(void *p);
extern void func_ov003_021489d8(void *a, uint32_t v);
extern void func_ov003_02148908(void *a);
extern void func_ov003_02155d64(void *p);
extern void func_ov003_021489c8(void *a);
extern void func_ov003_02148c28(void *a);
extern int func_ov003_02146478(void *a);
extern int func_0201bd84(void *a, int b);
extern void func_ov003_0214f570(void *p);
extern void func_0201cf34(void *a, void *out);
extern void *func_ov003_0214649c(void *a);
extern int func_020192f4(void *a, uint32_t b);
extern void func_020095b8(void *d, void *s);
extern void *func_0201c9ac(void *a);
extern void func_ov003_021633dc(void *a, void *b, uint32_t c, void *d, uint32_t e, uint32_t f);
extern void *func_020059cc(void *object);

extern void *data_020b93b8;
extern void *data_020b8e44;

void func_ov003_02148e00(void *self)
{
    uint8_t *a = (uint8_t *)self;
    uint32_t tmpA[3];
    uint32_t tmpB[3];
    uint32_t buf[0x98 / 4];
    uint32_t i;
    void *obj;
    void *p;
    void *q;
    void *r5;
    void *r1;
    uint32_t k;
    uint32_t z;
    uint32_t *pb;

    *(uint8_t *)(*(uint8_t **)(a + 0x9c) + 0x1f0) = 1;
    func_02050bb0(a + 0x80);
    if (a[0x413] == 0) {
        if (*(void **)(a + 0x1f0) != 0) {
            func_020213f0(*(void **)(a + 0x1f0));
        }
        if (*(void **)(a + 0x1e8) != 0) {
            func_020211d4(*(void **)(a + 0x1e8), 0);
        }
    }
    p = func_ov003_02153470(*(void **)(a + 0x9c));
    func_ov003_021489d8(a, *(uint32_t *)p);
    func_ov003_02148908(a);
    for (i = 0; i < 0x32; i++) {
        func_ov003_02155d64(*(void **)(a + 0xa0 + i * 4));
    }
    func_ov003_021489c8(a);
    func_ov003_02148c28(a);
    if (func_ov003_02146478(a) != 0) {
        if (func_0201bd84(data_020b93b8, 0x1f) != 0) {
            obj = *(void **)(a + 0x208);
            ((void (*)(void *, int, int))((*(void ***)obj)[14]))(obj, 1, 0);
            func_ov003_0214f570(*(void **)(a + 0x210));
        }
    }

    func_0201cf34(data_020b93b8, buf);
    if (((buf[7] << 25) >> 30) != 0 && func_020192f4(data_020b8e44, *(uint32_t *)func_ov003_02153470(func_ov003_0214649c(a))) != 0) {
        if (func_ov003_02146478(a) != 0 && ((buf[7] << 27) >> 31) == 0) {
            obj = *(void **)(a + 0x20c); ((void (*)(void *, int, int))((*(void ***)obj)[14]))(obj, 2, 0);
        } else if (func_ov003_02146478(a) != 0 && ((buf[7] << 27) >> 31) == 1) {
            obj = *(void **)(a + 0x20c); ((void (*)(void *, int, int))((*(void ***)obj)[14]))(obj, 1, 0);
        }
    } else {
        if (func_ov003_02146478(a) != 0 && ((buf[7] << 27) >> 31) == 0) {
            obj = *(void **)(a + 0x20c); ((void (*)(void *, int, int))((*(void ***)obj)[14]))(obj, 5, 0);
        } else if (func_ov003_02146478(a) != 0 && ((buf[7] << 27) >> 31) == 1) {
            obj = *(void **)(a + 0x20c); ((void (*)(void *, int, int))((*(void ***)obj)[14]))(obj, 4, 0);
        }
    }
    z = 0;
    pb = tmpB;
    for (k = 0; k < 3; k++) {
        pb[k] = z;
    }
    func_020095b8(tmpA, tmpB);
    r5 = *(void **)(*(uint8_t **)(a + 0x17c) + 0xc0);
    r1 = func_0201c9ac(data_020b93b8);
    func_ov003_021633dc(r5, r1, z, tmpA, z, 1);
    func_020059cc(tmpA);
    func_020059cc(tmpB);
}
