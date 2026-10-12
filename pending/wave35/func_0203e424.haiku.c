#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t x);
extern uint32_t func_ov003_02146494(void);
extern uint32_t func_ov003_021464f4(uint32_t a, uint32_t b);
extern uint32_t func_02056aec(uint8_t *p);
extern uint32_t func_0203e488(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020aef10[];

void func_0203e424(uint8_t *p) {
    uint32_t a;
    uint32_t v;
    uint32_t node;
    uint32_t x;
    uint32_t r;
    uint32_t *q;

    func_020424e0(*(uint32_t *)(p + 0x88));
    a = func_ov003_02146494();
    v = func_020424e0(*(uint32_t *)(p + 0x88));
    *(uint32_t *)(p + 0xb8) = func_ov003_021464f4(v, *(uint32_t *)(((uint8_t *)a) + 0xb0));
    node = func_02056aec(p);
    x = func_020424e0(*(uint32_t *)(p + 0x88));
    q = data_020aef10;
    r = func_0203e488(x, *q++, *q++, 0, 0);
    p = p + 0x14;
    func_02056bc0(p, (void *)r);
    func_02056bc0(p, (void *)node);
}
