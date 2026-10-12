#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    void *p1;
    void *p2;
    uint8_t flag;
} FfcTmp;

extern void *func_0203b688(void);
extern void func_02019684(FfcTmp *out, uint32_t g, uint32_t v);
extern void *func_02052d90(void *a, void *b);
extern void *func_ov003_0216ca20(void *a, void *node, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;

void *func_ov003_0216c728(void *a, uint8_t *b, uint32_t c, uint32_t d, uint32_t e)
{
    FfcTmp t;
    void *obj = func_0203b688();
    uint32_t i;
    uint8_t *r;
    uint8_t *base;
    FfcTmp *tp;

    func_02019684(&t, data_020b8e44, *(uint32_t *)(b + *(uint32_t *)(b + 8)));
    r = func_02052d90(t.p1, t.p2);
    base = 0;
    if (*(uint32_t *)(r + 4) != 0) {
        base = r + *(uint32_t *)(r + 4);
    }
    i = 0;
    while (i < *(uint32_t *)base) {
        void *res = func_ov003_0216ca20(a, base + *(uint32_t *)(base + *(uint32_t *)(base + 4) + 4 * i), c, d, e);
        func_02056bc0(obj, res);
        i++;
    }
    tp = &t;
    if (tp->p1 != 0) {
        if (tp->flag) {
            func_02052d3c(tp->p1, tp->p2);
        }
        func_02052c04(tp->p1);
    }
    func_02053290(tp);
    return obj;
}
