#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x170];
    uint32_t state;
} Inner;

typedef struct Ctx {
    uint8_t pad[0x14];
    uint32_t key;
    Inner *inner;
} Ctx;

typedef struct Entry {
    uint16_t key;
    uint16_t val;
} Entry;

typedef struct Local {
    uint32_t pad;
    void *a;
    void *b;
    uint8_t flag;
} Local;

extern void func_ov003_02167490(Ctx *p);
extern void func_ov003_021674c4(Ctx *p);
extern void func_02018a68(Local *out, void *x);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_0201c9ac(void *obj, uint32_t n);
extern void func_0201c220(void *obj, uint32_t n, uint32_t v);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void *data_020b8e44;
extern void *data_020b93b8;

void func_ov003_021674f8(Ctx *p)
{
    Local loc;
    uint32_t i;
    uint32_t count;
    uint8_t *base;
    Entry *e;
    uint32_t v;
    uint32_t cur;
    Local *lp;

    func_ov003_02167490(p);
    if (p->inner->state == 0) {
        func_ov003_021674c4(p);
    }
    if (p->inner->state == 0) {
        func_02018a68(&loc, data_020b8e44);
        i = 0;
        base = (uint8_t *)func_02052d90(loc.a, loc.b);
        count = *(uint32_t *)(base + 8);
        if (i < count) {
            do {
                base = (uint8_t *)func_02052d90(loc.a, loc.b);
                e = (Entry *)(base + *(uint32_t *)(base + 0xc)) + i;
                if (p->key == e->key) {
                    base = (uint8_t *)func_02052d90(loc.a, loc.b);
                    e = (Entry *)(base + *(uint32_t *)(base + 0xc)) + i;
                    v = e->val;
                    cur = func_0201c9ac(data_020b93b8, 2);
                    func_0201c220(data_020b93b8, 2, cur + v);
                    break;
                }
                i++;
                base = (uint8_t *)func_02052d90(loc.a, loc.b);
                count = *(uint32_t *)(base + 8);
            } while (i < count);
        }
        lp = &loc;
        if (lp->a != 0) {
            if (lp->flag != 0) {
                func_02052d3c(lp->a, lp->b);
            }
            func_02052c04(lp->a);
        }
        func_02053290(lp);
    }
}
