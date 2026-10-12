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

int func_ov000_02159f88(int a, Obj *p, int idx)
{
    int i;
    int local;

    if (p->f0 == 0 && p->count != 0) {
        if (func_ov000_02154ed0(data_ov000_0217004c.sub->base + idx * 12)) {
            if (data_ov000_0217004c.sub->state != 1) {
                return 0;
            }
            for (i = 0; i < p->count; i++) {
                if (func_ov000_02159d64(data_ov000_0217004c.sub->base, idx, p->elems[i].first)) {
                    data_ov000_0217004c.sub->cnt++;
                    data_ov000_0217004c.sub->f1e = 1;
                    p->status = 0x601;
                    return 0x601;
                }
            }
            for (i = 0; i < p->count; i++) {
                func_ov001_02175e40(a, p->elems[i].first, &local);
                func_ov000_02159f34();
                if (local == -1) {
                    func_ov000_02159ea4(p->elems[i].first);
                    func_ov000_02154f6c(data_ov000_0217004c.sub->base + idx * 12, 1);
                } else {
                    func_ov000_02155478(data_ov000_0217004c.sub->base + idx * 12, p->elems[0].first);
                    func_ov000_02154f04(data_ov000_0217004c.sub->base + idx * 12);
                    func_ov000_02154f24(data_ov000_0217004c.sub->base + idx * 12, 1);
                    if (func_ov000_02154e58(data_ov000_0217004c.sub->base + idx * 12)) {
                        func_ov000_02154f48(data_ov000_0217004c.sub->base + idx * 12, 1);
                    }
                    func_ov000_02159a9c(idx);
                    data_ov000_0217004c.sub->cnt++;
                    data_ov000_0217004c.sub->f1e = 1;
                    data_ov000_0217004c.sub->f1d = 1;
                    p->status = 0x601;
                    return 0x601;
                }
            }
            if (p->status == 0x600) {
                return 0x600;
            }
            data_ov000_0217004c.sub->cnt++;
            data_ov000_0217004c.sub->f1e = 1;
            return 0;
        }
    }

    if (p->f0 != 0) {
        return func_ov000_02159f34();
    }

    if (data_ov000_0217004c.sub->state != 1) {
        int r = func_ov000_02154ed0(data_ov000_0217004c.sub->base + idx * 12);
        if (r) {
            return r;
        }
    }
    data_ov000_0217004c.sub->cnt++;
    data_ov000_0217004c.sub->f1e = 1;
    return 0;
}
