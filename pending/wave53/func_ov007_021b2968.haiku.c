#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_02073a78(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *func_02073ac8(void *a, void *b, void *c);
extern void *func_ov001_0218dde0(void *obj, uint32_t x);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, void *b);
extern void *func_02033094(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void *func_020059cc(void *object);
extern uint32_t func_ov007_021b286c(void *self, uint32_t i);
extern uint32_t func_0201bcc0(void *a, uint32_t b, uint32_t c);
extern char data_ov007_021c6084[];
extern char data_ov007_021c608c[];
extern void *data_020b8e44;
extern void *data_020b93b8;
extern uint32_t data_ov007_021c607c[2];

void *func_ov007_021b2968(uint8_t *self)
{
    uint32_t obj[3];
    void *p;
    void *r;
    void *q;
    uint32_t flag = 0;
    uint32_t zero = 0;
    uint32_t i;
    uint32_t *g;

    p = func_0205681c(0x20);
    if (p != 0) {
        p = func_02073a78(p);
    }
    *(void **)(self + 0xb8) = p;
    func_02056bc0(self + 0x48, p);

    r = func_02073ac8(*(void **)(self + 0xb8), data_ov007_021c6084, data_ov007_021c608c);
    func_02056bc0(func_ov001_0218dde0(self, 0), r);

    q = func_0205681c(0xa4);
    if (q != 0) {
        volatile uint32_t b;
        volatile uint32_t a;
        a = 0x80;
        b = 0x60;
        func_02005988(obj, func_020159c8(data_020b8e44, 0x142));
        q = func_02033094(q, obj, zero, a, b, 4, zero);
        flag = 1;
    }
    func_02056bc0(func_ov001_0218dde0(self, 3), q);
    if (flag) {
        func_020059cc(obj);
    }

    for (i = 0; i < 0x40; i++) {
        uint32_t v = func_ov007_021b286c(self, i);
        self[0xbc + i] = (uint8_t)func_0201bcc0(data_020b93b8, 0xe, v);
    }

    g = data_ov007_021c607c;
    *(uint32_t *)(self + 0x3114) = g[0];
    *(uint32_t *)(self + 0x3118) = g[1];
    return 0;
}
