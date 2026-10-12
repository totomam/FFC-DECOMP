#include "ffc/types.h"

extern uint32_t func_ov002_021aac08(const void *object);
extern uint32_t func_0205681c(uint32_t x);
extern uint32_t func_ov002_021c8664(uint32_t a, const void *b, uint32_t c);

typedef struct {
    uint8_t b;
} Small;

extern void func_0200d5d4(void *object, uint32_t *value, Small s);

typedef struct {
    uint32_t *data;
    uint32_t count;
    uint32_t cap;
} List;

void func_ov002_021c8710(List *list, const void *obj)
{
    uint32_t v;
    uint16_t id;
    uint32_t x;
    uint8_t zero = 0;

    id = *(uint16_t *)((uint8_t *)func_ov002_021aac08(obj) + 0x54);
    x = func_0205681c(8);
    v = x ? func_ov002_021c8664(x, obj, id) : x;
    if (list->count < list->cap) {
        list->count++;
        list->data[list->count - 1] = v;
        return;
    }
    {
        Small s;
        s.b = zero;
        func_0200d5d4(list, &v, s);
    }
}
