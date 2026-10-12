#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_02056c4c(void *a);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *heap, uint32_t size);
extern void func_02005988(void *obj, void *x);
extern void *func_02032d24(void *obj, Pair s, void *c, uint32_t d, uint32_t e);
extern void *func_020059cc(void *object);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;

void func_ov013_021c25ec(uint8_t *self, uint8_t *msg)
{
    Pair sz;
    uint32_t obj[3];
    void *p;
    void *r6;
    uint32_t st;

    if (*(uint32_t *)(msg + 0xc) == 1) {
        goto c1;
    }
    if (*(uint32_t *)(msg + 0xc) != 2) {
        return;
    }
    if (*(uint32_t *)(msg + 0x10) != *(uint32_t *)(self + 0xd4)) {
        return;
    }
    func_02056c4c(*(void **)(self + 0xec));
    st = *(uint32_t *)(self + 0xf0);
    if (st == 0x1b1) {
        uint32_t zero = 0;
        int have = 0;
        p = func_0205681c(0xb0);
        r6 = p;
        if (p != 0) {
            void *x = func_020159c8(data_020b8e44, 0x1b1 + 5);
            func_02005988(obj, x);
            sz.a = 0x80;
            sz.b = 0x60;
            have = 1;
            r6 = func_02032d24(p, sz, obj, 4, zero);
        }
        if (have) {
            func_020059cc(obj);
        }
        func_02056bc0(self + 0x14, r6);
    }
    *(uint32_t *)(self + 0xf0) = 0x1b2;
    return;
c1:
    if (*(uint32_t *)(msg + 0x10) == *(uint32_t *)(self + 0xd4)) {
        func_02056c4c(*(void **)(self + 0xec));
        *(uint32_t *)(self + 0xf0) = 0x1b2;
    }
}
