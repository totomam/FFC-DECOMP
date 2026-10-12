#include "ffc/types.h"

extern void func_02053d60(void *object, void *v, uint32_t w);
extern void func_02067fb8(void *object, void *p, uint32_t w);
typedef struct { uint32_t a, b, c, d; } Item;
typedef struct { uint8_t pad[0x38]; Item *arr; int32_t count; int32_t cap; } Obj;
extern void func_02066cd8(Obj *self, Item it, int32_t idx);
extern uint32_t data_020b11b4[];

void func_02066f3c(Obj *self, Item v)
{
    struct { uint8_t x; uint8_t flag; } loc;
    uint32_t w;
    loc.flag = 0;
    w = loc.flag;
    if (self->count < self->cap) {
        Item *p = self->arr + self->count;
        if (p != 0) {
            *p = v;
        }
        self->count++;
    } else {
        func_02053d60(&self->arr, &v, w);
    }
    while (self->count != 0) {
        int32_t dx, dy, best, best2, idx1, idx2, idx, i;
        v = self->arr[self->count - 1];
        func_02067fb8(&self->arr, &self->arr[self->count - 1], w);
        dx = (int32_t)(v.c - v.a);
        dy = (int32_t)(v.d - v.b);
        if (dx == 8 && dy == 8) {
            func_02066cd8(self, v, 0);
        } else {
            best = (int32_t)0x80000000;
            best2 = (int32_t)0x80000000;
            idx1 = -1;
            idx2 = -1;
            idx = 0;
            for (i = 14; i > 0; i--) {
                int32_t px = (int32_t)data_020b11b4[i * 2];
                int32_t py = (int32_t)data_020b11b4[i * 2 + 1];
                int32_t prod;
                int32_t mn1, mn2;
                if (px == 0 && py == 0) {
                    continue;
                }
                if (px == dx && py == dy) {
                    idx = i;
                    break;
                }
                prod = px * py;
                if (px <= dx && py <= dy) {
                    if (prod > best) {
                        best = prod;
                        idx1 = i;
                    }
                } else if (prod > best2) {
                    mn1 = (dy < py) ? dy : py;
                    mn2 = (px > dx) ? dx : px;
                    if (prod < 2 * (mn1 * mn2)) {
                        best2 = prod;
                        idx2 = i;
                    }
                }
            }
            if (i == 0) {
                idx = (idx2 != -1) ? idx2 : idx1;
            }
            func_02066cd8(self, v, idx);
        }
    }
}
