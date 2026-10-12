#include "ffc/types.h"

extern uint32_t func_ov002_021a1958(void *a, uint32_t i);
extern void func_0200d5d4(void *obj, void *item, uint32_t tag);
extern void func_02015e8c(void *out, uint32_t v);
extern void *func_02052d90(void *m, uint32_t index);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void func_02053290(void *o);
extern uint32_t func_ov002_021a1acc(void *o);
extern uint32_t func_0206c184(uint32_t a, uint32_t b);
extern uint32_t func_ov002_021a18bc(void *o);
extern uint32_t func_ov002_021a18c4(void *o, uint32_t i);
extern uint32_t data_020b8e44;

typedef struct { uint32_t *data; uint32_t count; uint32_t cap; } List;
typedef struct { uint32_t hdr; uint32_t a; uint32_t b; uint8_t flag; } Tmp;
typedef struct { uint8_t pad[0x14]; uint32_t off; } Ctx;

void func_ov002_021a5f84(void *s0, void *a, List *list, Ctx *c)
{
    Tmp t1;
    Tmp t2;
    uint32_t v;
    uint32_t y;
    uint32_t acc;
    int limit;
    uint32_t tag;
    uint32_t off;
    uint8_t *p;
    uint8_t ty;
    uint32_t i;
    uint8_t r6, r7;

    off = c->off;
    if (off != 0) {
        p = (uint8_t *)c + off;
    } else {
        p = (uint8_t *)0;
    }
    ty = *p;

    if (ty == 3) {
        for (i = 0; i < 6; i++) {
            v = func_ov002_021a1958(a, i);
            if (v) {
                if (list->count < list->cap) {
                    list->data[list->count++] = v;
                } else {
                    ((uint8_t *)&tag)[3] = 0;
                    func_0200d5d4(list, &v, tag);
                }
            }
        }
        return;
    }
    if (ty != 0x11) {
        return;
    }

    func_02015e8c(&t1, data_020b8e44);
    r6 = ((uint8_t *)func_02052d90((void *)t1.a, t1.b))[4];
    if (t1.a) {
        if (t1.flag) {
            func_02052d3c(t1.a, t1.b);
        }
        func_02052c04(t1.a);
    }
    func_02053290(&t1);

    func_02015e8c(&t2, data_020b8e44);
    r7 = ((uint8_t *)func_02052d90((void *)t2.a, t2.b))[5];
    if (t2.a) {
        if (t2.flag) {
            func_02052d3c(t2.a, t2.b);
        }
        func_02052c04(t2.a);
    }
    func_02053290(&t2);

    limit = r6 + (int)func_0206c184(func_ov002_021a1acc(s0), (uint32_t)(r7 - r6 + 1));
    for (i = 0; (int)i < limit; i++) {
        acc = func_ov002_021a1acc(s0);
        y = func_ov002_021a18bc(a);
        y = func_0206c184(acc, y);
        v = func_ov002_021a18c4(a, y);
        if (list->count < list->cap) {
            list->data[list->count++] = v;
        } else {
            ((uint8_t *)&tag)[1] = 0;
            func_0200d5d4(list, &v, tag);
        }
    }
}
