#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *obj, uint32_t v);
extern void func_02005988(void *obj, uint32_t v);
extern void *func_02033338(void *a, void *b, void *c, uint32_t d);
extern void *func_020059cc(void *object);
extern void func_02033438(void *a, uint32_t b);
typedef struct { uint32_t a, b; } P;
extern uint32_t func_ov011_021c02a8(void *self, P p);
extern uint32_t func_ov011_021c2828(void *self, P p, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
extern P data_ov011_021cb1cc;
extern P data_ov011_021cb1d4;

void func_ov011_021c2870(uint8_t *self, uint32_t param)
{
    uint32_t local[3];
    void *r6;
    uint32_t r4;
    uint32_t r7;
    uint8_t *s;

    *(void **)(self + 0x334) = 0;
    r4 = 0;
    r6 = func_0205681c(0xb8);
    if (r6 != 0) {
        uint32_t v = func_020159c8(data_020b8e44, 0xb8 + 0xf2);
        func_02005988(local, v);
        r4 = 1;
        r6 = func_02033338(r6, local, self + 0x334, 0);
    }
    if (r4 != 0) {
        func_020059cc(local);
    }
    func_02033438(r6, 1);
    r4 = func_ov011_021c02a8(self, data_ov011_021cb1cc);
    r7 = func_ov011_021c2828(self, data_ov011_021cb1d4, param);
    s = self + 0x14;
    func_02056bc0(s, r6);
    func_02056bc0(s, (void *)r7);
    func_02056bc0(s, (void *)r4);
}
