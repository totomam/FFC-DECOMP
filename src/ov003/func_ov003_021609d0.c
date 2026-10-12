#include "ffc/types.h"

extern void func_02016448(void *s, void *x);
extern void *func_02052d90(void *mar, uint32_t index);
extern int32_t func_0209a76c(uint32_t a, uint32_t b);
extern uint32_t func_0203b708(uint32_t x);
extern uint32_t func_ov003_0215b1f8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_02056bc0(void *object, void *node);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void func_02053290(void *object);
extern void *data_020b8e44;

typedef struct {
    uint32_t w0;
    void *a;
    void *b;
    uint8_t flag;
} Tmp;

void func_ov003_021609d0(uint8_t *self, void *obj, uint32_t arg2, uint32_t arg3) {
    Tmp t;
    uint32_t r5;
    void *m;
    int32_t h;
    uint32_t r7;
    uint32_t x;
    Tmp *p;

    r5 = (uint16_t)(*(uint16_t *)(self + 0x9c) - arg3);
    if (r5 >= 0x8000) {
        r5 = (uint16_t)(0x10000 - r5);
    }

    func_02016448(&t, data_020b8e44);
    m = func_02052d90(t.a, (uint32_t)t.b);
    h = func_0209a76c(r5, *(uint16_t *)((uint8_t *)m + 0x14));
    r5 = (uint32_t)(h / 2) + 1;
    r7 = func_0203b708(r5);
    x = func_ov003_0215b1f8(arg2, *(uint16_t *)(self + 0x9c), (uint16_t)r5, 0, 2, 2, 0);
    func_02056bc0(obj, (void *)x);
    func_02056bc0(obj, (void *)r7);

    p = &t;
    if (p->a != 0) {
        if (p->flag != 0) {
            func_02052d3c(p->a, p->b);
        }
        func_02052c04(p->a);
    }
    func_02053290(p);
}
