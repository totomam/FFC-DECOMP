#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint8_t flag;
} FuncOvTmp;

extern void func_02056c9c(void *obj, uint32_t x);
extern void func_0209cf5c(void *p, uint32_t n, uint32_t sz, uint32_t a, uint32_t b);
extern void func_02015e8c(void *s, uint32_t v);
extern void *func_02052d90(uint32_t mar, uint32_t index);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void func_02053290(void *object);
extern uint32_t func_0203b694(uint32_t x);
extern void *func_0205681c(uint32_t size);
extern void *func_ov002_021bc564(void *obj, uint32_t p);
extern void func_02056bc0(void *object, void *node);
extern char data_ov002_021d69b8[];
extern uint32_t data_020b8e44;

void *func_ov002_021bc834(void *obj, uint32_t p1, uint32_t p2, uint32_t p3)
{
    uint8_t *self = obj;
    FuncOvTmp s;
    uint8_t *ret;
    uint32_t r6, r7, neg, i, res;

    func_02056c9c(self, 0);
    *(void **)self = data_ov002_021d69b8;
    *(uint32_t *)(self + 0x80) = p3;
    *(uint32_t *)(self + 0x84) = p1;
    func_0209cf5c(self + 0x8c, 2, 0x1c, 0x21bc829, 0x21bc991);
    *(uint32_t *)(self + 0xcc) = p2;
    *(uint32_t *)(self + 0xd0) = 0;
    func_02015e8c(&s, data_020b8e44);
    ret = func_02052d90(s.b, s.c);
    r6 = *(uint32_t *)(ret + 0x100);
    r7 = *(uint32_t *)(ret + 0xfc);
    if (s.b != 0) {
        if (s.flag) {
            func_02052d3c(s.b, s.c);
        }
        func_02052c04(s.b);
    }
    func_02053290(&s);
    *(uint32_t *)(self + 0x88) = func_0203b694(0);
    neg = -r7;
    for (i = 0; i < 2; i++) {
        void *t = func_0205681c(0x98);
        uint8_t *elem;
        if (t != 0) {
            t = func_ov002_021bc564(t, *(uint32_t *)(self + 0x84));
        }
        elem = self + 0x98 + i * 0x1c;
        *(void **)elem = t;
        *(uint32_t *)(elem + 4) = (i == *(uint32_t *)(self + 0xcc)) ? -10 : 10;
        *(uint32_t *)(elem + 8) = 0;
        if (*(uint32_t *)(self + 0xcc) == 1) {
            *(uint32_t *)(elem + 4) = *(uint32_t *)(elem + 4) + neg;
        } else {
            *(uint32_t *)(elem + 4) = *(uint32_t *)(elem + 4) + r7;
        }
        *(uint32_t *)(elem + 8) = *(uint32_t *)(elem + 8) + r6;
        func_02056bc0(*(void **)(self + 0x88), *(void **)elem);
    }
    func_02056bc0(self + 0x48, *(void **)(self + 0x88));
    res = func_0203b694(0);
    *(uint32_t *)(self + 0xd4) = res;
    func_02056bc0(self + 0x48, (void *)res);
    return self;
}
