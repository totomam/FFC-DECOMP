#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *dst, uint32_t v);
extern uint32_t func_ov004_021530e0(uint32_t x);
extern void *func_ov004_02147040(void *obj, void *buf, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern uint32_t data_ov004_02157b7c[];
extern uint32_t data_ov004_02157d94[];

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_ov004_021470c4(uint8_t *self)
{
    uint32_t buf[3];
    void *obj;
    uint32_t t;
    int flag = 0;

    obj = func_0205681c(0xd8);
    if (obj != 0) {
        func_02005988(buf, data_ov004_02157b7c[3]);
        flag = 1;
        t = func_ov004_021530e0(*(uint32_t *)(self + 0x88));
        obj = func_ov004_02147040(obj, buf, *(uint32_t *)(self + 0x8c), t);
    }
    func_02056bc0(self + 0x14, obj);
    if (flag) {
        func_020059cc(buf);
    }
    *(Pair *)(self + 0x80) = *(Pair *)data_ov004_02157d94;
}
