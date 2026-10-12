#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern int func_ov007_021ae604(void *self);
extern void *func_02056aec(void *self);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, int arg);
extern void func_02005988(void *dst, void *src);
extern void *func_02032d24(void *obj, Pair sz, void *c, int d, int e);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *func_ov007_021ac344(void *p);
extern void *data_020b8e44;
extern uint32_t data_ov007_021c5318[2];

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Big;

void func_ov007_021ad090(void *self)
{
    Pair sz;
    Big loc;
    void *r6;
    void *r7;
    int flag;

    if (func_ov007_021ae604(self) == 0) {
        flag = 0;
        r7 = func_02056aec(self);
        r6 = func_0205681c(0xb0);
        if (r6 != 0) {
            void *t = func_020159c8(data_020b8e44, 0x43);
            func_02005988(&loc, t);
            sz.a = 0x80;
            sz.b = 0x60;
            flag = 1;
            r6 = func_02032d24(r6, sz, &loc, 4, 0);
        }
        self = (uint8_t *)self + 0x14;
        func_02056bc0(self, r6);
        func_02056bc0(self, r7);
        if (flag) {
            func_020059cc(&loc);
        }
    } else {
        void *p = func_0205681c(0x100);
        void *q = p;
        if (p != 0) {
            q = func_ov007_021ac344(p);
        }
        func_02056bc0((uint8_t *)self + 0x14, q);
        {
            uint32_t *d = data_ov007_021c5318;
            uint32_t v0 = d[0];
            uint32_t v1 = d[1];
            *(uint32_t *)((uint8_t *)self + 0x80) = v0;
            *(uint32_t *)((uint8_t *)self + 0x84) = v1;
        }
    }
}
