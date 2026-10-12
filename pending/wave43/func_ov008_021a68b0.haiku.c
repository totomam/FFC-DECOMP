#include "ffc/types.h"

typedef struct FfcCtxA {
    uint32_t a;
    void *f4;
    uint32_t f8;
    uint8_t flag;
} FfcCtxA;

extern void func_020173b0(void *dst, uint32_t src);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_0203919c(void *dst, uint32_t v);
extern void func_020393a8(void *dst, void *src, uint32_t n);
extern void func_02068ddc(void *obj, void *arg);
extern void *func_020059cc(void *object);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(void *object);
extern uint32_t data_020b8e44;

void func_ov008_021a68b0(uint8_t *self, uint8_t val) {
    FfcCtxA s;
    uint8_t t[12];
    uint8_t u[12];
    uint32_t idx;
    uint32_t *m;
    uint32_t off;
    uint16_t h;

    self[0x104] = val;
    func_020173b0(&s, data_020b8e44);
    if (self[0x103] != 0) {
        idx = ((uint32_t *)*(void **)(self + 0xf4))[self[0x104]];
        m = func_02052d90(s.f4, s.f8);
        off = m[13];
    } else {
        idx = ((uint32_t *)*(void **)(self + 0xf4))[self[0x104]];
        m = func_02052d90(s.f4, s.f8);
        off = m[11];
    }
    h = *(uint16_t *)((uint8_t *)m + off + (idx << 3) + 4);
    func_0203919c(t, h);
    func_020393a8(u, t, 3);
    func_02068ddc(*(void **)(self + 0xe4), u);
    func_020059cc(u);
    func_020059cc(t);
    if (s.f4 != 0) {
        if (s.flag != 0) {
            func_02052d3c(s.f4, s.f8);
        }
        func_02052c04(s.f4);
    }
    func_02053290(&s);
}
