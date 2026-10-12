#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct { uint32_t a; uint32_t b; uint32_t c; } Trip;

extern void func_02056c4c(void *obj);
extern void *func_0203b95c(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02064494(void *obj, uint32_t a, uint32_t b);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203b688(void);
extern void *func_02056aec(void *obj);
extern void *func_020655b8(void *obj);
extern void *func_020655dc(void *obj, uint32_t a, uint32_t b);
extern uint32_t func_02062a78(void *obj, Pair a, Pair b, uint32_t d, uint32_t e);
extern void *func_0203b708(uint32_t v);

extern uint32_t data_0209df4c;
extern uint32_t data_0209df48;
extern uint32_t data_0209df44;
extern uint32_t data_0209df08;
extern uint32_t data_0209df3c;
extern uint32_t data_0209df38;
extern void *data_ov002_021d7128;
extern Pair data_ov002_021d712c[];

void func_ov002_021c32a8(uint8_t *self, uint32_t flag) {
    Trip tbl[2];
    Trip *elem;
    int i, j;
    void *obj;
    void *o5;
    uint32_t v, r6, sumA, sumB;
    Pair q;
    Pair ret;
    Pair p;
    void *s1, *s2, *s3, *t3;

    func_02056c4c(*(void **)(self + 0x88));
    tbl[0].a = data_0209df4c;
    tbl[0].b = data_0209df48;
    tbl[0].c = data_0209df44;
    tbl[1].a = data_0209df08;
    tbl[1].b = data_0209df3c;
    tbl[1].c = data_0209df38;
    elem = &tbl[flag == 0];

    for (i = 0; i < 2; i++) {
        if (i != 0) {
            v = *(uint32_t *)(self + 0x80);
        } else {
            v = *(uint32_t *)(self + 0x84);
        }
        for (j = 0; j < 4; j++) {
            obj = func_0203b95c(data_ov002_021d7128, v, 0, 1);
            ((void (*)(void *))(*(void ***)obj)[10])(obj);
            ((void (*)(void *, uint32_t))(*(void ***)obj)[8])(obj, 0);
            p.a = data_ov002_021d712c[j].a;
            r6 = data_ov002_021d712c[j].b;
            p.b = r6 + (flag ? 0 : (uint32_t)-192);
            ((void (*)(void *, Pair))(*(void ***)obj)[3])(obj, p);
            func_02064494(obj, (j & 1) != 0, (j & 2) != 0);
            func_02064aa8(obj);
            func_0205f2f0(obj, 1);
            func_02056bc0(*(void **)(self + 0x88), obj);
            o5 = func_0203b688();
            s1 = func_02056aec(obj);
            s2 = func_020655b8(obj);
            s3 = func_020655dc(obj, 3, 0);
            q.a = p.a;
            q.b = r6 + (flag ? (uint32_t)-192 : 0);
            ((void (*)(Pair *, void *))(*(void ***)obj)[4])(&ret, obj);
            r6 = func_02062a78(obj, ret, q, elem->b, elem->c);
            t3 = func_020655b8(obj);
            obj = func_020655dc(obj, 2, 0);
            func_02056bc0(o5, func_0203b708(elem->a));
            func_02056bc0(o5, obj);
            func_02056bc0(o5, t3);
            func_02056bc0(o5, (void *)r6);
            func_02056bc0(o5, s3);
            func_02056bc0(o5, s2);
            func_02056bc0(o5, s1);
            func_02056bc0(*(void **)(self + 0x88), o5);
        }
    }
}
