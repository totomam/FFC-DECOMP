#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *heap, uint32_t size);
extern void func_02005988(void *buf, void *src);
extern void *func_02033338(void *obj, void *buf, void *arg, int zero);
extern void func_020059cc(void *object);
extern void func_02033438(void *obj, int v);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
extern uint32_t data_ov013_021c4eb4[2];

void func_ov013_021c3438(uint8_t *p)
{
    uint32_t buf[3];
    int flag;
    void *obj;
    int one;

    one = 1;
    *(int *)(p + 0x94) = one;
    flag = 0;
    obj = func_0205681c(0xb8);
    if (obj) {
        void *h = func_020159c8(data_020b8e44, 3);
        func_02005988(buf, h);
        flag = one;
        obj = func_02033338(obj, buf, p + 0x94, 0);
    }
    if (flag) {
        func_020059cc(buf);
    }
    func_02033438(obj, 1);
    func_02056bc0(p + 0x14, obj);
    {
        typedef struct { uint32_t a, b; } S;
        S v = *(S *)data_ov013_021c4eb4;
        *(S *)(p + 0x80) = v;
    }
}
