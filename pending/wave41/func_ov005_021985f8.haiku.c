#include "ffc/types.h"

extern void *data_0213df20;
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203b708(int x);
extern uint32_t func_0203bf7c(int x);
extern uint32_t func_020607b0(void *obj, uint32_t a, int b, int c, int d);
extern uint32_t func_0205f904(uint32_t x);
extern uint32_t func_02056aec(void *p);

void func_ov005_021985f8(uint8_t *p) {
    uint32_t v;
    v = func_0203b708(0x1e);
    func_02056bc0(p + 0x14, (void *)v);
    if (*(uint32_t *)(p + 0x150) == 2) {
        v = func_0203bf7c(0x1e);
        func_02056bc0(p + 0x14, (void *)v);
    } else {
        uint32_t r6;
        uint32_t r;
        r6 = func_020607b0(*(void **)((uint8_t *)data_0213df20 + 0x20),
                           *(uint32_t *)(p + 0x14c) ^ 0x3f, 5, 0, 0);
        r = func_0205f904(*(uint32_t *)(p + 0x10c));
        func_02056bc0(p + 0x14, (void *)r);
        func_02056bc0(p + 0x14, (void *)r6);
    }
    v = func_02056aec(p);
    func_02056bc0(p + 0x14, (void *)v);
}
