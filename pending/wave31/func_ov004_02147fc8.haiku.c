#include "ffc/types.h"

extern void func_020095b8(void *a, void *b);
extern void func_020218c8(void *a, void *b, uint32_t c, uint32_t d);
extern void *func_020059cc(void *object);
extern void *func_0205681c(uint32_t size);
extern void *func_ov004_021475fc(void *a, void *b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov004_02158088[];

void *func_ov004_02147fc8(void *self, void *p1, void *p2) {
    uint32_t buf[3];
    void *node;

    func_020095b8(buf, p2);
    func_020218c8(self, buf, 0, 0);
    func_020059cc(buf);
    *(uint32_t **)self = data_ov004_02158088;
    *(void **)((uint8_t *)self + 0xe8) = p1;
    node = func_0205681c(0xec);
    if (node != 0) {
        node = func_ov004_021475fc(node, *(void **)((uint8_t *)self + 0xe8));
    }
    *(void **)((uint8_t *)self + 0xec) = node;
    func_02056bc0((uint8_t *)self + 0x48, node);
    return self;
}
