#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    uint32_t a;
    uint32_t b;
    uint8_t flag;
} Obj40;

extern void func_02035f58(void *o);
extern void func_ov009_021ad6ac(uint8_t *self, uint32_t a, void *o);
extern void *func_0203b6fc(void);
extern void func_ov009_0219c000(uint32_t v);
extern uint32_t func_0203608c(void *o);
extern void func_02018994(void *o, uint32_t v);
extern uint8_t *func_02052d90(uint32_t mar, uint32_t index);
extern uint32_t func_0201c9ac(uint32_t obj, uint32_t n);
extern void func_0201c220(uint32_t obj, uint32_t n, uint32_t v);
extern uint32_t func_ov011_021c2828(uint8_t *self, uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov011_021c02a8(uint8_t *self, uint32_t a, uint32_t b);
extern uint32_t func_020159c8(uint32_t v, uint32_t n);
extern void func_02005988(void *o, uint32_t v);
extern uint32_t func_02005efc(void *object, uint32_t first, ...);
extern void *func_0205681c(uint32_t size);
extern void func_020095b8(void *a, void *b);
extern uint32_t func_02032d24(void *obj, uint32_t w, uint32_t h, void *p, uint32_t a5, uint32_t a6);
extern void *func_020059cc(void *object);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);
extern void func_02069724(void *o, uint8_t *self);
extern uint32_t func_ov011_021c2360(uint8_t *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_02062a30(void *owner);
extern void *func_0203b72c(void);
extern void *func_02035fd0(void *object);

extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;
extern uint32_t data_ov011_021cad0c[];
extern uint32_t data_ov011_021cad14;
extern uint32_t data_ov011_021cb1dc[2];
extern uint32_t data_ov011_021cb1e4[2];
extern uint32_t data_ov011_021cb1ec[2];

typedef struct {
    uint32_t t8[2];
    uint32_t wh[2];
    uint32_t o18;
    uint32_t o1c;
    uint32_t gap[2];
    uint32_t o28[3];
    uint32_t o34[3];
    Obj40 o40;
    uint32_t o50[24];
} Frame;

void func_ov011_021c2910(uint8_t *self, uint32_t arg1)
{
    Frame f;
    uint32_t r5;
    uint32_t r7;
    uint32_t idx, v, n, lim, obj, t, c, i;
    uint32_t *pp;
    uint8_t *m, *b2;
    void *r6;

    func_02035f58(f.o50);
    func_ov009_021ad6ac(self, arg1, f.o50);
    r6 = func_0203b6fc();
    if (*(uint32_t *)(self + 0x334) == 1) {
        func_ov009_0219c000(*(uint32_t *)(self + 0x2b8));
        idx = func_0203608c(f.o50);
        func_02018994(&f.o40, data_020b8e44);
        m = func_02052d90(f.o40.a, f.o40.b);
        b2 = 0;
        if (*(uint32_t *)(m + 4) != 0) {
            b2 = m + *(uint32_t *)(m + 4);
        }
        v = *(uint16_t *)(b2 + *(uint32_t *)(b2 + 4) + idx * 2);
        n = func_0201c9ac(data_020b93b8, 4) + v;
        f.o18 = n;
        pp = &f.o18;
        lim = data_ov011_021cad0c[2];
        if (n >= lim) {
            pp = &data_ov011_021cad14;
        }
        func_0201c220(data_020b93b8, 4, *pp);
        r7 = func_ov011_021c2828(self, data_ov011_021cb1dc[0], data_ov011_021cb1dc[1], arg1);
        func_02056bc0(self + 0x14, (void *)r7);
        r7 = func_ov011_021c02a8(self, data_ov011_021cb1e4[0], data_ov011_021cb1e4[1]);
        func_02056bc0(self + 0x14, (void *)r7);
        t = func_020159c8(data_020b8e44, 0x185);
        func_02005988(f.o34, t);
        for (i = 0; i < 3; i++) {
            f.o28[i] = 0;
        }
        if (f.o34[0] & 1) {
            r7 = f.o34[2];
        } else {
            r7 = (uint32_t)((uint8_t *)f.o34 + 1);
        }
        obj = func_0201c9ac(data_020b93b8, 4);
        func_02005efc(f.o28, r7, v, obj);
        r5 = 0;
        r7 = (uint32_t)func_0205681c(0xb0);
        if (r7 != 0) {
            func_020095b8(&f.o1c, f.o28);
            r7 = func_02032d24((void *)r7, f.wh[0], f.wh[1], &f.o1c, 4, 0);
            r5 = 1;
        }
        func_02056bc0(self + 0x14, (void *)r7);
        if (r5 != 0) {
            func_020059cc(&f.o1c);
        }
        func_020059cc(f.o28);
        func_020059cc(f.o34);
        if (f.o40.a != 0) {
            if (f.o40.flag != 0) {
                func_02052d3c(f.o40.a, f.o40.b);
            }
            func_02052c04(f.o40.a);
        }
        func_02053290(&f.o40);
    }
    func_02069724(f.t8, self);
    c = func_ov011_021c2360(self, data_ov011_021cb1ec[0], data_ov011_021cb1ec[1], f.t8[0], f.t8[1]);
    r7 = (uint32_t)func_02062a30(*(void **)(self + 0x17c));
    func_02056bc0(r6, func_0203b72c());
    func_02056bc0(r6, (void *)r7);
    func_02056bc0(r6, (void *)c);
    func_02056bc0(self + 0x14, r6);
    func_02035fd0(f.o50);
}
