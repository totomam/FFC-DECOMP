#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Sz;
typedef struct { void *a; uint32_t b; void *c; uint32_t w; uint32_t h; } L;

extern uint32_t data_020b8e44;
extern uint32_t data_ov009_021b0cc8[];
extern uint32_t data_ov009_021af260[];
extern uint32_t func_02015a38();
extern uint32_t func_020159f8();
extern uint32_t func_0203b9cc(Sz sz, uint32_t heap, uint32_t prio, void *a, uint32_t b, void *c);
extern uint32_t func_02066878(void *object);
extern void func_0205fdc8(uint32_t object, uint32_t value);
extern void *func_0203b878(void *object, uint32_t value);
extern uint32_t func_02036b4c(void *object, uint32_t index);
extern uint32_t func_020159c8();
extern void func_02005988(void *a, uint32_t b);
extern void func_02068ddc(void *a, void *b);
extern void func_020059cc(void *a);
extern void func_02056bc0(void *a, void *b);

void func_ov009_021ae84c(uint8_t *p)
{
    L l;
    uint8_t i;
    struct { uint32_t a; uint32_t b; } tmp;

    l.b = func_02015a38(data_020b8e44, 0, 1, 0);
    l.w = 0x80;
    l.h = 0x20;
    l.a = p;
    l.a = (uint8_t *)p + 0x48;
    l.c = p;
    l.c = (uint8_t *)p + 0xe8;
    i = 0;
    do {
        void *obj;
        void *s;
        void **vt;
        uint32_t idx;
        uint32_t v;

        obj = (void *)func_0203b9cc(*(Sz *)&l.w, func_020159f8(data_020b8e44), 1, l.a, l.b, l.c);
        func_0205fdc8(func_02066878(obj), 1);
        ((void **)(p + 0xd8))[i] = func_0203b878(obj, l.b);

        s = ((void **)(p + 0xd8))[i];
        vt = *(void ***)s;
        ((void (*)(void *, uint32_t, uint32_t))vt[3])(s, data_ov009_021b0cc8[i * 2], data_ov009_021b0cc8[i * 2 + 1]);
        s = ((void **)(p + 0xd8))[i];
        vt = *(void ***)s;
        ((void (*)(void *, uint32_t))vt[8])(s, 2);
        s = ((void **)(p + 0xd8))[i];
        vt = *(void ***)s;
        ((void (*)(void *))vt[10])(s);

        idx = func_02036b4c(l.c, i);
        v = func_020159c8(data_020b8e44, data_ov009_021af260[idx]);
        func_02005988(&tmp, v);
        func_02068ddc(((void **)(p + 0xd8))[i], &tmp);
        func_020059cc(&tmp);
        func_02056bc0(l.a, ((void **)(p + 0xd8))[i]);
        i++;
    } while (i < 4);
}
