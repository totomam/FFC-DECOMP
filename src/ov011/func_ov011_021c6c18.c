#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *dst, void *src);
extern void *func_02033338(void *a, void *b, void *c, uint32_t d);
extern void *func_020059cc(void *object);
extern void func_02033440(void *obj, Pair pr);
extern void *func_ov011_021c6bd0(void *obj, Pair pr);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
extern Pair data_ov011_021cb8d4;
extern Pair data_ov011_021cba74;

void func_ov011_021c6c18(uint8_t *p)
{
    uint32_t local[3];
    int cleanup = 0;
    void *r6;
    void *r4;
    uint8_t *q;

    *(uint32_t *)(p + 0xcc) = 1;
    r6 = func_0205681c(0xb8);
    if (r6 != 0) {
        void *x = func_020159c8(data_020b8e44, 0x1ab);
        func_02005988(local, x);
        cleanup = 1;
        r6 = func_02033338(r6, local, p + 0xcc, 0);
    }
    if (cleanup) {
        func_020059cc(local);
    }
    func_02033440(r6, data_ov011_021cb8d4);
    r4 = func_ov011_021c6bd0(p, data_ov011_021cba74);
    q = p + 0x14;
    func_02056bc0(q, r6);
    func_02056bc0(q, r4);
}
