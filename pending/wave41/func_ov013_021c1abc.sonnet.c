#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *obj, uint32_t id);
extern void func_02005988(uint32_t *buf, uint32_t v);
extern void *func_02033338(void *obj, uint32_t *buf, uint32_t *flag, uint32_t x);
extern void func_020059cc(void *object);
extern void func_02033438(void *obj, uint32_t v);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
typedef struct { uint32_t x, y; } S;
extern S data_ov013_021c4bb0;

void func_ov013_021c1abc(uint8_t *a)
{
    uint32_t sp[3];
    int one = 1;
    int flag;
    void *obj;

    *(int *)(a + 0xcc) = one;
    flag = 0;
    obj = func_0205681c(0xb8);
    if (obj != 0) {
        uint32_t v = func_020159c8(data_020b8e44, 0x1b9);
        func_02005988(sp, v);
        flag = one;
        obj = func_02033338(obj, sp, (uint32_t *)(a + 0xcc), 0);
    }
    if (flag) {
        func_020059cc(sp);
    }
    func_02033438(obj, 1);
    func_02056bc0(a + 0x14, obj);
    *(S *)(a + 0xb8) = data_ov013_021c4bb0;
}
