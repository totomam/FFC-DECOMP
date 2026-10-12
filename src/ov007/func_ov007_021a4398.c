#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021a2588(void *a, void *b);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, void *b);
typedef struct { uint32_t x, y; } S;
extern void *func_02033094(void *a, void *b, uint32_t c, S d, uint32_t f, uint32_t g);
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
    S pair;
    uint32_t local[3];

    r6 = func_0205681c(0xc0);
    if (r6 != 0) {
        r6 = func_ov007_021a2588(r6, self + 0xec);
    }
    *(void **)(self + 0x108) = r6;

    r7 = func_0205681c(0xa4);
    if (r7 != 0) {
        pair.x = 0x80;
        pair.y = 0x60;
        func_02005988(&local[0], func_020159c8(data_020b8e44, 0x28));
        flag = 1;
        r7 = func_02033094(r7, local, 1, pair, 4, 0);
    }

    v = *(void **)(self + 0xc8);
    func_02056bc0(v, r7);
    func_02056bc0(v, r6);

    if (flag) {
        func_020059cc(&local[0]);
    }

    *(S *)(self + 0xb8) = *(S *)data_ov007_021c41d8;
}
