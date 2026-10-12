#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *obj, uint32_t v);
extern uint32_t func_0204f7ec(const void *object);
extern void *func_020333ac(void *a, uint32_t b, void *c, void *d, uint32_t e);
extern void *func_020059cc(void *object);
extern void func_02033438(void *o, uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
extern void *data_0213df18;
extern uint32_t data_ov007_021c5a84[2];

void func_ov007_021afc30(uint8_t *p)
{
    uint32_t local[3];
    void *obj;
    int flag = 0;

    obj = func_0205681c(0xb8);
    if (obj != 0) {
        uint32_t v = func_020159c8(data_020b8e44, 0x10f);
        func_02005988(local, v);
        flag = 1;
        obj = func_020333ac(obj, func_0204f7ec(data_0213df18), local, p + 0x8c, 0);
    }
    if (flag) {
        func_020059cc(local);
    }
    func_02033438(obj, 1);
    func_02056bc0(p + 0x14, obj);
    uint32_t a = data_ov007_021c5a84[0];
    uint32_t b = data_ov007_021c5a84[1];
    *(uint32_t *)(p + 0x80) = a;
    *(uint32_t *)(p + 0x84) = b;
}
