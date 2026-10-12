#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    void *f4;
    uint32_t f8;
    uint8_t fc;
} Loc;

typedef struct {
    uint16_t kind;
    uint16_t pad;
    uint32_t cnt;
    uint32_t off;
} Hdr;

typedef struct {
    uint32_t w[8];
} Base;

typedef struct {
    uint16_t k0;
    uint16_t k2;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
} Rec;

extern void *func_0203b688(void);
extern void func_02016704(Loc *out, uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *mar, uint32_t index);
extern void func_02052c04(void *mar);
extern void func_02053290(Loc *obj);
extern uint32_t func_0209a484(uint32_t);
extern uint32_t func_0209b5bc(uint32_t, uint32_t);
extern uint32_t func_0209b338(uint32_t, uint32_t);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_02166a58(void *obj, void *a0, uint32_t w0, uint32_t w1, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *obj, void *node);
extern void *func_02021610(uint32_t a, uint32_t b);
extern uint32_t data_020b8e44;

void *func_ov003_0216c390(void *a0, Hdr *p)
{
    Loc loc;
    uint32_t extra;
    void *obj;
    uint32_t w1;
    uint32_t w0;
    uint32_t v28;
    uint32_t v2c;
    Rec *rec;
    uint8_t *m;
    uint32_t idx, cnt, flag, v, f5;
    uint16_t r7, rk;
    void *node;

    obj = func_0203b688();
    w0 = ((Base *)((uint8_t *)p + p->off))->w[0];
    w1 = ((Base *)((uint8_t *)p + p->off))->w[1];
    extra = 0;
    idx = 0;
    if (p->kind == 0x86) {
        idx = 1;
        if (p->cnt > 2) {
            extra = ((Base *)((uint8_t *)p + p->off))->w[2];
        }
    }

    func_02016704(&loc, data_020b8e44);
    m = func_02052d90(loc.f4, loc.f8);
    cnt = p->cnt;
    rec = (Rec *)(m + *(uint32_t *)(m + *(uint32_t *)(m + 0xc) + (w1 << 2)));

    flag = 0;
    if (cnt > idx + 2) {
        if (((Base *)((uint8_t *)p + p->off))->w[idx + 2] != 0) {
            flag = 1;
        }
    }
    r7 = 0;
    if (flag == 0) {
        r7 = rec->k0;
    }

    v28 = 0;
    v2c = 0;
    if (cnt > idx + 3) {
        v28 = ((Base *)((uint8_t *)p + p->off))->w[idx + 3];
    } else {
        v28 = rec->f4;
    }
    if (cnt > idx + 4) {
        v2c = ((Base *)((uint8_t *)p + p->off))->w[idx + 4];
    } else {
        v2c = rec->f8;
    }
    if (cnt > idx + 5) {
        v = ((Base *)((uint8_t *)p + p->off))->w[idx + 5];
    } else {
        v = rec->fc;
    }

    f5 = func_0209a484(v);
    f5 = func_0209b5bc(f5, 0x45800000);
    f5 = func_0209b338(0x43b40000, f5);

    rk = rec->k2;
    {
        void *al = func_0205681c(0x34);
        if (al) {
            node = func_ov003_02166a58(al, a0, w0, w1, v28, v2c, f5, rk, extra);
        } else {
            node = al;
        }
    }
    func_02056bc0(obj, node);

    if (r7 != 0) {
        node = func_02021610(r7, 0);
        func_02056bc0(obj, node);
    }

    if (loc.f4 != 0) {
        if (loc.fc != 0) {
            func_02052d3c(loc.f4, loc.f8);
        }
        func_02052c04(loc.f4);
    }
    func_02053290(&loc);
    return obj;
}
