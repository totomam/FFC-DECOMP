#include "ffc/types.h"

extern uint32_t data_020b8e44;
extern void func_02016074(void *obj, uint32_t a, uint32_t b);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_ov002_021a18bc(const void *object);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);

typedef struct {
    uint32_t pad;
    void *a;
    uint32_t b;
    uint8_t flag;
} Obj;

typedef struct {
    uint32_t pad;
    uint32_t count;
    uint32_t tabOff;
} Outer;

typedef struct {
    uint32_t count;
    uint32_t elemOff;
} Sub;

typedef struct {
    uint16_t type;
    int16_t val;
} Elem;

int func_ov002_021c9a5c(int unused, void *x, void *y)
{
    int32_t acc[4];
    Obj o;
    Obj *q;
    Outer *p;
    uint32_t i, j;
    int k;
    uint32_t off;
    Sub *base;
    Elem *elems;
    uint32_t fx, fy;
    int best;
    int idx;

    for (k = 0; k < 4; k++) {
        acc[k] = 0;
    }
    func_02016074(&o, data_020b8e44, 0x12);
    p = func_02052d90(o.a, o.b);
    for (i = 0; i < p->count; i++) {
        off = p->tabOff;
        base = (Sub *)((char *)p + *(uint32_t *)((char *)p + off + i * 4));
        j = 0;
        for (j = 0; j < base->count; j++) {
            Elem *e;
            int16_t val;
            elems = (Elem *)((char *)base + base->elemOff);
            e = &elems[j];
            val = e->val;
            switch (e->type) {
            case 0:
                break;
            case 1:
                if (func_ov002_021a18bc(x) == 1) {
                    if (func_ov002_021a18bc(y) == 1) {
                        acc[i] += val;
                    }
                }
                break;
            case 2:
                if (func_ov002_021a18bc(x) == func_ov002_021a18bc(y)) {
                    acc[i] += val;
                }
                break;
            case 3:
                fx = func_ov002_021a18bc(x);
                fy = func_ov002_021a18bc(y);
                if ((int)fx < (int)fy) {
                    acc[i] += val;
                }
                break;
            case 4:
                fx = func_ov002_021a18bc(x);
                fy = func_ov002_021a18bc(y);
                if ((int)fx > (int)fy) {
                    acc[i] += val;
                }
                break;
            }
        }
    }
    q = &o;
    if (q->a != 0) {
        if (q->flag) {
            func_02052d3c(q->a, q->b);
        }
        func_02052c04(q->a);
    }
    func_02053290(q);
    best = (int)0x80000000;
    idx = 5;
    for (k = 0; k < 4; k++) {
        if (acc[k] > best) {
            idx = k;
            best = acc[k];
        }
    }
    return idx;
}
