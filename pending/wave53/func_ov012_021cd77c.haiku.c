#include "ffc/types.h"

typedef struct { uint32_t a, b, c; } Vec3;
typedef struct { uint32_t a, b; } Pair;

extern void *func_0205681c(uint32_t idx);
extern void *func_02031624(void *a, void *b, Pair s, uint32_t e, uint32_t f, uint32_t g);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *dst, void *src);
extern void func_02031754(void *a, int32_t b, void *c);
extern void func_020059cc(void *o);
extern void *func_02062a30(void *owner);
extern void *func_ov012_021cd858(void *p, Pair s);
extern void func_02056bc0(void *o, void *n);
extern Pair data_ov012_021d3878;
extern void *data_020b8e44;
extern Pair data_ov012_021d3ba0;

void func_ov012_021cd77c(uint8_t *p) {
    int32_t off = 0x10e;
    void *obj, *r4, *r6, *r7, *x;
    uint8_t *q;
    uint32_t k;
    Vec3 v1, v2;
    if (*(int16_t *)(p + off) == -1) return;
    obj = *(void **)(p + 0xe4);
    ((void (*)(void *))((void **)*(void **)obj)[0x2c / 4])(obj);
    *(uint32_t *)(p + 0xf0) = 0;
    off += 0xa;
    x = func_0205681c(off);
    r4 = x;
    if (x != 0) {
        r4 = func_02031624(x, p + 0xf0, data_ov012_021d3878, 0, 0, 0);
    }
    func_02005988(&v1, func_020159c8(data_020b8e44, 0x179));
    func_02031754(r4, 1, &v1);
    func_020059cc(&v1);
    k = 0xd9;
    func_02005988(&v2, func_020159c8(data_020b8e44, k));
    k -= 0xdb;
    func_02031754(r4, k, &v2);
    func_020059cc(&v2);
    r6 = func_02062a30(*(void **)(p + 0xe4));
    r7 = func_ov012_021cd858(p, data_ov012_021d3ba0);
    q = p + 0x14;
    func_02056bc0(q, r4);
    func_02056bc0(q, r7);
    func_02056bc0(q, r6);
}
