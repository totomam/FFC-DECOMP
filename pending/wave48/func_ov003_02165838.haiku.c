#include "ffc/types.h"

typedef struct Mar {
    uint32_t a0;
    uint32_t a4;
    uint32_t count;
    uint32_t off;
} Mar;

typedef struct Ent {
    int16_t key;
    uint16_t a2;
    uint32_t a4;
    int16_t s6;
    uint16_t pad8;
    uint32_t w8;
    uint32_t w12;
    uint32_t w16;
    uint32_t w20;
    uint32_t w24;
} Ent;

typedef struct Obj {
    void *vt;
    uint32_t a4;
    uint32_t a8;
    uint32_t c;
    uint32_t p14;
    void *p18;
    void *p1c;
    void *p20;
    uint32_t p24;
    int32_t p28;
    uint32_t p2c;
    uint32_t p30;
    uint32_t p34;
} Obj;

typedef struct Ctx {
    uint32_t hdr;
    Mar *mar;
    uint32_t idx;
    uint8_t flag;
} Ctx;

extern uint8_t data_ov003_0217b10c[];
extern uint32_t data_020b8e44;

extern void func_02016eb8(Ctx *c, uint32_t x);
extern void *func_02052d90(Mar *mar, uint32_t index);
extern void *func_0209a76c(uint32_t size, uint32_t align);
extern void func_020424e0(uint32_t a);
extern void *func_ov003_0214649c(void);
extern void func_02052d3c(Mar *mar, uint32_t idx);
extern void func_02052c04(Mar *mar);
extern void *func_02053290(void *object);

typedef struct Local {
    uint32_t slot[2];
    uint32_t hdr;
    Mar *mar;
    uint32_t idx;
    uint8_t flag;
} Local;

Obj *func_ov003_02165838(Obj *o, uint32_t a, int32_t b)
{
    Local L;
    uint32_t i;
    uint32_t cnt;
    Ent *e;
    void *x;

    o->c &= ~0xffu;
    o->vt = data_ov003_0217b10c;
    L.slot[0] = a;
    L.slot[1] = b;
    func_02016eb8((Ctx *)&L.hdr, data_020b8e44);
    cnt = ((Mar *)func_02052d90(L.mar, L.idx))->count;
    i = 0;
    {
        for (; i < cnt; i++) {
            Mar *m = (Mar *)func_02052d90(L.mar, L.idx);
            e = (Ent *)((uint8_t *)m + m->off + i * 28);
            if ((int32_t)L.slot[1] == e->key) {
                o->p14 = L.slot[0];
                o->p18 = func_0209a76c(e->w8 << 4, 360);
                o->p1c = func_0209a76c(e->w12 << 4, 360);
                o->p20 = func_0209a76c(e->w16 << 4, 360);
                o->p24 = e->w20;
                o->p28 = e->s6;
                o->p2c = e->w24;
                func_020424e0(L.slot[0]);
                x = func_ov003_0214649c();
                if (((uint8_t *)func_02052d90(*(Mar **)((uint8_t *)x + 0xe4), *(uint32_t *)((uint8_t *)x + 0xe8)))[8]) {
                    o->p1c = (uint8_t *)o->p1c + 0x1555;
                }
                break;
            }
        }
    }
    o->p30 = 0;
    o->p34 = 0;
    if (L.mar) {
        if (L.flag) {
            func_02052d3c(L.mar, L.idx);
        }
        func_02052c04(L.mar);
    }
    func_02053290(&L.hdr);
    return o;
}
