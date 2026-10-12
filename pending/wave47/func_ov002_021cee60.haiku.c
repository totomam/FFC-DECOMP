#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    int32_t key;
} Item;

typedef struct {
    Item *cur;
    uint32_t p;
    Item *end;
    uint32_t q;
} Span;

void func_ov002_021cee60(Item **out, Span a, Span b, Item *dst)
{
    Item *d = dst;

    while (a.cur != a.end && b.cur != b.end) {
        if (b.cur->key < a.cur->key) {
            d->w0 = b.cur->w0;
            d->key = b.cur->key;
            b.cur++;
        } else {
            d->w0 = a.cur->w0;
            d->key = a.cur->key;
            a.cur++;
        }
        d++;
    }

    if (a.cur == a.end) {
        Span t = b;
        while (t.cur != t.end) {
            d->w0 = t.cur->w0;
            d->key = t.cur->key;
            t.cur++;
            d++;
        }
    } else {
        Span t = a;
        while (t.cur != t.end) {
            d->w0 = t.cur->w0;
            d->key = t.cur->key;
            t.cur++;
            d++;
        }
    }
    *out = d;
}
