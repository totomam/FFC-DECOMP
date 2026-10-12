#include "ffc/types.h"

typedef struct { uint32_t a[6]; } B;
typedef struct { uint32_t w0, w1, w2, w3, w4; B b; uint32_t c; } E;

#define CP(d, s) \
    d.w0 = s->w0; d.w1 = s->w1; d.w2 = s->w2; d.w3 = s->w3; d.w4 = s->w4; d.b = s->b; d.c = s->c;
#define CP2(d, s) \
    d->w0 = s->w0; d->w1 = s->w1; d->w2 = s->w2; d->w3 = s->w3; d->w4 = s->w4; d->b = s->b; d->c = s->c;
#define CP3(d, t) \
    d->w0 = t.w0; d->w1 = t.w1; d->w2 = t.w2; d->w3 = t.w3; d->w4 = t.w4; d->b = t.b; d->c = t.c;
#define SW(x, y, t) CP(t, x) CP2(x, y) CP3(y, t)

void func_ov002_021d1694(E **ret, ...) {
    E **ap = (E **)&ret + 1;
    E *first, *middle, *last;
    first = *ap++;
    middle = *ap++;
    last = *ap++;

    E *next;
    E *f;
    E *saved;
    E tmp;
    E tmp2;

    if (first == middle) {
        *ret = last;
        return;
    }
    if (middle == last) {
        *ret = first;
        return;
    }
    next = middle;
    f = first;
    for (;;) {
        SW(f, next, tmp)
        f++;
        next++;
        if (next == last) {
            break;
        }
        if (f == middle) {
            middle = next;
        }
    }
    saved = f;
    if (f == middle) {
        *ret = saved;
        return;
    }
    next = middle;
    for (;;) {
        SW(f, next, tmp2)
        f++;
        next++;
        if (next == last) {
            if (f == middle) {
                break;
            }
            next = middle;
        } else if (f == middle) {
            middle = next;
        }
    }
    *ret = saved;
}
