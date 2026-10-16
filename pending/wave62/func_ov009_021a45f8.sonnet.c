#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;
extern void *func_0205681c(uint32_t n);
extern void func_ov009_021ad660(S *r, void *o, uint32_t i);
extern uint8_t func_02036360(const void *object);
extern uint32_t func_020366d4(void *object);
extern uint32_t func_02035ff4(void *object);
extern uint32_t func_020363a4(const void *object);
extern void *func_ov009_0219a130(void *p, uint32_t x, S s, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_020695ec(void *o, void *p);
void func_ov009_021a45f8(uint8_t *o, uint32_t idx, void *e)
{
    void *p = func_0205681c(0xb4);
    if (p != 0) {
        S s; func_ov009_021ad660(&s, o, idx);
        uint32_t a = func_02036360(e);
        uint32_t b = func_020366d4(e);
        uint32_t c = func_02035ff4(e) == 0;
        uint32_t d = func_020363a4(e);
        p = func_ov009_0219a130(p, *(uint32_t *)(o + 0xb8), s, a, b, c, d);
    }
    *(void **)(o + 0xec + idx * 4) = p;
    func_020695ec(o, p);
}
