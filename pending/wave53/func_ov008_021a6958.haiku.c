#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t id);
extern void *func_02031624(void *a, void *b, Pair c, uint32_t d, uint32_t e, uint32_t f);
extern void *func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *a, void *b);
extern void func_02031754(void *a, uint32_t b, void *c);
extern void func_020059cc(void *obj);
extern void *func_02062a30(void *owner);
extern void *func_ov008_021a6a30(void *a, Pair b);
extern void func_02056bc0(void *obj, void *node);
extern Pair data_ov008_021a8fb8;
extern void *data_020b8e44;
extern Pair data_ov008_021a9238;

void func_ov008_021a6958(uint8_t *p) {
    uint32_t off;
    uint8_t *n;
    void *r4;
    void *r6;
    void *r7;
    void *ret;
    void **vt;
    uint32_t s1[3];
    uint32_t s2[3];

    off = 0x104;
    if (p[off] == -1) {
        return;
    }
    vt = *(void ***)(*(void **)(p + 0xe0));
    ((void (*)(void *))vt[11])(*(void **)(p + 0xe0));
    *(uint32_t *)(p + 0xf0) = 0;
    off += 0x14;
    r4 = func_0205681c(off);
    if (r4 != 0) {
        r4 = func_02031624(r4, p + 0xf0, data_ov008_021a8fb8, 0, 0, 0);
    }
    ret = func_020159c8(data_020b8e44, 0x179);
    func_02005988(s1, ret);
    func_02031754(r4, 1, s1);
    func_020059cc(s1);
    ret = func_020159c8(data_020b8e44, 0xd9);
    func_02005988(s2, ret);
    func_02031754(r4, (uint32_t)-2, s2);
    func_020059cc(s2);
    r6 = func_02062a30(*(void **)(p + 0xe0));
    r7 = func_ov008_021a6a30(p, data_ov008_021a9238);
    n = p + 0x14;
    func_02056bc0(n, r4);
    func_02056bc0(n, r7);
    func_02056bc0(n, r6);
}
