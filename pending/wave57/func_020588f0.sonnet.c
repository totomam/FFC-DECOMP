#include "ffc/types.h"

extern void func_02058840(void *o);
extern void func_02058898(void *o, uint32_t c);
extern void *func_02056830(uint32_t size);
extern void func_02058e98(void *arr, void *entry, uint8_t flag);

typedef struct Entry {
    void *p;
    int16_t a;
    uint16_t b;
} Entry;

typedef struct Obj {
    uint8_t pad0[0x1c];
    uint32_t f1c;
    uint8_t pad1[0x14];
    Entry *arr;
    uint32_t cnt;
    uint32_t cap;
    uint8_t pad2[0x0c];
    uint32_t size;
} Obj;

void func_020588f0(Obj *o, uint16_t *src, uint32_t c, uint32_t n)
{
    Entry e;
    uint32_t cnt;
    volatile uint32_t rc, gc, bc, m;

    if (src == 0) {
        func_02058840(o);
        return;
    }
    if (n == 0x20) {
        func_02058898(o, c);
        return;
    }
    m = 0x1f;
    gc = ((c & 0x3e0) >> 5) * n;
    rc = (c & 0x1f) * n;
    bc = ((c & 0x7c00) >> 10) * n;
    e.p = func_02056830(o->size << 1);
    e.a = 1;
    e.b = 0;
    if (o->cnt < o->cap) {
        uint32_t idx = o->cnt;
        o->cnt = idx + 1;
        o->arr[idx] = e;
    } else {
        func_02058e98(&o->arr, &e, 1);
    }
    if (o->size != 0) {
        uint16_t *out = (uint16_t *)e.p;
        cnt = o->size;
        do {
            uint32_t p = *src;
            uint32_t blue, red, green;
            src++;
            blue = ((p & 0x7c00) >> 10) * (32 - n) + bc;
            blue = (((blue >> 5) << 26) >> 16);
            red = ((((p & m) * (32 - n) + rc) << 11) >> 16);
            green = (((p & 0x3e0) >> 5) * (32 - n) + gc) & ~m;
            *out = (uint16_t)(red | (green & 0xffff) | blue);
            out++;
        } while (--cnt != 0);
    }
    o->f1c = ((o->cnt - 1) << 5) + 1;
}
