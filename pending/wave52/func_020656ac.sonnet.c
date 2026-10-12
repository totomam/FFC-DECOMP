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

typedef struct { uint8_t v; } B;
typedef struct { uint8_t a, b; volatile uint8_t c; } L;
extern void func_02065a24(Vec *v, uint32_t x, B flag);
extern void func_02052be0(uint32_t a, uint32_t c);
extern void func_02052d10(uint32_t a, uint32_t b);
extern void *func_020659f8(void *object);

void *func_020656ac(Vec *p, uint32_t x)
{
    Vec tmp;
    L hdr;
    volatile uint8_t *vp;
    Elem *dst;
    Elem *end;
    Elem *q;


    vp = &hdr.c;
    *vp = 0;
        tmp.data = 0;
    tmp.count = 0;
    tmp.cap = 0;
    func_02065a24(&tmp, x, *(B*)vp);

    q = p->data;
    end = q + p->count;
    dst = tmp.data + tmp.count;
    while (q < end) {
        if (dst != 0) {
            uint32_t a = q->a;
            dst->a = a;
            dst->b = q->b;
            uint8_t c = q->c;
            dst->c = c;
            if (a != 0) {
                func_02052be0(a, c);
                if (dst->c) {
                    func_02052d10(dst->a, dst->b);
                }
            }
        }
        uint32_t n = tmp.count;
        q++;
        n++;
        dst++;
        tmp.count = n;
    }

    {
        Elem *t;
        uint32_t tc;
        { uint32_t *cp = &tmp.cap; tc = p->cap; p->cap = *cp; *cp = tc; }
        t = p->data; p->data = tmp.data; tmp.data = t;
        tc = p->count; p->count = tmp.count; tmp.count = tc;
    }
    return func_020659f8(&tmp);
}
