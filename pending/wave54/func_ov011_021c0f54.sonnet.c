#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_ov011_021bff9c(void *p);
extern void *func_ov011_021c02a8(void *self, Pair p);
extern void *func_ov009_021a3fc4(void *x);
extern void func_02056bc0(void *object, void *node);
extern int func_0201f2e0(void *a, void *b);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *x, uint32_t n);
extern void func_02005988(void *dst, void *src);
extern void *func_02032d24(void *obj, Pair pp, void *c, uint32_t d, uint32_t e);
extern void *func_020059cc(void *object);
extern void *func_02062a30(void *owner);
extern void *func_0203bf90(uint32_t x);
extern void *func_0203bf7c(uint32_t x);
extern void *func_0203b6fc(void);
extern void *func_ov009_0219d374(void);
extern void *func_02056aec(void *x);
extern void func_0201f1a8(void *a, uint8_t b, void *c);
extern void *data_020b93b8;
extern void *data_020b8e44;
extern Pair data_ov011_021cb144;

void func_ov011_021c0f54(void *param)
{
    uint8_t *s = (uint8_t *)param;
    uint32_t o = 0x27a;
    void *sav;
    Pair pp;
    uint8_t sbuf[12];
    void *obj;
    void *t;
    void *res;
    void *r4;
    int flag;

    if (s[o]) {
        s[o] = 0;
        func_ov011_021bff9c(s);
        obj = *(void **)(s + 0x174);
        *(uint32_t *)((uint8_t *)obj + 0xc) = (*(uint32_t *)((uint8_t *)obj + 0xc) & ~0xffu) | 2u;
        r4 = func_ov011_021c02a8(s, data_ov011_021cb144);
        o += 0x16;
        t = func_ov009_021a3fc4(*(void **)(s + o));
        {
        uint32_t *l = (uint32_t *)s + 5;
        func_02056bc0(l, t);
        func_02056bc0(l, r4);
        }
        return;
    }

    if (func_0201f2e0(data_020b93b8, s + (o - 0x5a)) == 0) {
        flag = 0;
        res = func_0205681c(0xb0);
        if (res != 0) {
            obj = func_020159c8(data_020b8e44, 0xb4);
            func_02005988(sbuf, obj);
            pp.a = 0x80;
            pp.b = 0x60;
            flag = 1;
            res = func_02032d24(res, pp, sbuf, 4, 0x78);
        }
        func_02056bc0(s + 0x14, res);
        if (flag) {
            func_020059cc(sbuf);
        }
        obj = *(void **)(s + 0x17c);
        ((void (*)(void *))(*(void ***)obj)[11])(obj);
        obj = *(void **)(s + 0x17c);
        t = func_02062a30(obj);
        func_02056bc0((uint32_t *)s + 5, t);
    } else {
        obj = *(void **)(s + (o - 0xfe));
        ((void (*)(void *))(*(void ***)obj)[11])(obj);
        obj = func_0203bf90(0x1e);
        sav = obj;
        r4 = func_0203bf7c(0x1e);
        t = func_0203b6fc();
        func_02056bc0(t, r4);
        func_02056bc0(t, sav);
        func_02056bc0(s + 0x14, t);
        o += 0x3e;
        if (*(void **)(s + o) != 0) {
            t = func_ov009_0219d374();
            func_02056bc0(s + 0x14, t);
        }
        t = func_02056aec(s);
        func_02056bc0(s + 0x14, t);
        func_0201f1a8(data_020b93b8, s[0x2c9], s + 0x220);
    }
}
