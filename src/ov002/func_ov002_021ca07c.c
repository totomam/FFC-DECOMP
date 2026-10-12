#include "ffc/types.h"

extern int32_t func_ov002_021a18bc(const void *object);
extern uint32_t func_ov002_021a18c4(const void *object, uint32_t index);
extern uint32_t func_ov002_021aafd4(void);
extern uint32_t func_ov002_021aa778(const void *object);

typedef struct { uint8_t v; } Flag;
extern void func_ov002_021d2b38(void *vec, void *elem, Flag f);

typedef struct {
    uint32_t v[6];
} Arr6;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint32_t e;
    Arr6 arr;
    uint32_t last;
} Elem;

typedef struct {
    Elem *data;
    uint32_t count;
    uint32_t cap;
} Vec;

void func_ov002_021ca07c(uint32_t unused, const void *obj, Vec *out)
{
    int32_t i = 0;
    uint32_t item;
    int32_t j;
    Elem tmp;

    for (i = 0; i < func_ov002_021a18bc(obj); i++) {
        item = func_ov002_021a18c4(obj, i);
        if (func_ov002_021aafd4() != 0) {
            tmp.a = 0;
            tmp.b = 0;
            tmp.c = 0;
            tmp.d = 0;
            tmp.e = 0;
            tmp.last = 0;
            for (j = 0; j < 6; j++) {
                tmp.arr.v[j] = 0;
            }
            tmp.a = func_ov002_021aa778((const void *)item);
            if (out->count < out->cap) {
                uint32_t n = out->count + 1;
                Elem *e;
                out->count = n;
                e = &out->data[n - 1];
                e->a = tmp.a;
                e->b = tmp.b;
                e->c = tmp.c;
                e->d = tmp.d;
                e->e = tmp.e;
                *(Arr6 *)&e->arr = *(Arr6 *)&tmp.arr;
                e->last = tmp.last;
            } else {
                Flag f;
                f.v = 0;
                func_ov002_021d2b38(out, &tmp, f);
            }
        }
    }
}
