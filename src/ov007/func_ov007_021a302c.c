#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02056c4c(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *p, uint32_t x);
extern void func_02005988(void *out, void *x);
extern void *func_02032d24(void *obj, Pair p, void *c, uint32_t d, uint32_t e);
extern void *func_020059cc(void *object);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
extern Pair data_ov007_021c4184;

void func_ov007_021a302c(uint8_t *self) {
    Pair sz;
    uint32_t tmp[3];
    void *r6;
    int flag;
    uint32_t zero;
    uint32_t a, b;

    func_02056c4c(*(void **)(self + 0xec));
    zero = 0;
    flag = 0;
    r6 = func_0205681c(0xb0);
    if (r6 != 0) {
        void *r1 = func_020159c8(data_020b8e44, 0x25);
        func_02005988(tmp, r1);
        sz.a = 0x80;
        sz.b = 0x60;
        flag = 1;
        r6 = func_02032d24(r6, sz, tmp, 4, zero);
    }
    if (flag) {
        func_020059cc(tmp);
    }
    func_02056bc0(self + 0x14, r6);
    *(Pair *)(self + 0xb8) = data_ov007_021c4184;
}
