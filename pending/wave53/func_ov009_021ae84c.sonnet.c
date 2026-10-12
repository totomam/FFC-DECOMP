#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Sz;
typedef struct { void *a; uint32_t b; void *c; uint32_t w; uint32_t h; } L;

extern uint32_t data_020b8e44;
extern Sz data_ov009_021b0cc8[];
extern uint32_t data_ov009_021af260[];
extern uint32_t func_02015a38();
extern uint32_t func_020159f8();
extern uint32_t func_0203b9cc(Sz sz, uint32_t heap, uint32_t prio);
extern uint32_t func_02066878(void *object);
extern void func_0205fdc8(uint32_t object, uint32_t value);
extern void *func_0203b878(void *object, uint32_t value);
extern uint32_t func_02036b4c(void *object, uint32_t index);
extern uint32_t func_020159c8();
extern void func_02005988(void *a, uint32_t b);
extern void func_02068ddc(void *a, void *b);
extern void func_020059cc(void *a);
extern void func_02056bc0(void *a, void *b);

typedef struct V V;
typedef struct O { V *vt; } O;
struct V { void *pad[3]; void (*f3)(O *, Sz); void *pad2[4]; void (*f8)(O *, uint32_t); void *pad3; void (*f10)(O *); };
typedef struct { uint8_t pad[0xd8]; O *arr[4]; } P;
void func_ov009_021ae84c(P *pp)
{
    uint8_t *p = (uint8_t *)pp;
    struct { uint32_t a; uint32_t b; uint32_t c; } tmp;
    Sz sz;
    uint8_t *volatile c;
    volatile uint32_t b;
    uint8_t *volatile a;
    uint8_t i;

    b = func_02015a38(data_020b8e44, 0, 1, 0);
    sz.a = 0x80;
    sz.b = 0x20;
    a = p;
    a = p + 0x48;
    c = p;
    c = p + 0xe8;
    i = 0;
    do {
        void *obj;
        void *s;
        void **vt;
        uint32_t idx;
        uint32_t v;

        obj = (void *)func_0203b9cc(sz, func_020159f8(data_020b8e44), 1);
        func_0205fdc8(func_02066878(obj), 1);
        pp->arr[i] = (O *)func_0203b878(obj, b);

        pp->arr[i]->vt->f3(pp->arr[i], data_ov009_021b0cc8[i]);
        pp->arr[i]->vt->f8(pp->arr[i], 2);
        pp->arr[i]->vt->f10(pp->arr[i]);

        idx = func_02036b4c((void *)c, i);
        v = func_020159c8(data_020b8e44, data_ov009_021af260[idx]);
        func_02005988(&tmp, v);
        func_02068ddc(pp->arr[i], &tmp);
        func_020059cc(&tmp);
        func_02056bc0((void *)a, pp->arr[i]);
        i++;
    } while (i < 4);
}
