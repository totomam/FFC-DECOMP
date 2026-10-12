#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S2;

extern void *func_0203b688(void);
extern void *func_0205681c(uint32_t size);
extern uint8_t func_02036360(const void *object);
extern uint32_t func_020366d4(void *object);
extern uint32_t func_02035ff4(void *object);
extern uint32_t func_020363a4(const void *object);
extern void *func_0219a130(void *p, uint32_t f, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t g);
extern void func_020695ec(void *self, void *p);
extern void *func_02062a54(void *x);
extern uint32_t func_ov009_0219a390(void *p, uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);

void *func_ov011_021c0e1c(void *self, void *obj, S2 s1, S2 s2)
{
    void *r7 = func_0203b688();
    void *p = func_0205681c(0xb4);
    void *r4;
    uint32_t r1;

    if (p != 0) {
        uint32_t a = func_02036360(obj);
        uint32_t b = func_020366d4(obj);
        uint32_t c = (func_02035ff4(obj) == 0) ? 1 : 0;
        uint32_t d = func_020363a4(obj);
        p = func_0219a130(p, *(uint32_t *)((uint8_t *)self + 0xb8), s1.a, s1.b, a, b, c, d);
    }

    *(void **)((uint8_t *)self + 0x29c) = p;
    func_020695ec(self, p);
    r4 = func_02062a54(*(void **)(*(uint8_t **)((uint8_t *)self + 0x29c) + 0x94));
    r1 = func_ov009_0219a390(*(void **)((uint8_t *)self + 0x29c), s2.a, s2.b, s1.b);
    func_02056bc0(r7, (void *)r1);
    func_02056bc0(r7, r4);
    return r7;
}
