/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num {
    int v;
    Num(int x) : v(x) {}
    ~Num() {}
};
inline int diff(const Num &a, int b) { return a.v - b; }

extern "C" {
extern uint32_t func_0205681c(uint32_t size);
extern uint32_t func_ov008_0219b694(uint8_t *p, uint32_t idx);
extern uint32_t func_ov005_02196728(uint32_t obj, void *ptr, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_ov005_02197868(uint32_t *out);
extern void func_ov005_02196c3c(void);
extern void func_0200d5d4(void *object, uint32_t value);
extern void func_020695ec(uint8_t *p, uint32_t v);
extern uint32_t data_ov008_021a7a54[];
}

extern "C" void func_ov008_0219b860(uint8_t *p) {
    uint32_t &cnt = *(uint32_t *)(p + 0xd0);
    uint32_t &lim = *(uint32_t *)(p + 0xd4);
    uint32_t *t = data_ov008_021a7a54;
    uint32_t r44;
    uint8_t i;

    cnt = diff(Num(cnt), cnt);

    for (i = 0; i < 8; i++) {
        uint32_t ip = i + ((uint32_t)p[0x104] << 3);
        uint32_t a = i & 3;
        uint32_t b = i >> 2;
        uint32_t o0 = t[15] + a * t[5] + b * t[9];
        uint32_t o1 = t[16] + a * t[6] + b * t[10];

        if (*(uint32_t *)(p + 0xe4) > ip) {
            uint32_t A = func_0205681c(0xc4);
            if (A) {
                uint32_t R = func_ov008_0219b694(p, ip);
                uint32_t v = ((uint32_t *)(*(uint32_t *)(p + 0xe0)))[ip];
                A = func_ov005_02196728(A, *(void **)(p + 0xbc), o0, o1, v, R, 2);
            }
            r44 = A;
        } else {
            uint32_t B = func_0205681c(0xc4);
            if (B) {
                uint32_t x38;
                func_ov005_02197868(&x38);
                B = func_ov005_02196728(B, *(void **)(p + 0xbc), o0, o1, x38, 0, 2);
            }
            r44 = B;
            func_ov005_02196c3c();
        }

        if (cnt < lim) {
            cnt = cnt + 1;
            (*(uint32_t **)(p + 0xcc))[cnt - 1] = r44;
        } else {
            func_0200d5d4(p + 0xcc, r44);
        }
        func_020695ec(p, r44);
    }
}
