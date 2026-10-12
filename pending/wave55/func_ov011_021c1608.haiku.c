#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct { uint32_t a; int32_t b; } Ret2;

extern void *data_020b8e44;
extern uint32_t data_ov011_021cae8c[];
extern uint32_t data_ov011_021cae0c[];
extern char data_ov011_021caf68[];
extern void *data_020b93b8;
extern Pair data_ov011_021cb174;

extern int64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_02035f58(void *o);
extern void func_ov009_021ad6ac(uint8_t *self, int p, void *o);
extern void *func_0205681c(uint32_t size);
extern void *func_02031624(void *a, void *b, Pair c, uint32_t e, uint32_t f, uint32_t g);
extern void *func_02062a30(void *owner);
extern void func_02056bc0(void *object, void *node);
extern int func_ov009_021ad700(uint8_t *self, int p);
extern void *func_020159c8(void *o, uint32_t id);
extern void func_02005988(void *buf, void *s);
extern void func_02031754(void *a, int id, void *buf);
extern void func_020059cc(void *buf);
extern int func_0201bd84(void *o, uint32_t id);
extern uint32_t func_02035ff4(void *o);
extern void *func_ov011_021c1810(uint8_t *self, uint32_t a, uint32_t b, int p);
extern void func_02035fd0(void *o);

void func_ov011_021c1608(uint8_t *self, int param)
{
    Pair pr;
    uint32_t buf20[3], buf2c[3], buf38[3], buf44[3], buf50[3], buf5c[3];
    uint8_t s68[0x60];

    void *obj, *p4, *p6, *t14, *t;
    uint8_t *q;

    *(uint32_t *)(self + 0x2bc) = 0;
    obj = *(void **)(self + 0x17c);
    {
        void **vt = *(void ***)obj;
        ((void (*)(void *))vt[11])(obj);
    }


    if ((int32_t)(func_0209a76c(param, 5) >> 32) < 2) {
        pr.a = data_ov011_021cae8c[1];
        pr.b = data_ov011_021cae8c[2];
    } else {
        pr.a = data_ov011_021cae0c[0x1f];
        pr.b = data_ov011_021cae8c[0];
    }

    func_02035f58(s68);
    func_ov009_021ad6ac(self, param, s68);

    p4 = func_0205681c(0x118);
    if (p4 != 0) {
        p4 = func_02031624(p4, self + 0x2bc, pr, 0, 0, 0);
    }

    obj = *(void **)(self + 0x17c);
    t14 = func_02062a30(obj);

    p6 = func_0205681c(0x14);
    if (p6 != 0) {
        uint32_t w = *(uint32_t *)((uint8_t *)p6 + 0xc);
        w &= ~0xffu;
        *(uint32_t *)((uint8_t *)p6 + 0xc) = w;
        *(void **)p6 = data_ov011_021caf68;
    }

    q = self + 0x14;
    func_02056bc0(q, p4);
    func_02056bc0(q, p6);
    func_02056bc0(q, t14);

    if (func_ov009_021ad700(self, param) != 0) {
        t = func_020159c8(data_020b8e44, 0xaa);
        func_02005988(buf5c, t);
        func_02031754(p4, 0xb, buf5c);
        func_020059cc(buf5c);
    }

    if (func_0201bd84(data_020b93b8, 0x27) != 0 && self[0x2c0] == 0) {
        if (self[0x27b] == 0) {
            if (func_02035ff4(s68) != 0) {
                t = func_020159c8(data_020b8e44, 0xaf);
                func_02005988(buf50, t);
                func_02031754(p4, 0x10, buf50);
                func_020059cc(buf50);
            }
        } else if (self[0x27b] == 1) {
            t = func_020159c8(data_020b8e44, 0xae);
            func_02005988(buf44, t);
            func_02031754(p4, 0x11, buf44);
            func_020059cc(buf44);
        }
    }

    t = func_020159c8(data_020b8e44, 0xac);
    func_02005988(buf38, t);
    func_02031754(p4, 0xe, buf38);
    func_020059cc(buf38);

    if (func_0201bd84(data_020b93b8, 0x28) != 0 && self[0x2c0] == 0) {
        t = func_020159c8(data_020b8e44, 0xad);
        func_02005988(buf2c, t);
        func_02031754(p4, 0xf, buf2c);
        func_020059cc(buf2c);
    }

    t = func_020159c8(data_020b8e44, 0xb0);
    func_02005988(buf20, t);
    func_02031754(p4, -2, buf20);
    func_020059cc(buf20);

    {
        Pair d = data_ov011_021cb174;
        q = func_ov011_021c1810(self, d.a, d.b, param);
    }
    func_02056bc0(self + 0x14, q);
    func_02035fd0(s68);
}
