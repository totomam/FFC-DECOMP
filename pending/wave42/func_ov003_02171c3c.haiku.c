#include "ffc/types.h"

extern void func_020187ec(void *out, void *v);
extern void *func_02052d90(void *mar, uint32_t index);
extern int func_0201bfa4(uint32_t a, uint32_t b);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void *data_020b8e44;
extern uint32_t data_020b93b8;

typedef struct {
    uint32_t pad;
    void *p;
    uint32_t n;
    uint8_t flag;
} Local;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t count;
    uint32_t off;
} Mar;

int func_ov003_02171c3c(void)
{
    Local l;
    int ret = 0;
    uint32_t i;
    Local *lp;

    func_020187ec(&l, data_020b8e44);
    for (i = 0; i < ((Mar *)func_02052d90(l.p, l.n))->count; i++) {
        Mar *m = (Mar *)func_02052d90(l.p, l.n);
        uint16_t v = *(uint16_t *)((uint8_t *)m + m->off + i * 4);
        if (func_0201bfa4(data_020b93b8, v) == 0) {
            ret++;
        }
    }
    lp = &l;
    if (l.p != 0) {
        if (lp->flag != 0) {
            func_02052d3c(lp->p, lp->n);
        }
        func_02052c04(lp->p);
    }
    func_02053290(lp);
    return ret;
}
