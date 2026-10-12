#include "ffc/types.h"

typedef struct { uint32_t x; uint32_t y; } Pair;

extern void func_ov003_02168890(void *a);
extern void func_ov003_0216898c(void *a);
extern uint32_t func_02056aec(void *a);
extern uint32_t func_0203efc8(uint32_t a, Pair b);
extern uint32_t func_ov003_0215b394(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern uint32_t func_0203b75c(uint32_t a);
extern uint32_t func_020424e0(uint32_t a);
extern uint32_t func_ov003_0214c18c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_0209e078;
extern Pair data_ov003_0217b21c;

void func_ov003_02168a6c(uint8_t *a)
{
    uint32_t r4, r6, r7, t, u;
    uint8_t *obj;

    func_ov003_02168890(a);
    func_ov003_0216898c(a);
    if (*(uint32_t *)(a + 0x94) == 0) {
        *(uint32_t *)(a + 0x94) = data_0209e078;
    }
    r4 = func_02056aec(a);
    r6 = func_0203efc8(*(uint32_t *)(a + 0xa4), data_ov003_0217b21c);
    r7 = func_ov003_0215b394(*(uint32_t *)(a + 0x98), 1, 1, 0x1000, 0, 0, 0);
    t = func_0203b75c(1);
    u = func_020424e0(*(uint32_t *)(a + 0x80));
    u = func_ov003_0214c18c(u, *(uint32_t *)(a + 0x98), *(uint32_t *)(a + 0xa0), *(uint32_t *)(a + 0x88),
                            *(uint32_t *)(a + 0x8c), *(uint32_t *)(a + 0x94));
    obj = a + 0x14;
    func_02056bc0(obj, (void *)u);
    func_02056bc0(obj, (void *)t);
    func_02056bc0(obj, (void *)r7);
    func_02056bc0(obj, (void *)r6);
    func_02056bc0(obj, (void *)r4);
}
