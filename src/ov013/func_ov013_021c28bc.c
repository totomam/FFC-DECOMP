#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t w;
    uint32_t h;
} Size;

extern void func_02056c4c(uint32_t x);
extern void *func_0205681c(uint32_t x);
extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern void func_02005988(void *obj, uint32_t v);
extern void *func_02032d24(void *a, Size s, void *d, uint32_t e, uint32_t f);
extern void *func_020059cc(void *object);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020b8e44;
extern Pair data_ov013_021c4e8c;

void func_ov013_021c28bc(uint8_t *p)
{
    Size sz;
    uint32_t buf[3];
    uint32_t r7;
    void *r6;
    int r4;

    func_02056c4c(*(uint32_t *)(p + 0xec));
    r7 = 0;
    r4 = 0;
    r6 = func_0205681c(0xb0);
    if (r6 != 0) {
        uint32_t v = func_020159c8(data_020b8e44, 0x1b5);
        func_02005988(buf, v);
        sz.w = 0x80;
        sz.h = 0x60;
        r4 = 1;
        r6 = func_02032d24(r6, sz, buf, 4, r7);
    }
    if (r4) {
        func_020059cc(buf);
    }
    func_02056bc0(p + 0x14, r6);
    *(Pair *)(p + 0xb8) = data_ov013_021c4e8c;
}
