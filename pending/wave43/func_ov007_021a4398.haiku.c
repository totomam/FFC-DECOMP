#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021a2588(void *a, void *b);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, void *b);
extern void *func_02033094(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *data_020b8e44;
extern uint32_t data_ov007_021c41d8[2];

void func_ov007_021a4398(uint8_t *self)
{
    void *r6;
    void *r7;
    void *v;
    int flag = 0;
    uint32_t pair[2];
    uint32_t local[3];

    r6 = func_0205681c(0xc0);
    if (r6 != 0) {
        r6 = func_ov007_021a2588(r6, self + 0xec);
    }
    *(void **)(self + 0x108) = r6;

    r7 = func_0205681c(0xa4);
    if (r7 != 0) {
        pair[0] = 0x80;
        pair[1] = 0x60;
        func_02005988(local, func_020159c8(data_020b8e44, 0x28));
        r7 = func_02033094(r7, local, 1, pair[0], pair[1], 4, 0);
        flag = 1;
    }

    v = *(void **)(self + 0xc8);
    func_02056bc0(v, r7);
    func_02056bc0(v, r6);

    if (flag) {
        func_020059cc(local);
    }

    {
        uint32_t a = data_ov007_021c41d8[0];
        uint32_t b = data_ov007_021c41d8[1];
        *(uint32_t *)(self + 0xb8) = a;
        *(uint32_t *)(self + 0xbc) = b;
    }
}
