#include "ffc/types.h"

extern uint32_t func_ov002_021aa11c(const void *object, uint32_t bit);
extern void func_ov002_021c8e10(void *out, uint32_t idx, int8_t b, uint32_t w);
extern void func_ov002_021ad234(void *list, void *item, uint32_t w);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Item;

typedef struct {
    Item *data;
    uint32_t count;
    uint32_t cap;
} List;

void func_ov002_021aa09c(uint8_t *obj, List *list)
{
    uint32_t *p;
    uint8_t z;
    uint32_t i;
    Item item;

    p = (uint32_t *)&p;
    p = p - 1;
    for (i = 1; i < 13; i++) {
        if (i == 1) {
            continue;
        }
        if (func_ov002_021aa11c(obj, i) == 0) {
            continue;
        }
        func_ov002_021c8e10(&item, i, (int8_t)obj[8 + i],
                            *(uint32_t *)(obj + 0x18 + i * 4));
        if (list->count < list->cap) {
            if (&list->data[list->count] != 0) {
                list->data[list->count] = item;
            }
            list->count++;
        } else {
            *(uint8_t *)&z = 0;
            *(uint8_t *)p = *(uint8_t *)&z;
            func_ov002_021ad234(list, &item, *p);
        }
    }
}
