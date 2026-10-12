#include "ffc/types.h"

extern void *func_0205681c(uint32_t idx);
extern void *func_02031624(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *dst, void *src);
extern void func_02031754(void *a, uint32_t b, void *c);
extern void func_020059cc(void *o);
extern void *func_02062a30(void *owner);
extern void *func_ov008_021a04d8(void *p, uint32_t a, uint32_t b);
extern void func_02056bc0(void *o, void *node);
extern uint32_t data_ov008_021a8558[2];
extern void *data_020b8e44;
extern uint32_t data_ov008_021a87b8[2];

void func_ov008_021a03fc(uint8_t *p) {
    uint32_t idx = 0x103;
    void *obj;
    void *r4;
    void *r6;
    void *r7;
    uint32_t bufA[3];
    uint32_t bufB[3];
    void **vt;
    int k;

    if (p[idx] != -1) {
        obj = *(void **)(p + 0xe0);
        vt = *(void ***)obj;
        ((void (*)(void *))vt[11])(obj);

        *(void **)(p + 0xfc) = 0;
        idx += 0x15;
        r4 = func_0205681c(idx);
        if (r4 != 0) {
            r4 = func_02031624(r4, p + 0xfc, data_ov008_021a8558[0], data_ov008_021a8558[1], 0, 0, 0);
        }

        r6 = func_020159c8(data_020b8e44, 0x179);
        func_02005988(bufA, r6);
        func_02031754(r4, 1, bufA);
        func_020059cc(bufA);

        k = 0xd9;
        r6 = func_020159c8(data_020b8e44, k);
        func_02005988(bufB, r6);
        func_02031754(r4, k - 0xdb, bufB);
        func_020059cc(bufB);

        obj = *(void **)(p + 0xe0);
        r6 = func_02062a30(obj);
        r7 = func_ov008_021a04d8(p, data_ov008_021a87b8[0], data_ov008_021a87b8[1]);
        p += 0x14;
        func_02056bc0(p, r4);
        func_02056bc0(p, r7);
        func_02056bc0(p, r6);
    }
}
