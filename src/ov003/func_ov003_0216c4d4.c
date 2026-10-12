#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    void *a;
    uint32_t b;
    uint8_t c;
} Tmp;

extern void *func_0203b688(void);
extern void func_02016704(Tmp *out, uint32_t v);
extern void *func_02052d90(void *obj, uint32_t idx);
extern void func_02018b3c(Tmp *out, uint32_t v, uint32_t x);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(void *o);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_02166b24(void *mem, uint32_t x, uint32_t y, uint32_t z);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020b8e44;

void *func_ov003_0216c4d4(uint32_t x, uint8_t *p)
{
    volatile uint32_t xs;
    Tmp tmp;
    Tmp s7;
    Tmp *q;
    Tmp *t;
    void *r6;
    uint32_t val;
    uint32_t typ;
    uint32_t off;
    void *node;

    xs = x;
    r6 = func_0203b688();
    off = *(uint32_t *)(p + 8);
    typ = *(uint32_t *)(p + off + 4);
    val = *(uint32_t *)(p + off);

    func_02016704(&tmp, data_020b8e44);
    func_02052d90(tmp.a, tmp.b);

    if (typ == 0x40) {
        typ = 0;
    } else if (typ == 0x41) {
        q = &s7;
        func_02018b3c(q, data_020b8e44, val);
        typ = *(uint16_t *)((uint8_t *)func_02052d90(q->a, q->b) + 0x12);
        if (q->a != 0) {
            if (q->c != 0) {
                func_02052d3c(q->a, q->b);
            }
            func_02052c04(q->a);
        }
        func_02053290(q);
    }

    node = func_0205681c(0x20);
    if (node != 0) {
        node = func_ov003_02166b24(node, xs, val, typ);
    }
    func_02056bc0(r6, node);

    t = &tmp;
    if (tmp.a != 0) {
        if (t->c != 0) {
            func_02052d3c(t->a, t->b);
        }
        func_02052c04(t->a);
    }
    func_02053290(t);
    return r6;
}
