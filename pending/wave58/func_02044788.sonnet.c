#include "ffc/types.h"

extern void *data_020b8e44;
extern void *data_020b93b8;
extern uint32_t data_020afb10[2];

extern void func_020375bc(uint32_t x);
extern void *func_020197b4(void *a, uint32_t b);
extern void func_0201bf5c(void *a, uint32_t b, uint32_t c);
extern uint32_t func_0201bf6c(void *a, uint32_t b);
extern uint32_t func_02019df0(void *a, uint32_t b);
extern uint32_t func_02019e08(void *a, uint32_t b);
extern void func_02035f58(void *p);
extern void func_0201f36c(void *o, uint32_t i, void *out);
extern uint32_t func_0204458c(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_02036154(void *p);
extern void func_0201f460(void *o, uint32_t i, void *out);
extern uint8_t func_02036360(void *p);
extern void func_0201f534(void *o, uint32_t i, uint32_t x);
extern uint32_t func_02036418(void *p);
extern void func_0201f304(void *o, uint32_t i, void *p);
extern void *func_02035fd0(void *p);
extern uint8_t *func_02036378(void *p);
extern uint8_t func_02035dac(void *p);
extern uint32_t func_02035ff4(void *p);
extern void func_020364ec(void *p, uint32_t v);
extern uint32_t func_0201c194(void *o);
extern void func_020365ec(void *p, uint32_t v);
extern void func_02035dbc(void *p, uint32_t v);
extern void func_0201f6c4(void *o, void *p, uint32_t v);
extern void func_0201d1a4(void *o, uint32_t a, void *out);
extern void func_02036f38(void *p, uint32_t v);
extern void func_02036f4c(void *p, uint32_t v);
extern void func_0201d198(void *o, uint32_t a, void *out);
extern void func_02036750(void *p);
extern uint32_t func_0201b924(void *o);
extern void func_0201f1f0(void *o, uint32_t a, void *out);
extern void func_020369f0(void *p, uint32_t a, uint32_t b, uint32_t c);
extern void func_0201f1a8(void *o, uint32_t a, void *out);
extern void func_020367a8(void *p);

typedef union { uint32_t w[24]; uint16_t h[48]; uint8_t b[0x60]; } SS;
void func_02044788(uint8_t *self) {
    SS s;
    SS t;
    uint8_t x8[0x58];
    uint32_t x4;
    uint32_t n;
    uint32_t r4;
    int idx;
    uint32_t r6;
    uint32_t ok;
    uint32_t v;
    uint8_t *q;
    uint8_t *base;
    uint32_t *S;
    uint32_t *T;
    uint32_t i;
    uint16_t *hs;
    uint16_t *ht;

    func_020375bc(0);
    r4 = 0;
    q = func_020197b4(data_020b8e44, *(uint32_t *)(self + 0x90));
    if (*(uint32_t *)(self + 0xa0) >= (uint32_t)q[0xc]) {
        r4 = 1;
    }
    func_0201bf5c(data_020b93b8, *(uint32_t *)(self + 0x8c), r4);
    if (*(uint32_t *)(self + 0x94) == 1) {
        if (func_0201bf6c(data_020b93b8, *(uint32_t *)(self + 0x8c))) {
            r6 = func_02019df0(data_020b8e44, *(uint32_t *)(self + 0x90));
            n = func_02019e08(data_020b8e44, *(uint32_t *)(self + 0x90));
            func_02035f58(&s);
            func_0201f36c(data_020b93b8, r6, &s);
            idx = 0;
            ok = func_0204458c(r6, 0, 0);
            if (ok != 0) {
                if (func_02036154(&s) == 0) {
                    for (; idx < 0x64; idx++) {
                        func_02035f58(&t);
                        func_0201f460(data_020b93b8, idx, &t);
                        if (func_02036360(&t) == r6) {
                            func_0201f534(data_020b93b8, idx, 0);
                            v = func_02036418(&t);
                            func_0201f304(data_020b93b8, v, &t);
                            s.w[0] = t.w[0]; s.w[2] = t.w[2]; s.w[4] = t.w[4]; s.w[6] = t.w[6];
                            s.w[8] = t.w[8]; s.w[10] = t.w[10]; s.w[11] = t.w[11];
                            ht = &t.h[24]; hs = &s.h[24]; i = 0x11;
                            do { *hs = *ht; ht++; hs++; i--; } while (i != 0);
                            s.w[21] = t.w[21]; s.w[22] = t.w[22]; s.w[23] = t.w[23];
                            func_02035fd0(&t);
                            break;
                        }
                        func_02035fd0(&t);
                    }
                }
                base = func_02036378(&s) + (n << 3);
                v = func_02035dac(base);
                if (v > *(uint32_t *)(self + 0xa0)) {
                    *(uint32_t *)(self + 0xa0) = v;
                }
            }
            if (n == 0 && func_02035ff4(&s) == 0) {
                idx = 1;
            } else {
                idx = 0;
            }
            if (idx != 0) {
                func_020364ec(&s, 0);
                v = func_0201c194(data_020b93b8);
                func_020365ec(&s, v);
            }
            base = func_02036378(&s) + (n << 3);
            func_02035dbc(base, *(uint32_t *)(self + 0xa0));
            func_0201f304(data_020b93b8, r6, &s);
            func_0201f6c4(data_020b93b8, &s, idx);
            func_0201d1a4(data_020b93b8, *(uint32_t *)(self + 0x90), &x4);
            func_02036f38(&x4, 1);
            func_02036f4c(&x4, *(uint32_t *)(self + 0xa0));
            func_0201d198(data_020b93b8, *(uint32_t *)(self + 0x90), &x4);
            func_02036750(x8);
            v = func_0201b924(data_020b93b8);
            func_0201f1f0(data_020b93b8, v, x8);
            func_020369f0(x8, r6, 0, 0);
            v = func_0201b924(data_020b93b8);
            func_0201f1a8(data_020b93b8, v, x8);
            func_020367a8(x8);
            func_02035fd0(&s);
        }
    }
    {
        uint32_t a = data_020afb10[0];
        uint32_t b = data_020afb10[1];
        *(uint32_t *)(self + 0x80) = a;
        *(uint32_t *)(self + 0x84) = b;
    }
}
