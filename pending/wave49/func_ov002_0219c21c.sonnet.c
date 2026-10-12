#include "ffc/types.h"

extern uint32_t func_ov002_02198d08(uint32_t a, uint32_t b);
extern int func_ov002_0219c1c0(uint8_t *p, uint32_t idx);
extern int func_ov002_0219c5a8(uint32_t obj);
extern uint32_t func_ov002_0219c5b8(uint32_t obj, int j);
extern void func_ov002_021adac0(uint32_t a, uint32_t *acc, uint32_t *vec, uint32_t flag);
extern uint64_t func_02099edc(uint32_t x);
extern uint32_t func_02099dd8(uint64_t v);
extern int func_0209a2e0(uint32_t a, uint32_t b);
extern uint32_t func_0209af28(uint32_t a, uint32_t b);
extern uint32_t func_0209b108(uint32_t a, uint32_t b);
extern uint32_t func_0209b338(uint32_t a, uint32_t b);
extern uint32_t func_0209ab5c(void);
extern int func_ov002_0219c178(uint8_t *a, uint8_t *b);
extern uint8_t *func_ov002_0219b850(uint8_t *p);
extern uint8_t *func_ov002_02198e58(uint8_t *x);
extern uint64_t func_02099f1c(uint32_t x);
extern uint32_t func_020817c8(uint32_t first, uint32_t second);
extern uint32_t func_02081210(uint32_t object, uint32_t n);
extern void func_ov002_021bd868(uint32_t a, uint32_t b, uint32_t *c);

void func_ov002_0219c21c(uint8_t *p, uint32_t idx)
{
    struct { uint32_t p[9]; } padS;
    uint32_t sub[2];
    uint32_t acc;
    uint32_t vec50[4];
    uint32_t vec60[4];
    uint32_t vec70[4];
    int i;
    uint32_t s;
    int j;
    uint32_t k;
    uint32_t *arr = (uint32_t *)(p + 0x11c);

    if (arr[idx] == 0) {
        return;
    }
    *(uint32_t *)(p + 0xcc) = func_ov002_02198d08(*(uint32_t *)(p + 0xc4), 1 ^ *(uint32_t *)(p + 0xb8));
    if (func_ov002_0219c1c0(p, idx) == 0) {
        return;
    }

    acc = 0;
    vec70[0] = 0; vec70[1] = 0; vec70[2] = 0; vec70[3] = 0;
    sub[0] = (uint32_t)p;
    sub[1] = *(uint32_t *)(p + 0xcc);

    for (i = 0; i < 2; i++) {
        s = sub[i];
        for (j = 0; j < func_ov002_0219c5a8(s); j++) {
            uint32_t q = func_ov002_0219c5b8(s, j);
            vec60[0] = 0; vec60[1] = 0; vec60[2] = 0; vec60[3] = 0;
            func_ov002_021adac0(q, &acc, vec60, (i == 1 ? 1u : 0u));
            vec50[0] = 0; vec50[1] = 0; vec50[2] = 0; vec50[3] = 0;
            for (k = 0; k < 4; k++) {
                uint64_t v = func_02099edc(vec60[k]);
                if (func_0209a2e0(func_02099dd8(v), 0) > 0) {
                    func_0209b108(0x3f000000, func_0209af28(0x45800000, func_02099dd8(v)));
                } else {
                    func_0209b338(func_0209af28(0x45800000, func_02099dd8(v)), 0x3f000000);
                }
                vec50[k] = func_0209ab5c();
            }
            if (func_ov002_0219c178(p, p) != 0) {
                uint8_t *base = func_ov002_02198e58(func_ov002_0219b850(p));
                uint32_t x = *(uint32_t *)(base + 0x320);
                for (k = 0; k < 4; k++) {
                    uint64_t v = func_02099f1c(x);
                    uint32_t t;
                    if (func_0209a2e0(func_02099dd8(v), 0) > 0) {
                        func_0209b108(0x3f000000, func_0209af28(0x45800000, func_02099dd8(v)));
                    } else {
                        func_0209b338(func_0209af28(0x45800000, func_02099dd8(v)), 0x3f000000);
                    }
                    t = func_0209ab5c();
                    vec50[k] = func_02081210(func_020817c8(vec50[k], t), 0x64000);
                }
            }
            for (k = 0; k < 4; k++) {
                vec70[k] += vec50[k];
            }
        }
    }
    func_ov002_021bd868(arr[idx], acc, vec70);
}
