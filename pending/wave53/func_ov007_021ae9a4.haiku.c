#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *buf, void *p);
extern void *func_02033094(void *obj, void *buf, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void *func_020059cc(void *object);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *node);
extern void *func_02008ce8(void *obj, void *a, void *b, void *c);
extern void *func_ov007_0219b460(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void *data_020b8e44;
extern uint32_t data_ov007_021c5628[];
extern void *data_020b93b8;

void func_ov007_021ae9a4(uint8_t *p, void *arg1, void *arg2)
{
    int flag = 0;
    void *r4;
    void *n;
    void *t;
    void *v;
    void *r6;
    volatile uint32_t a;
    volatile uint32_t b;
    uint32_t buf[3];

    r4 = func_0205681c(0xa4);
    if (r4 != 0) {
        void *x;
        a = 0x80;
        b = 0x60;
        x = func_020159c8(data_020b8e44, 0x36);
        func_02005988(buf, x);
        flag = 1;
        r4 = func_02033094(r4, buf, 0, a, b, 4, 0);
    }
    if (flag) {
        func_020059cc(buf);
    }
    func_02056bc0(p + 0x48, r4);
    n = func_02056aec(r4);
    t = func_0205681c(0x94);
    if (t != 0) {
        t = func_02008ce8(t, r4, arg1, arg2);
    }
    r6 = func_ov007_0219b460(data_020b93b8, data_ov007_021c5628[0], data_ov007_021c5628[1], 1);
    v = func_0205681c(0x94);
    if (v != 0) {
        v = func_02008ce8(v, r4, arg1, arg2);
    }
    p += 0x14;
    func_02056bc0(p, v);
    func_02056bc0(p, r6);
    func_02056bc0(p, t);
    func_02056bc0(p, n);
}
