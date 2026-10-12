#include "ffc/types.h"

typedef struct { uint32_t w; uint32_t h; } Size;

extern uint32_t func_ov007_021ae604(void *a);
extern uint32_t func_02056aec(void *a);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *p, uint32_t x);
extern void func_02005988(void *out, void *in);
extern void *func_02032d24(void *obj, Size sz, void *p, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *data_020b8e44;
extern Size data_ov007_021c4d48;

void func_ov007_021aa7d0(void *a) {
    struct L {uint32_t v[3];} loc;
    Size sz;
    volatile uint32_t sp8;
    void *obj;
    uint32_t flag;
    uint32_t zero;
    char *node;
    Size tmp;

    if (func_ov007_021ae604(a) >= 0x3c) {
        flag = 0;
        zero = 0;
        sp8 = func_02056aec(a);
        obj = func_0205681c(0xb0);
        if (obj != 0) {
            void *p = func_020159c8(data_020b8e44, 0x66);
            func_02005988(&loc, p);
            sz.w = 0x80;
            sz.h = 0x60;
            obj = func_02032d24(obj, sz, &loc, 4, zero);
            flag = 1;
        }
        node = (char *)a + 0x14;
        func_02056bc0(node, obj);
        func_02056bc0(node, (void *)sp8);
        if (flag != 0) {
            func_020059cc(&loc);
        }
    }
    tmp = data_ov007_021c4d48;
    *(Size *)((char *)a + 0x80) = tmp;
}
