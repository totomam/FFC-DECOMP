#include "ffc/types.h"

typedef struct Sub {
    int state;
    int pad[5];
    uint8_t *base;
    uint8_t cnt;
    uint8_t f1d;
    uint8_t f1e;
} Sub;

typedef struct Glob {
    int pad[3];
    Sub *sub;
} Glob;

typedef struct Elem {
    int first;
    uint8_t rest[0xac];
} Elem;

typedef struct Obj {
    int f0;
    int count;
    int status;
    Elem *elems;
} Obj;

extern Glob data_ov000_0217004c;
extern int func_ov000_02154ed0(void *p);
extern int func_ov000_02159d64(void *base, int idx, int elem);
extern int func_ov001_02175e40(int a, int elem, int *out);
extern int func_ov000_02159f34(void);
extern int func_ov000_02159ea4(int elem);
extern void func_ov000_02154f6c(void *p, int v);
extern void func_ov000_02155478(void *p, int v);
extern void func_ov000_02154f04(void *p);
extern void func_ov000_02154f24(void *p, int v);
extern int func_ov000_02154e58(void *p);
extern void func_ov000_02154f48(void *p, int v);
extern void func_ov000_02159a9c(int idx);

void func_ov000_02159f88(int a, Obj *p, int idx)
{
    int i;
    int local;
    volatile int off;
    int eo;

    if (p->f0 == 0 && p->count != 0) {
        off = idx * 12;
        if (func_ov000_02154ed0(data_ov000_0217004c.sub->base + off)) {
            if (data_ov000_0217004c.sub->state != 1) {
                return;
            }
            for (i = 0; i < p->count; i++) {
                if (func_ov000_02159d64(data_ov000_0217004c.sub->base, idx, p->elems[i].first)) {
                    data_ov000_0217004c.sub->cnt++;
                    data_ov000_0217004c.sub->f1e = 1;
                    p->status = 0x601;
                    return;
                }
            }
            for (i = 0; i < p->count; i++) {
                eo = i * 0xb0;
                func_ov001_02175e40(a, *(int *)((char *)p->elems + eo), &local);
                func_ov000_02159f34();
                if (local == -1) {
                    func_ov000_02159ea4(*(int *)((char *)p->elems + eo));
                    func_ov000_02154f6c(data_ov000_0217004c.sub->base + off, 1);
                } else {
                    Glob *g = &data_ov000_0217004c;
                    int o2 = idx * 12;
                    func_ov000_02155478(g->sub->base + o2, p->elems[0].first);
                    func_ov000_02154f04(g->sub->base + o2);
                    func_ov000_02154f24(g->sub->base + o2, 1);
                    if (func_ov000_02154e58(g->sub->base + o2)) {
                        func_ov000_02154f48(g->sub->base + off, 1);
                    }
                    func_ov000_02159a9c(idx);
                    g->sub->cnt++;
                    g->sub->f1e = 1;
                    p->status = 0x601;
                    g->sub->f1d = 1;
                    return;
                }
            }
            if (p->status == 0x600) {
                return;
            }
            data_ov000_0217004c.sub->cnt++;
            data_ov000_0217004c.sub->f1e = 1;
            return;
        }
    }

    if (p->f0 != 0) {
        if (func_ov000_02159f34()) return;
        return;
    }

    if (data_ov000_0217004c.sub->state != 1) {
        int r = func_ov000_02154ed0(data_ov000_0217004c.sub->base + idx * 12);
        if (r) {
            return;
        }
    }
    data_ov000_0217004c.sub->cnt++;
    data_ov000_0217004c.sub->f1e = 1;
    return;
}
