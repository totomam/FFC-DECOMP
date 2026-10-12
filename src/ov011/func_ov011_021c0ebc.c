#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0203b6fc(void *a);
extern void *func_0205681c(uint32_t size);
extern uint8_t func_02036360(const void *object);
extern uint32_t func_020366d4(void *object);
extern uint32_t func_02035ff4(void *object);
extern uint32_t func_020363a4(const void *object);
extern void *func_ov009_0219a130(void *obj, void *p, Pair s, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_020695ec(void *a, void *b);
extern void *func_02056aec(void *p);
extern void *func_ov009_0219a390(void *obj, Pair t);
extern void func_02056bc0(void *object, void *node);

void *func_ov011_021c0ebc(void *a, void *b, Pair s, Pair t)
{
    void *r7 = func_0203b6fc(a);
    void *r6 = func_0205681c(0xb4);
    void *r4;
    void *r1;

    if (r6 != 0) {
        uint32_t x = func_02036360(b);
        uint32_t y = func_020366d4(b);
        uint32_t f = func_02035ff4(b) ? 0 : 1;
        uint32_t z = func_020363a4(b);
        r6 = func_ov009_0219a130(r6, *(void **)((uint8_t *)a + 0xb8), s, x, y, f, z);
    }
    func_020695ec(a, r6);
    r4 = func_02056aec(*(void **)((uint8_t *)r6 + 0x94));
    r1 = func_ov009_0219a390(r6, t);
    func_02056bc0(r7, r1);
    func_02056bc0(r7, r4);
    return r7;
}
