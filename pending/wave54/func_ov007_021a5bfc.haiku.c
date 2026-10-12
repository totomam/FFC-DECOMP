#include "ffc/types.h"

typedef struct { uint32_t w[6]; } Blk;

extern void *func_0205681c(uint32_t size);
extern void func_0206e288(void *a, void *b);
extern void func_02021338(uint32_t x);
extern void *func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *buf, void *x);
extern void *func_02033094(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_020059cc(void *object);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *object);
extern void *func_0203b750(void);
extern char data_020ac778[];
extern char data_020ac798[];
extern char data_020b8e44[];
extern uint32_t data_ov007_021c4310[];

void func_ov007_021a5bfc(uint8_t *a)
{
    uint32_t buf[3];
    Blk tmp;
    volatile uint32_t c60;
    volatile uint32_t c80;
    uint32_t i;
    uint32_t *p;
    void *obj;
    void *r;
    uint32_t *m;
    uint32_t zero;
    uint32_t flag;
    void *t;

    i = 0;
    zero = 0;
    while (i < *(uint32_t *)(a + 0xd8)) {
        obj = func_0205681c(0x30);
        if (obj != 0) {
            tmp = *(Blk *)(*(uint8_t **)(a + 0xd4) + i * 0x18);
            p = (uint32_t *)obj;
            p[2] = zero;
            p[3] = 0x100a5;
            p[0] = (uint32_t)data_020ac778;
            p[4] = tmp.w[0];
            p[5] = tmp.w[1];
            p[6] = tmp.w[2];
            p[7] = tmp.w[3];
            p[8] = tmp.w[4];
            p[9] = tmp.w[5];
            *((uint8_t *)obj + 0x28) = (uint8_t)zero;
            *((uint8_t *)obj + 0x29) = (uint8_t)zero;
            p[11] = zero;
        }
        func_0206e288(*(void **)(a + 0xec), obj);
        i++;
    }

    r = func_0205681c(0x10);
    if (r != 0) {
        m = (uint32_t *)r;
        m[2] = 0;
        m[3] = 0x100a6;
        m[0] = (uint32_t)data_020ac798;
    }
    func_0206e288(*(void **)(a + 0xec), r);
    zero = 0;
    *(uint8_t *)(a + 0xf0) = (uint8_t)zero;
    func_02021338(0x114);

    flag = 0;
    obj = func_0205681c(0xa4);
    if (obj != 0) {
        c80 = 0x80;
        c60 = 0x60;
        t = func_020159c8(*(void **)data_020b8e44, 0x2b);
        func_02005988(buf, t);
        flag = 1;
        obj = func_02033094(obj, buf, zero, c80, c60, 4, zero);
    }
    if (flag != 0) {
        func_020059cc(buf);
    }
    func_02056bc0(a + 0x48, obj);
    obj = func_02056aec(obj);
    t = func_0203b750();
    func_02056bc0(a + 0x14, t);
    func_02056bc0(a + 0x14, obj);
    *(uint32_t *)(a + 0xb8) = data_ov007_021c4310[0];
    *(uint32_t *)(a + 0xbc) = data_ov007_021c4310[1];
}
