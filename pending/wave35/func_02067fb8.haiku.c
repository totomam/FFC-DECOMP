#include "ffc/types.h"

typedef struct {
    uint32_t w[4];
} E;

typedef struct {
    E *data;
    int32_t count;
} V;

E *func_02067fb8(V *v, E *p)
{
    E *end = v->data + v->count;
    E *d = p;
    if (end - p - 1 != 0) {
        E *s = p + 1;
        while (s < end) {
            d->w[0] = s->w[0];
            d->w[1] = s->w[1];
            d->w[2] = s->w[2];
            d->w[3] = s->w[3];
            s++;
            d++;
        }
    }
    v->count = v->count - 1;
    return p;
}
