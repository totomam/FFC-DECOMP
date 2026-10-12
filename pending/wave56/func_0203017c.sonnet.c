#include "ffc/types.h"

extern void func_02092878(void *dst, void *src);
extern void *func_02092a54(void *p, int c);
extern void func_02092924(void *a, void *b);
extern void func_02005988(void *a, void *b);
extern int func_02015e30(void *a, void *b, uint32_t *c, uint32_t *d);
extern void *func_020059cc(void *object);
extern uint32_t func_0203b9a0(void);
extern int func_02028f0c(uint32_t a, void *b, int c, uint32_t *d);
extern void func_02035c18(void *p);
extern uint8_t data_020adf38[];
extern void *data_020b8e44;

uint32_t func_0203017c(uint8_t *self, uint8_t *param)
{
    uint8_t a[0x80];
    uint8_t b[0x80];
    uint8_t c[0xc];
    uint8_t d[0xc];
    uint32_t v8;
    uint32_t v4;
    uint32_t v0;
    uint8_t *r;
    int ok;
    int res;

    func_02092878(a, self + 0x10a);
    r = func_02092a54(a, 0x5f);
    if (r == 0) {
        return 0;
    }
    r[0] = data_020adf38[0];
    r[1] = data_020adf38[1];
    r[2] = data_020adf38[2];
    r[3] = data_020adf38[3];
    func_02092878(b, param);
    func_02092924(b, a);
    ok = 0;
    v8 = 0;
    v4 = 0;
    func_02005988(c, b);
    if (func_02015e30(data_020b8e44, c, &v8, &v4) == 0) {
        ok = 1;
    }
    func_020059cc(c);
    if (ok != 0) {
        return 0;
    }
    *(uint32_t *)(self + 0x80) = func_0203b9a0();
    func_02005988(d, b);
    v0 = *(uint32_t *)(self + 0xd4);
    res = func_02028f0c(*(uint32_t *)(self + 0x80), d, 0, &v0) == 0;
    func_02035c18(&v0);
    func_020059cc(d);
    return (res != 0) ? 0 : 1;
}
