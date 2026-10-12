#include "ffc/types.h"

typedef struct {
    uint32_t a;
    int16_t b;
    uint16_t c;
} Item;

typedef struct {
    uint8_t pad[0x1c];
    uint32_t field;
    uint8_t pad2[0x34 - 0x20];
    Item *buf;
    uint32_t count;
    uint32_t cap;
} Obj;

extern void func_02058e98(void *slot, uint32_t v);

void func_02058898(Obj *p, uint16_t v)
{
    uint8_t z;
    Item it;
    Item *q;
    uint8_t *zp;
    zp = &z;
    *zp = 0;
    q = &it;
    q->a = 0;
    q->b = 0;
    q->c = v;
    if (p->count < p->cap) {
        p->count++;
        p->buf[p->count - 1] = *q;
    } else {
        func_02058e98(&p->buf, *zp);
    }
    p->field = (p->count - 1) * 32 + 1;
}
