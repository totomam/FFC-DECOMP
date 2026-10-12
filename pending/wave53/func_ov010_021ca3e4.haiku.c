#include "ffc/types.h"

extern void *data_020b93b8;
extern void *data_020b8e44;
extern uint32_t data_ov010_021d1e74[];
extern uint32_t data_ov010_021d1e7c[];

extern int func_0201f2e0(void *a, void *b);
extern void func_02021338(uint32_t x);
extern void func_0201c220(void *a, uint32_t b, uint32_t c);
extern void func_ov010_021ca934(void *self, uint32_t x);
extern uint32_t func_ov010_021ca4c4(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, void *b);
extern void func_02005988(void *a, void *b);
extern uint32_t func_02032d24(void *a, uint32_t b, uint32_t c, void *d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);

void func_ov010_021ca3e4(uint8_t *a, uint32_t b)
{
    uint32_t buf[3];
    volatile uint32_t pair[2];
    uint32_t sp8;
    uint32_t r6;
    uint32_t r7;
    uint32_t k;
    void *obj;

    k = 0x22;
    k = k << 4;

    if (func_0201f2e0(data_020b93b8, a + k)) {
        func_02021338(0xb7);
        func_0201c220(data_020b93b8, 0xf, b);
        func_ov010_021ca934(a, 5);
        return;
    }

    obj = *(void **)(a + k - 0xa4);
    r6 = 0;
    r7 = ((uint32_t (*)(void *))((*(uint32_t **)obj)[9]))(obj);
    sp8 = func_ov010_021ca4c4(*(void **)(a + k - 0xa4), data_ov010_021d1e74[0], data_ov010_021d1e74[1], r7);

    r7 = (uint32_t)func_0205681c(0xb0);
    if (r7) {
        void *x = func_020159c8(data_020b8e44, a + k - 0x70);
        func_02005988(buf, x);
        pair[0] = 0x80;
        pair[1] = 0x60;
        r7 = func_02032d24((void *)r7, pair[0], pair[1], buf, 4, 0);
        r6 = 1;
    }

    obj = *(void **)(a + 0x17c);
    {
        uint32_t t = func_ov010_021ca4c4(obj, data_ov010_021d1e7c[0], data_ov010_021d1e7c[1], 1);
        func_02056bc0(a + 0x14, (void *)t);
    }
    func_02056bc0(a + 0x14, (void *)r7);
    func_02056bc0(a + 0x14, (void *)sp8);
    if (r6) {
        func_020059cc(buf);
    }
}
