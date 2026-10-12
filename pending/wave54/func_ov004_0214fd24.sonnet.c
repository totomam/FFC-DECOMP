#include "ffc/types.h"

typedef struct { uint8_t b; } F;
extern void func_0200d5d4(void *object, void *value, F flag);
extern void func_ov004_02148668(void *object, void *value, F flag);
extern int32_t data_ov004_02159448[];

typedef struct { int32_t x; int32_t y; } Pt;
typedef struct { void *data; uint32_t count; uint32_t cap; } Vec;
typedef struct { int32_t x; int32_t y; uint8_t pad[0x14]; Vec pts; Vec adj; int32_t tail; } Node;
typedef struct { uint32_t w[0x43]; Node *nodes; } Base;

void func_ov004_0214fd24(Base *self, uint32_t a, uint32_t b)
{
    Pt pt;
    volatile Pt mid;
    Vec *v;
    F f;

    mid.x = (((Node*)self->w[0x43])[b].x + ((Node*)self->w[0x43])[a].x) / 2;
    mid.y = (((Node*)self->w[0x43])[b].y + ((Node*)self->w[0x43])[a].y) / 2;
    pt.x = mid.x;
    pt.y = mid.y;
    pt.x = ((mid.x + 2) >> 2) + data_ov004_02159448[17];
    pt.y = ((mid.y + 4) >> 3) + data_ov004_02159448[18];

    {
        f.b = 0;
        v = &((Node*)self->w[0x43])[a].adj;
    if (v->count < v->cap) {
        ((uint32_t *)v->data)[v->count++] = b;
    } else {
        func_0200d5d4(v, &b, f);
    }
    }
    {
        f.b = 0;
        v = &((Node*)self->w[0x43])[b].adj;
    if (v->count < v->cap) {
        ((uint32_t *)v->data)[v->count++] = a;
    } else {
        func_0200d5d4(v, &a, f);
    }
    }
    {
        f.b = 0;
        v = &((Node*)self->w[0x43])[a].pts;
    if (v->count < v->cap) {
        Pt *p = (Pt *)v->data + v->count;
        if (p) { p->x = pt.x; p->y = pt.y; }
        v->count++;
    } else {
        func_ov004_02148668(v, &pt, f);
    }
    }
    {
        f.b = 0;
        v = &((Node*)self->w[0x43])[b].pts;
    if (v->count < v->cap) {
        Pt *p = (Pt *)v->data + v->count;
        if (p) { p->x = pt.x; p->y = pt.y; }
        v->count++;
    } else {
        func_ov004_02148668(v, &pt, f);
    }
    }
}
