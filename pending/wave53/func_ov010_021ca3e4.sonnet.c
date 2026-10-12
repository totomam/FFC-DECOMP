#include "ffc/types.h"

typedef struct { uint32_t x, y; } S;
extern void *data_020b93b8;
extern void *data_020b8e44;
extern S data_ov010_021d1e74;
extern S data_ov010_021d1e7c;

extern int func_0201f2e0(void *a, void *b);
extern void func_02021338(uint32_t x);
extern void func_0201c220(void *a, uint32_t b, uint32_t c);
extern void func_ov010_021ca934(void *self, uint32_t x);
extern uint32_t func_ov010_021ca4c4(void *obj, S s, uint32_t c);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, void *b);
extern uint32_t func_02032d24(void *a, S s, void *d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);

void func_ov010_021ca3e4(uint8_t *a, uint32_t b)
{
    uint32_t buf[3];
    S pair;
    uint32_t sp8;
    uint32_t r6;
    uint32_t r7;
    uint32_t k = 0x220;
    void *obj;
    uint8_t *p;
    uint32_t t;

    if (func_0201f2e0(data_020b93b8, a + k)) {
        func_02021338(0xb7);
        func_0201c220(data_020b93b8, 0xf, b);
        func_ov010_021ca934(a, 5);
        return;
    }

    obj = *(void **)(a + (k - 0xa4));
    r6 = 0;
    r7 = ((uint32_t (*)(void *))((*(uint32_t **)obj)[9]))(obj);
    sp8 = func_ov010_021ca4c4(*(void **)(a + (k - 0xa4)), data_ov010_021d1e74, r7);

    r7 = (uint32_t)func_0205681c(0xb0);
    if (r7) {
        void *x = func_020159c8(data_020b8e44, k - 0x70);
        func_02005988(buf, x);
        pair.x = 0x80;
        pair.y = 0x60;
        r7 = func_02032d24((void *)r7, pair, buf, 4, 0);
        r6 = 1;
    }

    obj = *(void **)(a + 0x17c);
    t = func_ov010_021ca4c4(obj, data_ov010_021d1e7c, 1);
    p = a + 0x14;
    {
        func_02056bc0(p, (void *)t);
    }
    func_02056bc0(p, (void *)r7);
    func_02056bc0(p, (void *)sp8);
    if (r6) {
        func_020059cc(buf);
    }
}
