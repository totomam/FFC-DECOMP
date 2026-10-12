#include "ffc/types.h"

typedef struct Ent {
    uint32_t flags;
    uint32_t pad;
    const uint8_t *str;
    int32_t val;
} Ent;

typedef struct List {
    Ent *ents;
    uint32_t count;
} List;

typedef struct Global {
    uint32_t pad;
    List *l1;
    List *l2;
} Global;

extern Global data_021394f0;
extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_0202e10c(const uint8_t *a, const uint8_t *b);
extern void func_0202b3c8(void *a, uint32_t *b);

void func_020307e8(uint8_t *p, uint32_t a, uint32_t unused, uint32_t *out)
{
    volatile int32_t v1;
    volatile int32_t v0;
    volatile uint32_t v2;
    volatile uint32_t vo;
    volatile uint32_t va;
    uint32_t i;

    va = a;
    vo = (uint32_t)out;

    if (p[0x3f9] == 0) {
        return;
    }
    if (func_02092864(p + 0x10a) == 0) {
        return;
    }
    v0 = -1;
    v1 = -1;
    v2 = 0;

    for (i = 0; i < data_021394f0.l1->count; i++) {
        Ent *e = &data_021394f0.l1->ents[i];
        const uint8_t *s = (e->flags & 1) ? e->str : (const uint8_t *)e + 1;
        if (func_0202e10c(p + 0x10a, s) == 0) {
            v0 = e->val;
            break;
        }
    }

    if (p[0x44a] != 0) {
        v1 = *(int32_t *)(p + 0x410) >> 12;
    } else {
        for (i = 0; i < data_021394f0.l2->count; i++) {
            Ent *e = &data_021394f0.l2->ents[i];
            const uint8_t *s = (e->flags & 1) ? e->str : (const uint8_t *)e + 1;
            if (func_0202e10c(p + 0x13c, s) == 0) {
                v1 = e->val >> 12;
                break;
            }
        }
    }

    if (p[0x44b] != 0) {
        v2 |= (uint32_t)((*(int32_t *)(p + 0x414)) >> 12) << 16;
    }

    if (p[0x44c] != 0) {
        v2 |= ((uint32_t)(*(uint32_t *)(p + 0x418)) << 4) >> 16;
    } else {
        v2 |= 0x7f;
    }

    if (v0 >= 0) {
        uint32_t *o = (uint32_t *)vo;
        o[0] = va;
        o[1] = (uint32_t)v0;
        o[2] = (uint32_t)v1;
        o[3] = v2;
        func_0202b3c8(*(void **)(p + 0x8c), o);
    }
}
