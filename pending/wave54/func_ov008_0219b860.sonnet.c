/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num {
    int v;
    Num(int x) : v(x) {}
    ~Num() {}
};
struct Ref { uint32_t *r; Ref(uint32_t*x):r(x){} ~Ref(){} };
inline int diff(const Num &a, int b) { return a.v - b; }
struct V2 { uint32_t x, y; };

extern "C" {
extern uint32_t func_0205681c(uint32_t size);
extern uint32_t func_ov008_0219b694(uint8_t *p, uint32_t idx);
extern uint32_t func_ov005_02196728(uint32_t obj, void *ptr, V2 pos, uint32_t a, uint32_t b, uint32_t c);
extern void func_ov005_02197868(uint32_t *out);
extern void func_ov005_02196c3c(void);
extern void func_0200d5d4(void *object, void *v, uint32_t f);
extern void func_020695ec(uint8_t *p, uint32_t v);
extern uint32_t data_ov008_021a7a54[];
}

extern "C" void func_ov008_0219b860(uint8_t *p) {
    int n = *(volatile int *)(p + 0xd0);
    Ref rc((uint32_t *)p);
    rc.r = (uint32_t *)(p + 0xd0);
    uint8_t bb[4];
    uint32_t r44;
    uint32_t *t = data_ov008_021a7a54;
    uint8_t i;

    *(int *)(p + 0xd0) = diff(Num(*(int *)rc.r), n);

    Ref rv((uint32_t *)p);
    rv.r = (uint32_t *)(p + 0xcc);
    Ref rb((uint32_t *)p);
    rb.r = (uint32_t *)(p + 0x104);
    for (i = 0; i < 8; i++) {
        uint32_t ip = i + ((uint32_t)*(uint8_t*)rb.r << 3);
        int a = (int)i % 4;
        uint32_t b = i >> 2;

        if (*(uint32_t *)(p + 0xe4) > ip) {
            uint32_t A = func_0205681c(0xc4);
            if (A) {
                V2 o;
                o.x = t[15] + a * t[5] + b * t[9];
                o.y = t[16] + a * t[6] + b * t[10];
                uint32_t R = func_ov008_0219b694(p, ip);
                uint32_t v = ((uint32_t *)(*(uint32_t *)(p + 0xe0)))[ip];
                A = func_ov005_02196728(A, *(void **)(p + 0xbc), o, v, R, 2);
            }
            r44 = A;
        } else {
            uint32_t B = func_0205681c(0xc4);
            if (B) {
                V2 o;
                uint32_t x38;
                o.x = t[15] + a * t[5] + b * t[9];
                o.y = t[16] + a * t[6] + b * t[10];
                func_ov005_02197868(&x38);
                B = func_ov005_02196728(B, *(void **)(p + 0xbc), o, x38, 0, 2);
            }
            r44 = B;
            func_ov005_02196c3c();
        }

        if (*rc.r < *(uint32_t *)(p + 0xd4)) {
            *rc.r = *rc.r + 1;
            (*(uint32_t **)(p + 0xcc))[*rc.r - 1] = r44;
        } else {
            bb[1]=0; func_0200d5d4(rv.r, &r44, bb[1]);
        }
        func_020695ec(p, r44);
    }
}
