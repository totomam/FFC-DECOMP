#include "ffc/types.h"

extern void func_0200d5d4(void *object, void *value, uint8_t flag);
extern void func_ov004_02148668(void *object, void *value, uint8_t flag);
extern int32_t data_ov004_02159448[];

typedef struct { int32_t x; int32_t y; } Pt;
typedef struct { void *data; uint32_t count; uint32_t cap; } Vec;
typedef struct { int32_t x; int32_t y; uint8_t pad[0x14]; Vec pts; Vec adj; int32_t tail; } Node;
typedef struct { uint8_t pad[0x10c]; Node *nodes; } Base;

void func_ov004_0214fd24(Base *self, uint32_t a, uint32_t b, uint32_t c)
{
    Pt pt;
    Pt mid;

    int32_t mx = (self->nodes[a].x + self->nodes[b].x) / 2;
    int32_t my = (self->nodes[a].y + self->nodes[b].y) / 2;
    pt.x = mx;
    *(volatile int32_t *)&mid.x = mx;
    pt.y = my;
    *(volatile int32_t *)&mid.y = my;
    pt.x = ((mid.x + 2) >> 2) + data_ov004_02159448[17];
    pt.y = ((mid.y + 4) >> 3) + data_ov004_02159448[18];

    {
        uint8_t f = 0;
        Vec *v = &self->nodes[a].adj;
        if (v->count < v->cap) {
            uint32_t i = v->count;
            v->count = i + 1;
            ((uint32_t *)v->data)[i] = b;
        } else {
            func_0200d5d4(v, &b, f);
        }
    }
    {
        uint8_t f = 0;
        Vec *v = &self->nodes[b].adj;
        if (v->count < v->cap) {
            uint32_t i = v->count;
            v->count = i + 1;
            ((uint32_t *)v->data)[i] = a;
        } else {
            func_0200d5d4(v, &a, f);
        }
    }
    {
        uint8_t f = 0;
        Vec *v = &self->nodes[a].pts;
        if (v->count < v->cap) {
            Pt *p = (Pt *)v->data + v->count;
            if (p) {
                p->x = pt.x;
                p->y = pt.y;
            }
            v->count++;
        } else {
            func_ov004_02148668(v, &pt, f);
        }
    }
    {
        uint8_t f = 0;
        Vec *v = &self->nodes[b].pts;
        if (v->count < v->cap) {
            Pt *p = (Pt *)v->data + v->count;
            if (p) {
                p->x = pt.x;
                p->y = pt.y;
            }
            v->count++;
        } else {
            func_ov004_02148668(v, &pt, f);
        }
    }
}
