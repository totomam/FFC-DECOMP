#include "ffc/types.h"

extern void func_0200d5d4(void *object, uint32_t value);
extern void func_ov005_02198ab0(void *p);
extern void func_ov005_021985f8(void *p);

typedef struct {
    uint32_t *data;
    uint32_t count;
    uint32_t cap;
} List;

void func_ov008_0219d0bc(void *p) {
    uint8_t *a = (uint8_t *)p;
    uint32_t i;
    uint32_t val;
    uint8_t buf[4];
    if (*(uint32_t *)(a + 0x154) != 1) {
        return;
    }
    for (i = 0; i < 0x40; i++) {
        if (a[0xbc + i] != 0) {
            List *list;
            a[0xbc + i] = 0;
            val = i;
            list = *(List **)(a + 0x158);
            if (list->count < list->cap) {
                list->data[list->count] = val;
                list->count++;
            } else {
                buf[1] = 0;
                func_0200d5d4(list, *(uint32_t *)buf);
            }
        }
    }
    a[0x104] = 0;
    func_ov005_02198ab0(a);
    func_ov005_021985f8(a);
}
