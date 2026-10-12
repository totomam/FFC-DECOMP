#include "ffc/types.h"
typedef struct { uint32_t a; int16_t b; uint16_t c; } Item;
typedef struct { uint8_t x; } B;
typedef struct {
    uint8_t pad[0x1c];
    uint32_t field;
    uint8_t pad2[0x34 - 0x20];
    Item *buf;
    uint32_t count;
    uint32_t cap;
} Obj;
extern void func_02058e98(void *slot, Item *it, B v);
void func_02058898(Obj *p, uint16_t v)
{
    B z;
    Item it;
    Item *q;
    uint32_t n, c;
    it.a = 0;
    it.b = 0;
    it.c = v;
    n = p->count;
    c = p->cap;
    q = &it;
    if (n < c) {
        Item *d;
        p->count++;
        d = &p->buf[p->count - 1];
        d->a = q->a;
        d->b = q->b;
        d->c = q->c;
    } else {
        z.x = 0;
        func_02058e98(&p->buf, q, z);
    }
    p->field = (p->count - 1) * 32 + 1;
}
