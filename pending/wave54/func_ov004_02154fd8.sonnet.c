#include "ffc/types.h"

typedef struct { int32_t x; int32_t y; } Pair;
typedef struct { uint8_t p[0x34]; } Ent;
typedef struct { uint32_t pad; uint32_t cur; uint32_t prev; } Fl;

extern Fl *func_ov004_021530bc(uint8_t *a);
extern uint32_t func_ov004_021534fc(uint8_t *a);
extern int32_t func_0209a978(int32_t a, int32_t b);
extern void func_ov004_0214e6c4(void *obj, uint32_t b, Pair p);
extern void func_ov004_021551b4(uint8_t *a, uint32_t b, uint32_t k);

#define VCALL(o, slot) (((void (*)(void *))(*(void ***)(o))[slot])(o))

uint32_t func_ov004_02154fd8(uint8_t *a, uint32_t b) {
    Fl *s = func_ov004_021530bc(a);
    if ((s->cur & 0x200) || (s->cur & 0x100)) {
        uint32_t idx = *(uint32_t *)(a + b * 4 + 0x100);
        Ent *e = (Ent *)a + b;
        VCALL(*(void **)((uint8_t *)e + idx * 4 + 0x120), 7);
        a += 0x130;
        if (*(void **)(a + b * 0x34) != 0) {
            if ((s->cur & (s->prev ^ s->cur) & 0x200) || (s->cur & (s->prev ^ s->cur) & 0x100)) {
                VCALL(*(void **)(a + b * 0x34), 4);
            }
            VCALL(*(void **)(a + b * 0x34), 6);
        }
        return 1;
    }
    if (func_ov004_021534fc(a) & 0x20) {
        if (s->cur & (s->prev ^ s->cur) & 0x20) func_ov004_021551b4(a, b, 0);
        if (s->cur & (s->prev ^ s->cur) & 0x10) func_ov004_021551b4(a, b, 1);
        if (s->cur & (s->prev ^ s->cur) & 0x40) func_ov004_021551b4(a, b, 2);
        if (s->cur & (s->prev ^ s->cur) & 0x80) func_ov004_021551b4(a, b, 3);
        return 0;
    }
    {
        int32_t n = func_0209a978(*(int32_t *)(a + b * 0x34 + 0x80), *(int32_t *)(a + b * 0x34 + 0x7c));
        if (s->cur & 0x20) {
            Pair p = { -n, 0 };
            func_ov004_0214e6c4(*(void **)(a + 0xe4), b, p);
        }
        if (s->cur & 0x10) {
            Pair p = { n, 0 };
            func_ov004_0214e6c4(*(void **)(a + 0xe4), b, p);
        }
        if (s->cur & 0x40) {
            Pair p = { 0, -n };
            func_ov004_0214e6c4(*(void **)(a + 0xe4), b, p);
        }
        if (s->cur & 0x80) {
            Pair p = { 0, n };
            func_ov004_0214e6c4(*(void **)(a + 0xe4), b, p);
        }
    }
    return 0;
}
