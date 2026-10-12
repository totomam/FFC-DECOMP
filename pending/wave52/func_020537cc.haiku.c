#include "ffc/types.h"

typedef struct { uint32_t w[4]; } Elem;
typedef struct { Elem *data; uint32_t size; uint32_t cap; } Buf;
typedef struct { Elem *begin; uint32_t count; uint32_t x; } Span;
typedef struct { uint32_t a, b, c; } Tri;
typedef union { uint32_t w; uint8_t b[4]; } Word;

extern void func_020535b0(Span *s, Elem v);
extern void func_02053b64(Span *s, Buf *b);
extern void func_02053d60(Buf *b, uint32_t value);
extern void *func_02053d78(void *object);

void func_020537cc(Buf *self, Elem v)
{
    Tri t;
    Span s;
    Word flag;
    Elem *e;
    Elem *end;

    func_020535b0(&s, v);
    func_02053b64(&s, self);
    e = s.begin;
    end = s.begin + s.count;
    for (; e != end; e++) {
        if (self->size < self->cap) {
            if (self->data + self->size) {
                Elem *d = self->data + self->size;
                d->w[0] = e->w[0];
                d->w[1] = e->w[1];
                d->w[2] = e->w[2];
                d->w[3] = e->w[3];
            }
            self->size++;
        } else {
            flag.b[0] = 0;
            func_02053d60(self, flag.w);
        }
    }
    func_02053d78(&t);
    func_02053d78(&s);
}
