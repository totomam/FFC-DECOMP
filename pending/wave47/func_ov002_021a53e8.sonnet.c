#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Item;
typedef struct { Item *data; uint32_t len; uint32_t off; } Buf;
typedef struct { Item *data; uint32_t len; uint32_t cap; uint32_t *ptr; uint32_t idx; } Tmp;
typedef struct { uint8_t b; } Fl;

extern uint32_t func_ov002_021a5164(Buf *self, uint32_t idx);
extern void func_ov002_021a54bc(Tmp *t, uint32_t n, Fl flag);
extern void func_ov002_021a54ac(Tmp *t);

void func_ov002_021a53e8(Buf *self, uint32_t count, Item *src) {
    Fl f0[4];
    volatile Fl f1;
    Tmp t;
    Fl flag;
    uint32_t n;
    Item *dst;
    Item *end;
    Item *beg;
    uint32_t i;
    uint32_t tmp_off;

    t.data = 0;
    t.len = 0;
    t.cap = 0;
    t.ptr = &self->off;
    n = func_ov002_021a5164(self, self->len + count - self->off);
    f0[3].b = 0;
    flag = f0[3];
    f1 = flag;
    func_ov002_021a54bc(&t, n, flag);
    t.idx = self->len;
    dst = t.data + self->len + t.len;
    for (i = count; i != 0; i--) {
        *dst = *src;
        dst++;
    }
    t.len += count;
    end = self->data + self->len;
    beg = self->data;
    while (end > beg) {
        end--;
        dst = t.data + t.idx - 1;
        if (dst != 0) {
            *dst = *end;
        }
        t.idx--;
        t.len++;
    }
    self->len = 0;
    tmp_off = self->off;
    self->off = t.cap;
    t.cap = tmp_off;
    end = self->data;
    self->data = t.data;
    t.data = end;
    self->len = t.len;
    t.len = 0;
    func_ov002_021a54ac(&t);
}
