#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint8_t c;
} Elem;

typedef struct {
    Elem *data;
    uint32_t count;
    uint32_t cap;
} Vec;

extern void func_02065a24(Vec *v, uint32_t x, uint32_t flag);
extern void func_02052be0(uint32_t a, uint32_t c);
extern void func_02052d10(uint32_t a, uint32_t b);
extern void *func_020659f8(void *object);

void *func_020656ac(Vec *p, uint32_t x)
{
    Vec tmp;
    struct { uint16_t h; volatile uint8_t f; uint8_t g; } hdr;

    uint8_t flag;
    Elem *q;
    Elem *end;
    Elem *dst;


    hdr.f = 0;
    flag = hdr.f;
    tmp.data = 0;
    tmp.count = 0;
    tmp.cap = 0;
    func_02065a24(&tmp, x, flag);

    q = p->data;
    end = q + p->count;
    dst = tmp.data + tmp.count;
    while (q < end) {
        if (dst != 0) {
            dst->a = q->a;
            dst->b = q->b;
            dst->c = q->c;
            if (q->a != 0) {
                func_02052be0(q->a, q->c);
                if (dst->c) {
                    func_02052d10(dst->a, dst->b);
                }
            }
        }
        tmp.count++;
        dst++;
        q++;
    }

    {
        Elem *t;
        uint32_t tc;
        t = p->data; p->data = tmp.data; tmp.data = t;
        tc = p->count; p->count = tmp.count; tmp.count = tc;
        tc = p->cap; p->cap = tmp.cap; tmp.cap = tc;
    }
    return func_020659f8(&tmp);
}
