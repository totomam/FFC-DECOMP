#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_02056c4c(void *obj);
extern void *func_0203b95c(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02064494(void *obj, uint32_t a, uint32_t b);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203b688(void);
extern uint32_t func_02056aec(void *obj);
extern uint32_t func_020655b8(void *obj);
extern uint32_t func_020655dc(void *obj, uint32_t a, uint32_t b);
extern uint32_t func_02062a78(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
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
    uint32_t tbl[6];
    uint32_t *elem;
    uint32_t i, j;
    void *obj;
    void *o5;
    void **vt;
    uint8_t *sel;
    uint32_t v, first, off, off2, sum, sum2, r6;
    uint32_t e0, e1, e2, s1, s2, s3;
    Pair ret;

    tbl[0] = data_0209df4c;
    tbl[1] = data_0209df48;
    tbl[2] = data_0209df44;
    tbl[3] = data_0209df08;
    tbl[4] = data_0209df3c;
    tbl[5] = data_0209df38;
    elem = &tbl[flag ? 0 : 3];
    func_02056c4c(*(void **)(self + 0x88));

    for (i = 0; i < 2; i++) {
        sel = (i != 0) ? (self + 0x80) : (self + 0x84);
        v = *(uint32_t *)sel;
        e1 = elem[1];
        e2 = elem[2];
        e0 = elem[0];
        for (j = 0; j < 4; j++) {
            obj = func_0203b95c(data_ov002_021d7128, v, 0, 1);
            vt = *(void ***)obj;
            ((void (*)(void *))vt[10])(obj);
            ((void (*)(void *, uint32_t))vt[8])(obj, 0);
            off = flag ? 0 : (uint32_t)-192;
            first = data_ov002_021d712c[j].a;
            r6 = data_ov002_021d712c[j].b;
            sum = r6 + off;
            ((void (*)(void *, uint32_t, uint32_t))vt[3])(obj, first, sum);
            func_02064494(obj, (j & 1) != 0, (j & 2) != 0);
            func_02064aa8(obj);
            func_0205f2f0(obj, 1);
            func_02056bc0(*(void **)(self + 0x88), obj);
            o5 = func_0203b688();
            s1 = func_02056aec(obj);
            s2 = func_020655b8(obj);
            s3 = func_020655dc(obj, 3, 0);
            off2 = flag ? (uint32_t)-192 : 0;
            sum2 = r6 + off2;
            ((void (*)(Pair *, void *))vt[4])(&ret, obj);
            r6 = func_02062a78(obj, ret.a, ret.b, first, e1, e2);
            sel = 0;
            s1 = s1;
            {
                uint32_t t3 = func_020655b8(obj);
                obj = (void *)(uintptr_t)func_020655dc(obj, 2, 0);
                func_02056bc0(o5, func_0203b708(e0));
                func_02056bc0(o5, obj);
                func_02056bc0(o5, (void *)(uintptr_t)t3);
                func_02056bc0(o5, (void *)(uintptr_t)r6);
                func_02056bc0(o5, (void *)(uintptr_t)s3);
                func_02056bc0(o5, (void *)(uintptr_t)s2);
                func_02056bc0(o5, (void *)(uintptr_t)s1);
                func_02056bc0(*(void **)(self + 0x88), o5);
            }
        }
    }
}
