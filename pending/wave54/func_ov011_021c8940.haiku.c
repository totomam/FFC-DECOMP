#include "ffc/types.h"

extern uint32_t func_020367bc(void *obj, uint32_t idx);
extern void func_02035f58(void *s);
extern void func_0201f600(void *a, uint32_t idx, void *obj, void *s);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020366d4(void *s);
extern uint32_t func_020363a4(const void *s);
extern void *func_0219a130(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern void func_020695ec(void *a, void *b);
extern uint32_t func_02064aa8(const void *o);
extern void func_0205f2f0(void *o, uint32_t v);
extern void func_02035fd0(void *s);
extern void func_020692a4(void *o);
extern void *data_020b93b8;
extern uint32_t data_ov011_021cbb68[];

void func_ov011_021c8940(uint8_t *p)
{
    uint32_t s[24];
    uint32_t off;
    uint8_t i;
    void *r7;
    uint32_t t;

    off = 0x335;
    for (i = 0; i < 5; i++) {
        if (func_020367bc(p + 0x350, i)) {
            func_02035f58(s);
            func_0201f600(data_020b93b8, i, p + 0x350, s);
            r7 = func_0205681c(0xb4);
            if (r7 != 0) {
                t = func_020366d4(s);
                r7 = func_0219a130(r7, *(void **)(p + 0xb8), data_ov011_021cbb68[i * 2],
                                   data_ov011_021cbb68[i * 2 + 1],
                                   func_020367bc(p + 0x350, i), t, 0, func_020363a4(s));
            }
            *(void **)(p + 0xfc + i * 4) = r7;
            func_020695ec(p, *(void **)(p + 0xfc + i * 4));
            if (p[off] != 0 || i < 3) {
                func_02064aa8(*(void **)(*(uint8_t **)(p + 0xfc + i * 4) + 0x94));
                func_0205f2f0(*(void **)(*(uint8_t **)(p + 0xfc + i * 4) + 0x94), 1);
            } else {
                func_02064aa8(*(void **)(*(uint8_t **)(p + 0xfc + i * 4) + 0x94));
                func_0205f2f0(*(void **)(*(uint8_t **)(p + 0xfc + i * 4) + 0x94), 0);
            }
            func_02035fd0(s);
        } else {
            r7 = func_0205681c(0xb4);
            if (r7 != 0) {
                r7 = func_0219a130(r7, *(void **)(p + 0xb8), data_ov011_021cbb68[i * 2],
                                   data_ov011_021cbb68[i * 2 + 1], 0, 0, 0, 0);
            }
            *(void **)(p + 0xfc + i * 4) = r7;
            func_020695ec(p, *(void **)(p + 0xfc + i * 4));
            func_020692a4(*(void **)(p + 0xfc + i * 4));
        }
    }
}
