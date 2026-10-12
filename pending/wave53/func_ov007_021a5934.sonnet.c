/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct { uint32_t w, h; } Sz;
extern "C" {
extern int func_0206cb98(void *obj);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *obj, int v);
extern void func_02005988(void *buf, uint32_t v);
extern void *func_02032d24(void *obj, Sz s, void *buf, int c, int d);
extern void func_020059cc(void *buf);
extern void func_02056bc0(void *object, void *node);
extern void *func_0206df9c(void *obj, int v);
extern void func_0206e27c(void *obj, int v);
extern void func_02055ae8(void *obj, void *p);
extern void *data_020b8e44;
extern uint32_t data_ov007_021c42f0[];
extern uint32_t data_ov007_021c42f8[];
void func_ov007_021a5934(uint8_t *p);
}

void func_ov007_021a5934(uint8_t *p)
{
    uint32_t buf[3];
    if (func_0206cb98(*(void **)(p + 0xc0)) != 0) {
        int z = 0;
        int f = 0;
        void *obj = func_0205681c(0xb0);
        if (obj != 0) {
            func_02005988(buf, func_020159c8(data_020b8e44, 0x2d));
            Sz sz;
            sz.w = 0x80;
            sz.h = 0x60;
            f = 1;
            obj = func_02032d24(obj, sz, buf, 4, z);
        }
        if (f) func_020059cc(buf);
        func_02056bc0(p + 0x14, obj);
        { Sz *d = (Sz *)data_ov007_021c42f0; uint32_t a = d->w; uint32_t b = d->h; Sz *t = (Sz *)(p + 0xb8); t->w = a; t->h = b; }
    } else {
        void *x = func_0205681c(0x29c);
        if (x != 0) {
            x = func_0206df9c(x, 0);
        }
        *(void **)(p + 0xec) = x;
        func_0206e27c(x, 1);
        uint8_t *q = p;
        if (p) q = p + 0x80;
        func_02055ae8((uint8_t *)*(void **)(p + 0xec) + 0x20, q);
        func_02056bc0(p + 0x48, *(void **)(p + 0xec));
        { Sz *d = (Sz *)data_ov007_021c42f8; uint32_t a = d->w; uint32_t b = d->h; Sz *t = (Sz *)(p + 0xb8); t->w = a; t->h = b; }
    }
}
