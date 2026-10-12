#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t n);
extern void func_02005988(void *buf, void *v);
extern void *func_020059cc(void *object);
extern void *func_02033338(void *a, void *b, void *c, uint32_t d);
extern void *func_02033438(void *a, uint32_t b);
extern void *func_ov011_021c02a8(void *obj, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
extern uint32_t data_ov011_021cb114[2];

void func_ov011_021c09c0(uint32_t *p) {
    uint32_t buf[3];
    uint32_t size;
    void *obj;
    void *node;
    uint32_t *d;
    int flag;

    p[0xcd] = 0;
    size = 0xb8;
    flag = 0;
    obj = func_0205681c(size);
    if (obj != 0) {
        void *q;
        size += 0xc8;
        q = func_020159c8(data_020b8e44, size);
        func_02005988(buf, q);
        flag = 1;
        obj = func_02033338(obj, buf, &p[0xcd], 0);
    }
    if (flag) {
        func_020059cc(buf);
    }
    obj = func_02033438(obj, 1);
    d = data_ov011_021cb114;
    node = func_ov011_021c02a8(p, d[0], d[1]);
    func_02056bc0(p + 5, obj);
    func_02056bc0(p + 5, node);
}
