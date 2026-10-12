#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_ov007_021ab440(void *self);
extern void *func_0205681c(uint32_t size);
extern uint32_t data_020b8e44;
extern void *func_020159c8(uint32_t obj, uint32_t id);
extern void func_02005988(void *out, void *src);
extern void *func_02032d24(void *obj, Pair p, void *c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void func_020059cc(void *object);
extern Pair data_ov007_021c4ec0;

void func_ov007_021ab36c(void *self)
{
    uint32_t buf[3]; Pair sz;
    void *node;
    uint32_t zero;
    int flag;

    func_ov007_021ab440(self);
    zero = 0;
    flag = 0;
    node = func_0205681c(0xb0);
    if (node != 0) {
        void *src = func_020159c8(data_020b8e44, 0x5f);
        func_02005988(&buf[0], src);
        sz.a = 0x80;
        sz.b = 0x60;
        flag = 1;
        node = func_02032d24(node, sz, &buf[0], 4, zero);
    }
    func_02056bc0((uint8_t *)self + 0x14, node);
    if (flag != 0) {
        func_020059cc(&buf[0]);
    }
    *(Pair *)((uint8_t *)self + 0xb0) = data_ov007_021c4ec0;
}
