#include "ffc/types.h"

typedef void (*VFn)(void *);

extern void *data_0213e098;
extern uint32_t data_ov013_021c42e0[];
extern void *data_020b8e44;
extern uint32_t data_ov013_021c42e8[];

extern void func_02055050(void *a, int b);
extern void func_02056bf4(void *a);
extern void func_02056858(void *a);
extern void *func_ov013_021be2dc(void *self, uint32_t a, uint32_t b);
extern void *func_0206cbf4(void *a);
extern void func_02056bc0(void *obj, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, uint32_t b);
extern void *func_02032d24(void *a, uint32_t b, uint32_t c, void *d, uint32_t e, uint32_t f);
extern void func_020059cc(void *a);

void func_ov013_021be31c(void *self)
{
    void **w = (void **)self;
    void *p;
    void *r6;
    uint32_t i;
    uint32_t buf[3];
    uint32_t sp14[2];
    int flag;

    func_02055050(data_0213e098, 2);
    if (w[0x46] != 0) {
        func_02056bf4(&w[0x12]);
        p = w[0x46];
        if (p != 0) {
            ((VFn *)(*(void **)p))[1](p);
        }
        w[0x46] = 0;
    }
    if (w[0x3f] != 0) {
        func_02056bf4(&w[0x12]);
        p = w[0x3f];
        if (p != 0) {
            ((VFn *)(*(void **)p))[1](p);
        }
        w[0x3f] = 0;
    }

    i = 0;
    if ((uint32_t)w[0x49] > 0) {
        do {
            uint32_t *e = (uint32_t *)w[0x48] + i * 7;
            func_02056858((void *)e[5]);
            func_02056858((void *)e[6]);
            i++;
        } while (i < (uint32_t)w[0x49]);
    }

    w[0x49] = 0;

    r6 = func_ov013_021be2dc(self, data_ov013_021c42e0[0], data_ov013_021c42e0[1]);

    func_02056bc0(&w[5], func_0206cbf4(w[0x3d]));
    func_02056bc0(&w[5], r6);

    r6 = func_0205681c(0xb0);
    flag = 0;
    if (r6 != 0) {
        func_02005988(buf, func_020159c8(data_020b8e44, 0x124 + 0x97));
        sp14[0] = 0x80;
        sp14[1] = 0x60;
        r6 = func_02032d24(r6, sp14[0], sp14[1], buf, 4, 0);
        flag = 1;
    }
    func_02056bc0(&w[5], r6);
    if (flag) {
        func_020059cc(buf);
    }

    w[0x2e] = (void *)data_ov013_021c42e8[0];
    w[0x2f] = (void *)data_ov013_021c42e8[1];
}
