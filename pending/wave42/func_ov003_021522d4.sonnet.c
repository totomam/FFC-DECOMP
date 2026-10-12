#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;
typedef struct { Pair a, b, c, d, e; } Quad;

extern uint32_t func_ov003_021464f4(void *p, uint32_t x);
extern Pair *func_ov003_02155b40(void);
extern void func_ov003_02151788(void *obj, Pair p, Pair q, Pair r);
extern void func_ov003_02151830(void *obj);

void func_ov003_021522d4(uint8_t *s)
{
    Quad q;
    Pair p;
    if (*(void **)(s + 0x88) == 0) {
        return;
    }
    if (func_ov003_021464f4(*(void **)(s + 0x84), 1) != 0) {
        if (s[0x9c] == 0) {
            Pair *x = func_ov003_02155b40();
            func_ov003_02151788(*(void **)(s + 0x88), *(Pair *)((uint8_t *)x + 8), *(Pair *)(s + 0x8c), *(Pair *)(s + 0x94));
            return;
        }
        p.a = 0;
        p.b = 0;
        q.a.a = 0x1000;
        q.a.b = 0x1000;
        func_ov003_02151788(*(void **)(s + 0x88), p, *(Pair *)(s + 0x8c), q.a);
        func_ov003_02151830(*(void **)(s + 0x88));
        return;
    }
    if (s[0x9c] != 0) {
        func_ov003_02151830(*(void **)(s + 0x88));
    }
}
