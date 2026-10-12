#include "ffc/types.h"

struct FfcMarDecoded;

extern void *func_020424e0(void *object);
extern void *func_ov003_0214649c(void *object);
extern void func_020095b8(void *dst, void *src);
extern void *func_ov003_02146494(void *object);
extern void func_ov003_021633dc(void *a, uint32_t b, uint32_t c, void *d, uint32_t e, uint32_t f);
extern void func_020059cc(void *object);
extern uint8_t *func_02052d90(const struct FfcMarDecoded *mar, uint32_t index);
extern uint32_t func_02005f1c(void *object, uint32_t third);
extern void func_02016a54(void *dst, void *src);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void func_02053290(void *object);
extern uint32_t func_0201c9ac(uint32_t a, uint32_t b);
extern uint32_t func_0201b7a8(uint32_t a);
extern void *data_020b8e44;
extern void *data_020b93b8;

void func_ov003_02168538(uint8_t *a) {
    uint32_t s3c[3];
    uint32_t s30[3];
    uint32_t s24[3];
    uint32_t s8[3];
    struct { uint32_t w0; uint32_t w1; uint32_t w2; uint8_t b; } s14;
    uint8_t *m;
    uint8_t *obj;
    uint8_t *g;
    uint8_t *q;
    uint32_t r4;
    uint32_t i;
    uint32_t v;
    uint32_t idx;
    uint32_t off;

    if (func_020424e0(*(void **)(a + 0x14)) == 0) return;
    if (func_ov003_0214649c(func_020424e0(*(void **)(a + 0x14))) == 0) return;

    for (i = 0; i < 3; i++) {
        r4 = i;
        s3c[i] = r4;
    }
    func_020095b8(s24, s3c);
    obj = func_ov003_02146494(func_020424e0(*(void **)(a + 0x14)));
    func_ov003_021633dc(*(void **)(obj + 0xc0), r4, r4, s24, r4, 1);
    func_020059cc(s24);
    for (; r4 < 3; r4++) {
        s30[r4] = 0;
    }

    if (*(uint32_t *)(a + 0x1c) == 0) {
        g = func_ov003_0214649c(func_020424e0(*(void **)(a + 0x14)));
        m = func_02052d90((const struct FfcMarDecoded *)*(void **)(g + 0xe4), *(uint32_t *)(g + 0xe8));
        off = *(uint32_t *)(m + 0x38);
        q = 0;
        if (off != 0) {
            q = m + off;
        }
        func_02005f1c(s30, (uint32_t)q + *(uint32_t *)(q + 4));
    } else {
        func_02016a54(&s14, data_020b8e44);
        m = func_02052d90((const struct FfcMarDecoded *)s14.w1, s14.w2);
        idx = *(uint32_t *)(a + 0x1c);
        off = *(uint32_t *)(m + 0xc);
        v = *(uint32_t *)(m + off + idx * 4);
        q = m + v;
        func_02005f1c(s30, (uint32_t)q + *(uint32_t *)q);
        if (s14.w1 != 0) {
            if (s14.b != 0) {
                func_02052d3c(s14.w1, s14.w2);
            }
            func_02052c04(s14.w1);
        }
        func_02053290(&s14);
    }

    r4 = *(uint32_t *)(a + 0x18);
    if (r4 == 0) {
        g = func_ov003_0214649c(func_020424e0(*(void **)(a + 0x14)));
        m = func_02052d90((const struct FfcMarDecoded *)*(void **)(g + 0xe4), *(uint32_t *)(g + 0xe8));
        off = *(uint32_t *)(m + 0x38);
        if (off != 0) {
            r4 = *(uint16_t *)(m + off);
        } else {
            r4 = *(uint16_t *)0;
        }
    }
    func_020095b8(s8, s30);
    obj = func_ov003_02146494(func_020424e0(*(void **)(a + 0x14)));
    v = (uint32_t)func_0201c9ac((uint32_t)data_020b93b8, 0x3b);
    func_ov003_021633dc(*(void **)(obj + 0xc0), v, func_0201b7a8((uint32_t)data_020b93b8), s8, r4, 1);
    func_020059cc(s8);
    func_020059cc(s30);
    func_020059cc(s3c);
}
