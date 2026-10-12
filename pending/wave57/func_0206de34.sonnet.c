#include "ffc/types.h"

typedef struct {
    uint8_t flag;
    uint8_t pad[3];
    uint32_t val;
} Ent;

typedef struct {
    uint8_t pad0[0x0c];
    uint32_t status;
    uint8_t pad1[0x10];
    uint32_t f20;
    uint8_t pad2[4];
    uint32_t f28;
    uint8_t pad3[0x238 - 0x2c];
    Ent *ents;
    uint16_t mask;
    uint8_t pad4[2];
    uint32_t count2;
    uint32_t count;
    uint32_t cmp;
    uint8_t flag;
} Obj;

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t data_0213e178;
extern uint32_t data_020b1ca4[];
extern uint32_t data_020b1cb4;

extern uint32_t func_0206cb98(uint32_t);
extern void func_0206dda8(Obj *a);
extern uint8_t *func_0208e8ac(uint32_t, void *, uint16_t);
extern uint64_t func_0209a978(uint32_t, uint32_t);
extern void func_02084ca4(uint8_t *, uint32_t, uint32_t);

void func_0206de34(Obj *a)
{
    uint32_t idx;
    uint32_t j;
    uint32_t i;
    uint32_t sc;
    uint32_t off;
    uint32_t v;
    uint32_t *q;
    uint8_t *e;
    uint64_t pr;

    if (func_0206cb98(data_0213e178)) {
        a->status = (a->status & ~0xff) | 2;
        return;
    }
    if (a->flag == 0) {
        return;
    }
    func_0206dda8(a);
    j = 0;
    for (i = 0; i < a->count; i++) {
        if (((1 << i) & a->mask)) {
            idx = j;
            j++;
            if (a->ents[idx].flag == 0) {
                e = func_0208e8ac(*(uint32_t *)(data_0213e178 + 0x285c), (void *)((uint8_t *)a + 0x30), (uint16_t)i);
                if (e != 0 && e[0] != 1) {
                    sc = a->f28 + idx * a->f20;
                    v = a->ents[idx].val;
                    off = v * 15;
                    if (a->cmp == v) {
                        a->ents[idx].flag = 1;
                        pr = func_0209a978(a->f20, 15);
                        uint32_t local = (uint32_t)(pr >> 32);
                        q = (local < data_020b1ca4[4]) ? &local : &data_020b1cb4;
                        func_02084ca4(e + 1, sc + off, *q);
                    } else {
                        a->ents[idx].val = v + 1;
                        func_02084ca4(e + 1, sc + off, 15);
                    }
                }
            }
        }
    }
    for (i = 0; i < a->count2; i++) {
        if (a->ents[i].flag == 0) {
            return;
        }
    }
    a->status = (a->status & ~0xff) | 2;
}
