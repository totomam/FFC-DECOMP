#include "ffc/types.h"

extern void *func_0203b688(void *a, void *b);
extern void *func_020655b8(void *x);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *x);
typedef struct { uint32_t x, y; } P;
extern void *func_ov007_0219c3b8(void *a, P p, void *c);
extern uint8_t data_ov007_021c2c40[];
extern P data_ov007_021c2e9c;

void *func_ov007_0219c308(void *a, void *b, void *c)
{
    void *r6;
    uint32_t i;
    void **p1;
    void **p2;
    void **slot;
    uint8_t *ent;
    int keep;

    r6 = func_0203b688(a, b);
    p1 = (void **)((uint8_t *)a + 0xac);
    p2 = (void **)((uint8_t *)a + 0xb4);
    for (i = 0; i < 3; i++) {
        ent = data_ov007_021c2c40 + (i << 4);
        if (ent[4] != 0) {
            slot = p2 + (int8_t)ent[5];
        } else {
            slot = p1 + (int8_t)ent[5];
        }
        keep = 1;
        if (*((int8_t *)c + (uint32_t)ent + 8) == 0) {
            keep = 0;
        }
        if (*slot != 0) {
            func_02056bc0(r6, func_020655b8(*slot));
            if (keep == 0) {
                func_02056bc0(r6, func_02056aec(*slot));
                *slot = 0;
            }
        }
    }
    *(void **)((uint8_t *)a + 0xe4) = r6;
    *(void **)((uint8_t *)a + 0xe8) = c;
    func_02056bc0(r6, func_ov007_0219c3b8(a, data_ov007_021c2e9c, c));
    return r6;
}
