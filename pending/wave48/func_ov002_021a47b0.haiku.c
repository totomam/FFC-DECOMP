#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct { uint32_t *items; uint32_t count; } List;

extern uint32_t func_ov002_021c9234(uint32_t, uint32_t *, uint32_t, List *);
extern uint32_t func_02055a2c(void *, uint32_t);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov002_0219fff8(void *, uint32_t *, uint32_t);
extern uint32_t func_ov002_021a464c(void *, uint32_t);
extern uint32_t func_ov002_021a4558(void *, uint32_t, uint32_t, uint32_t);
extern uint32_t func_ov002_021c9298(uint32_t);

void func_ov002_021a47b0(void *self, void *p1, Pair *r4, uint32_t p4, List *list, uint8_t flag) {
    uint32_t arr[6];
    int k;
    uint32_t i, n;
    uint32_t v;

    for (k = 0; k < 6; k++) {
        arr[k] = 0;
    }
    arr[0] = r4->b;
    n = 1;
    for (i = 0; i < list->count; i++) {
        v = list->items[i];
        if (r4->b != v) {
            arr[n++] = v;
        }
    }
    func_02056bc0(p1, (void *)func_02055a2c(*(void **)((uint8_t *)self + 0xf0),
                                             func_ov002_021c9234(0, arr, 1, list)));
    func_02056bc0(p1, (void *)func_ov002_0219fff8(self, arr, 0x20));
    func_02056bc0(p1, (void *)func_ov002_021a464c(self, 1));
    func_02056bc0(p1, (void *)func_ov002_021a4558(self, r4->a, r4->b, p4));
    func_02056bc0(p1, (void *)func_02055a2c(*(void **)((uint8_t *)self + 0xf0),
                                             func_ov002_021c9298(0)));
    if (flag) {
        func_02056bc0(p1, (void *)func_ov002_0219fff8(self, arr, 0));
    }
    func_02056bc0(p1, (void *)func_ov002_021a464c(self, 0));
}
