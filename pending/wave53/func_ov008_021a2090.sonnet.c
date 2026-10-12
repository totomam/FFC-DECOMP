#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} PairData;

extern void func_02021338(uint32_t code);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *owner, uint32_t id);
extern void func_02005988(void *buf, void *src);
extern void *func_02033338(void *a, void *b, void *c, uint32_t d);
extern void func_020059cc(void *object);
extern void func_02033420(void *a, void *b, void *c);
extern void *func_ov008_021a2174(void *self, PairData d);
extern void *func_02062a30(void *owner);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
extern PairData data_ov008_021a8f44;

int func_ov008_021a2090(void *p)
{
    uint8_t *self = (uint8_t *)p;
    uint8_t loc18[12];
    uint8_t loc0c[12];
    uint8_t loc00[12];
    void *obj;
    void *r7;
    void *tmp;
    void *r6;
    void *r4;
    int flag;
    void *lst;

    if (self[0x13c] == 0) {
        func_02021338(0xc7);
        return 0;
    }
    obj = *(void **)(self + 0x114);
    ((void (*)(void *))((*(void ***)obj)[11]))(obj);
    *(uint32_t *)(self + 0x140) = 0;

    flag = 0;
    r7 = func_0205681c(0xb8);
    if (r7 != 0) {
        tmp = func_020159c8(data_020b8e44, 0xd0);
        func_02005988(loc18, tmp);
        flag = 1;
        r7 = func_02033338(r7, loc18, self + 0x140, 0);
    }
    if (flag) {
        func_020059cc(loc18);
    }

    tmp = func_020159c8(data_020b8e44, 0xcb);
    func_02005988(loc0c, tmp);
    tmp = func_020159c8(data_020b8e44, 0xcc);
    func_02005988(loc00, tmp);
    func_02033420(r7, loc0c, loc00);
    func_020059cc(loc00);
    func_020059cc(loc0c);

    r6 = func_ov008_021a2174(self, data_ov008_021a8f44);
    r4 = func_02062a30(*(void **)(self + 0x114));
    lst = (void *)((uint32_t)self + 0x14);
    func_02056bc0(lst, r7);
    func_02056bc0(lst, r4);
    func_02056bc0(lst, r6);
    return 1;
}
