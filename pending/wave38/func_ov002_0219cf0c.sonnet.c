#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } Pair;
extern void *func_02056aec(void *p);
extern void *func_02062a78(void *obj, Pair p2, Pair p1, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov002_021d3a98[];
extern Pair data_ov002_021d5030;

void func_ov002_0219cf0c(uint8_t *a)
{
    void *r6 = func_02056aec(*(void **)(a + 0x8c));
    Pair p2, p1;
    void *r0; uint8_t *n;
    p1.a = data_ov002_021d3a98[1 - *(uint32_t *)(a + 0x88)];
    p1.b = 0;
    p2.a = 0;
    p2.b = 0;
    r0 = func_02062a78(*(void **)(a + 0x8c), p2, p1, 0x28, 2);
    n = a + 0x14;
    func_02056bc0(n, r0);
    func_02056bc0(n, r6);
    *(Pair *)(a + 0x80) = data_ov002_021d5030;
}
