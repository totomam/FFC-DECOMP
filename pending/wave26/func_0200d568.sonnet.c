#include "ffc/types.h"

extern void func_0200d5d4(void *object, void *value, uint32_t extra);

typedef struct {
    uint32_t a;
    uint32_t val;
    uint32_t *data;
    uint32_t size;
    uint32_t cap;
} func_0200d568_obj;

void func_0200d568(func_0200d568_obj *s, uint32_t delta)
{
    uint8_t z = 0;
    s->val += delta;
    if (s->size < s->cap) {
        uint32_t n = s->size;
        s->size = n + 1;
        s->data[n] = s->val;
        return;
    }
    func_0200d5d4((void *)&s->data, (void *)&s->val, z);
}
