#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;
typedef struct { uint32_t a, b, c, d; } Quad;

extern uint32_t func_ov003_021464f4(void *p, uint32_t x);
extern Pair *func_ov003_02155b40(void);
extern void func_ov003_02151788(void *obj, Pair p, Quad q);
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
            Pair *r = func_ov003_02155b40();
            p = *(Pair *)((uint8_t *)r + 8);
            q.a = *(uint32_t *)(s + 0x8c);
            q.b = *(uint32_t *)(s + 0x90);
            q.c = *(uint32_t *)(s + 0x94);
            q.d = *(uint32_t *)(s + 0x98);
            func_ov003_02151788(*(void **)(s + 0x88), p, q);
            return;
        }
        p.a = 0;
        p.b = 0;
        q.a = *(uint32_t *)(s + 0x8c);
        q.b = *(uint32_t *)(s + 0x90);
        q.c = 0x1000;
        q.d = 0x1000;
        func_ov003_02151788(*(void **)(s + 0x88), p, q);
        func_ov003_02151830(*(void **)(s + 0x88));
        return;
    }
    if (s[0x9c] != 0) {
        func_ov003_02151830(*(void **)(s + 0x88));
    }
}
