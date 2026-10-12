#include "ffc/types.h"

typedef struct { uint8_t a; } B2;
typedef struct { uint8_t x; B2 y; } O;
extern void func_0200d5d4(void *list, uint32_t *val, B2 flag);
extern void func_ov005_02198ab0(void *p);
extern void func_ov005_021985f8(void *p);

typedef struct {
    uint32_t *data;
    uint32_t count;
    uint32_t cap;
} List;

void func_ov008_0219d0bc(void *p) {
    uint8_t *a = (uint8_t *)p;
    int i;
    if (*(uint32_t *)(a + 0x154) != 1) return;
    for (i = 0; i < 0x40; i++) {
        uint8_t *q = a + i;
        if (q[0xbc] != 0) {
            List *list;
            uint32_t val;
            q[0xbc] = 0;
            val = i;
            list = *(List **)(a + 0x158);
            if (list->count < list->cap) {
                uint32_t n = ++list->count;
                *(list->data + n - 1) = val;
            } else {
                O t;
                t.y.a = 0;
                func_0200d5d4(list, &val, t.y);
            }
        }
    }
    a[0x104] = 0;
    func_ov005_02198ab0(a);
    func_ov005_021985f8(a);
}
