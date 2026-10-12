#include "ffc/types.h"

extern void func_0200d5d4(void *object, uint32_t *p, uint32_t value);
extern void func_ov005_02198ab0(void *self);
extern void func_ov005_021985f8(void *self);

typedef struct {
    uint32_t *items;
    uint32_t count;
    uint32_t cap;
} List;

void func_ov007_021af390(uint8_t *a)
{
    uint8_t i;
    if (*(uint32_t *)(a + 0x154) != 1) {
        return;
    }
    for (i = 0; i < 8; i++) {
        if (a[i + 0xbc] != 0) {
            uint32_t v = i;
            uint32_t pad;
            List *l;
            a[i + 0xbc] = 0;
            l = *(List **)(a + 0x158);
            if (l->count < l->cap) {
                l->count++;
                l->items[l->count - 1] = v;
            } else {
                *(uint8_t *)&pad = 0;
                func_0200d5d4(l, &v, pad);
            }
        }
    }
    a[0x104] = 0;
    func_ov005_02198ab0(a);
    func_ov005_021985f8(a);
}
