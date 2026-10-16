#include "ffc/types.h"
typedef struct { int32_t a, b, c, d; } R;
typedef struct { int32_t w, h; } E;
typedef struct { R *data; uint32_t size; uint32_t cap; } V;
typedef struct { uint8_t pad[0x38]; R *data; uint32_t size; uint32_t cap; } O;
extern E data_020b11b4[];
extern void func_02053d60(void *object, void *value, uint8_t x);
extern void func_02067fb8(void *v, R *p, uint8_t x);
extern void func_02066cd8(O *o, R r, int idx);

void func_02066f3c(O *self, R in) {
    uint8_t z = 0;
    if (self->size < self->cap) {
        R *p = self->data + self->size;
        if (p) *p = in;
        self->size++;
    } else {
        func_02053d60(&self->data, &in, z);
    }
    while (self->size != 0) {
        R *last = self->data + self->size;
        R r;
        r.a = last[-1].a; r.b = last[-1].b; r.c = last[-1].c; r.d = last[-1].d;
        func_02067fb8(&self->data, last - 1, 0);
        int32_t w = r.c - r.a;
        int32_t h = r.d - r.b;
        int32_t best = -1, best2 = -1, found = 0, bestArea = 0x20000000, bestArea2 = 0x20000000;
        int32_t idx;
        if (w == 8 && h == 8) idx = 0;
        else {
            int i;
            idx = -2;
            for (i = 14; i > 0; i--) {
                int32_t ew = data_020b11b4[i].w, eh = data_020b11b4[i].h;
                int32_t area;
                if (ew == 0 && eh == 0) continue;
                if (ew == w && eh == h) { idx = i; found = 1; break; }
                area = ew * eh;
                if (ew <= w && eh <= h) {
                    if (area > bestArea) { bestArea = area; best2 = i; }
                } else if (area > 0x20000000) {
                    int32_t m1 = ew < h ? eh : eh;
                    (void)m1;
                    if (area < bestArea2) { bestArea2 = area; best = i; }
                }
            }
            if (!found) idx = best == -1 ? best2 : best;
        }
        func_02066cd8(self, r, idx);
    }
}
