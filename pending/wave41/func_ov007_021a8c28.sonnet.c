#include "ffc/types.h"

extern void func_02056c4c(void *p);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *p, uint32_t n);
extern void func_02005988(void *out, uint32_t v);
extern void *func_02033338(void *a, void *b, uint32_t *c, uint32_t d);
extern void func_020059cc(void *object);
extern void func_02033438(void *obj, uint32_t v);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
extern uint32_t data_ov007_021c4768[];

void func_ov007_021a8c28(uint8_t *self)
{
    uint8_t buf[12];
    uint32_t flag;
    uint32_t one = 1;
    void *obj;

    func_02056c4c(*(void **)(self + 0xd4));
    *(uint32_t *)(self + 0xd0) = one;
    flag = 0;
    obj = func_0205681c(0xb8);
    if (obj != 0) {
        uint32_t t = func_020159c8(data_020b8e44, 0x3b);
        func_02005988(buf, t);
        obj = func_02033338(obj, buf, (uint32_t *)(self + 0xd0), 0);
        flag = one;
    }
    if (flag != 0) {
        func_020059cc(buf);
    }
    func_02033438(obj, 1);
    func_02056bc0(self + 0x14, obj);
    *(uint32_t *)(self + 0xb8) = data_ov007_021c4768[0];
    *(uint32_t *)(self + 0xbc) = data_ov007_021c4768[1];
}
