#include "ffc/types.h"

extern uint32_t func_020367bc(void *obj, uint32_t idx);
extern void func_02035f58(void *s);
extern void func_0201f600(void *a, uint32_t idx, void *obj, void *s);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020366d4(void *s);
extern uint32_t func_020363a4(const void *s);
typedef struct { uint32_t x, y; } S2;
extern void *func_0219a130(void *a, void *b, S2 c, uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern void func_020695ec(void *a, void *b);
extern void *func_02064aa8(const void *o);
extern void func_0205f2f0(void *o, uint32_t v);
extern void func_02035fd0(void *s);
extern void func_020692a4(void *o);
extern void *data_020b93b8;
extern S2 data_ov011_021cbb68[];

void func_ov011_021c8940(uint8_t *p)
{
    uint32_t s[24];
    uint32_t off;
    uint8_t i; uint32_t k, a, c;
    void *r7;
    uint32_t t;

    off = 0x350;
    for (i = 0; i < 5; i++) {
        if (func_020367bc(p + off, i)) {
            func_02035f58(s);
            func_0201f600(data_020b93b8, i, p + off, s);
            r7 = func_0205681c(0xb4);
            if (r7 != 0) {
                a = func_020367bc(p + off, i);
                t = func_020366d4(s);
                r7 = func_0219a130(r7, *(void **)(p + 0xb8), data_ov011_021cbb68[i], a, t, 0, func_020363a4(s));
            }
            k = i * 4;
            *(void **)(p + k + 0xfc) = r7;
            func_020695ec(p, *(void **)(p + k + 0xfc));
            if (p[off - 0x1b] != 0 || i < 3) {
                func_0205f2f0(func_02064aa8(*(void **)(*(uint8_t **)(p + k + 0xfc) + 0x94)), 1);
            } else {
                func_0205f2f0(func_02064aa8(*(void **)(*(uint8_t **)(p + k + 0xfc) + 0x94)), 0);
            }
            func_02035fd0(s);
        } else {
            r7 = func_0205681c(0xb4);
            if (r7 != 0) {
                r7 = func_0219a130(r7, *(void **)(p + 0xb8), data_ov011_021cbb68[i], 0, 0, 0, 0);
            }
            k = i * 4;
            *(void **)(p + k + 0xfc) = r7;
            func_020695ec(p, *(void **)(p + k + 0xfc));
            func_020692a4(*(void **)(p + k + 0xfc));
        }
    }
}
