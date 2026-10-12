#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern uint32_t func_ov003_0215249c(uint32_t v);
extern uint32_t func_ov003_02152cf4(uint32_t v);
extern uint32_t *func_ov003_02153470(uint32_t v);
extern uint32_t func_ov003_0214a0f0(uint32_t a, Pair b, uint32_t d);
extern uint32_t func_ov003_0214a138(uint32_t a, Pair b, uint32_t d);
extern uint32_t func_0203b720(void);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov003_0217985c;
extern Pair data_ov003_02179864;

void func_ov003_0214a05c(uint8_t *p, uint32_t mode, void *obj, uint32_t flag)
{
    int off = 0x184;
    uint32_t *q;
    uint32_t s0, s4, r5, r6, t;
    if (mode > 1 || flag != 0) {
        return;
    }
    s0 = func_ov003_0215249c(*(uint32_t *)(p + off));
    s4 = func_ov003_02152cf4(*(uint32_t *)(p + off - 4));
    q = func_ov003_02153470(*(uint32_t *)(p + 0x9c));
    r6 = func_ov003_0214a0f0(*(uint32_t *)(p + off), data_ov003_0217985c, *q);
    q = func_ov003_02153470(*(uint32_t *)(p + 0x9c));
    r5 = func_ov003_0214a138(*(uint32_t *)(p + off - 4), data_ov003_02179864, *q);
    t = func_0203b720();
    func_02056bc0(obj, (void *)t);
    func_02056bc0(obj, (void *)r5);
    func_02056bc0(obj, (void *)r6);
    func_02056bc0(obj, (void *)s4);
    func_02056bc0(obj, (void *)s0);
}
