#include "ffc/types.h"

extern void *data_020b93b8;
extern void func_0201d014(void *a, uint32_t b, void *c);
extern int func_02036ba8(void *s);
extern uint32_t func_02036bfc(void *s);
extern uint32_t *func_ov003_02153470(void *x);
extern void *func_ov003_021464f4(void *a, uint32_t b);
extern uint32_t func_02036c0c(void *s);
extern uint32_t func_02036c04(void *s);
extern uint32_t func_02036bbc(void *s);
extern uint32_t func_02036bd0(void *s);
extern void func_ov003_02148210(void *m, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_ov003_02155d64(void *m);
extern void func_ov003_02155adc(void *m);
extern void func_0201d14c(void *a, uint32_t b, void *c);
typedef struct { uint32_t w[10]; } Blob;
extern void func_ov003_02158528(void *m, Blob v);
extern uint32_t *func_ov003_02146494(void *a);
extern void func_ov003_02148c28(void *a);
extern void *func_ov003_0214649c(void *a);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_ov003_0214dc48(void *a, uint32_t b, void *c, uint32_t d);
extern void func_ov003_021489c8(void *a);

void func_ov003_02148254(uint8_t *a, uint32_t b) {
    uint32_t s[4];
    Blob blob;
    void *m;
    uint32_t c1, c2, c3, c4;
    uint32_t cnt;
    void *p;
    void *res;

    func_0201d014(data_020b93b8, b, s);
    if (func_02036ba8(s) == 0) goto L0110;
    if (func_02036bfc(s) != *func_ov003_02153470(*(void **)(a + 0x9c))) goto L0110;

    m = func_ov003_021464f4(a, b);
    if (m == 0) {
        m = func_ov003_021464f4(a, 0);
        if (m == 0) return;
    }
    {
        c1 = func_02036c0c(s);
        c2 = func_02036c04(s);
        c3 = func_02036bbc(s);
        c4 = func_02036bd0(s);
        func_ov003_02148210(m, b, c1, c2, c3, c4);
    }
    func_ov003_02155d64(m);
    func_0201d14c(data_020b93b8, b, &blob);
    func_ov003_02158528(m, blob);
    if (b == *(uint32_t *)((uint8_t *)func_ov003_02146494(a) + 0xb0)) {
        func_ov003_02148c28(a);
        return;
    }
    if (a[0x3ec] != 0) return;
    if (func_ov003_0214649c(a) == 0) return;
    p = func_ov003_0214649c(a);
    res = func_02052d90(*(void **)((uint8_t *)p + 0xe4), *(uint32_t *)((uint8_t *)p + 0xe8));
    cnt = *(uint32_t *)((uint8_t *)res + 0x8c);
    c4 = 0;
    if (cnt != 0) c4 = (uint32_t)((uint8_t *)res + cnt);
    func_ov003_0214dc48(a, b, (void *)c4, a[0x3ec]);
    return;

L0110:
    m = func_ov003_021464f4(a, b);
    if (m == 0) return;
    func_ov003_02155adc(m);
    func_ov003_02155d64(m);
    if (b == *(uint32_t *)((uint8_t *)func_ov003_02146494(a) + 0xb0)) {
        func_ov003_021489c8(a);
    }
}
