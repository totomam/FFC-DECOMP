#include "ffc/types.h"

typedef struct {
    uint8_t b;
} Byte;

extern void func_0200d5d4(void *object, void *ptr, Byte value);
extern void func_ov002_021a47b0(void *a, void *b, void *c, void *d, void *vec, uint32_t e);
extern void func_0200d5ec(void *object);

typedef struct {
    void *data;
    uint32_t count;
    uint32_t cap;
} Vec;

typedef struct {
    uint32_t pad;
    uint32_t cur;
    uint32_t end;
} Src;

typedef struct {
    uint8_t pad;
    uint8_t b;
} Pair;

void func_ov002_021a4748(void *p0, void *p1, Src *s, void *p3, uint8_t e)
{
    Vec v;
    Pair t;
    Byte bb;

    v.data = 0;
    v.count = 0;
    v.cap = 0;

    if (s->cur != s->end) {
        if (v.count < v.cap) {
            v.count = v.count + 1;
            ((uint32_t *)v.data)[v.count - 1] = *(volatile uint32_t *)&s->end;
        } else {
            t.b = 0;
            bb.b = t.b;
            func_0200d5d4(&v, &s->end, bb);
        }
    }

    func_ov002_021a47b0(p0, p1, s, p3, &v, e);
    func_0200d5ec(&v);
}
