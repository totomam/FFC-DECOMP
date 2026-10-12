#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} FfcPair;

typedef struct {
    uint32_t f0;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} FfcLoc;

extern void *data_020b8e44;
extern uint8_t *data_0213df18;
extern uint8_t data_ov003_02179914[];

extern void func_02016a94(void *out, void *v);
extern uint8_t *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_02092948(void *a, void *b);
extern void func_ov003_0214bdfc(void *self, uint32_t flag);
extern void *func_0203b84c(void *a, uint32_t b);
extern void func_0205f818(void *obj, uint32_t v);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02091b10(void *object, void *first, void *second);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);

void func_ov003_0214bcb0(uint8_t *self, uint32_t flag, uint32_t index, FfcPair *args)
{
    uint8_t tmp[0x44];
    FfcLoc L;
    uint8_t *obj;
    uint8_t *p;
    uint8_t *m;
    uint8_t *m2;
    uint8_t *r7;
    uint8_t *n;
    uint32_t *q;
    uint32_t old;

    obj = flag ? *(uint8_t **)(self + 0x1dc) : *(uint8_t **)(self + 0x1d8);
    q = flag ? (uint32_t *)(self + 0x1e4) : (uint32_t *)(self + 0x1e0);

    func_02016a94(&L, data_020b8e44);
    m = func_02052d90(L.mar, L.idx);
    r7 = m + *(uint32_t *)(m + *(uint32_t *)(m + 0xc) + index * 4);
    old = *q;
    m2 = func_02052d90(L.mar, L.idx);
    n = m2 + *(uint32_t *)(m2 + *(uint32_t *)(m2 + 0xc) + old * 4);

    if (obj == 0 || func_02092948(r7 + *(uint32_t *)(r7 + 4), n + *(uint32_t *)(n + 4)) != 0) {
        func_ov003_0214bdfc(self, flag);
        if (flag) {
            obj = *(uint8_t **)(self + 0x1ac);
        } else {
            if (*(void **)(self + 0x1b0) == 0) {
                *(void **)(self + 0x1b0) = func_0203b84c(*(void **)(data_0213df18 + 0x24), (void *)0x1e);
                func_0205f818(*(void **)(self + 0x1b0), 7);
                func_02056bc0(self + 0x48, *(void **)(self + 0x1b0));
            }
            obj = *(uint8_t **)(self + 0x1b0);
        }
        func_02091b10(tmp, data_ov003_02179914, r7 + *(uint32_t *)(r7 + 4));
        p = func_0203b95c(tmp, obj, 0, 1);
        ((void (*)(void *))(*(void **)(*(uint8_t **)p + 0x28)))(p);
        obj = p;
        ((void (*)(void *, uint32_t))(*(void **)(*(uint8_t **)obj + 0x20)))(obj, 0);
        func_02056bc0(*(void **)(self + 0x188), obj);
    }

    ((void (*)(void *, uint32_t, uint32_t))(*(void **)(*(uint8_t **)obj + 0x38)))(obj, *(uint16_t *)r7, 0);
    ((void (*)(void *, FfcPair))(*(void **)(*(uint8_t **)obj + 0xc)))(obj, *args++);
    *q = index;
    if (flag) {
        *(uint8_t **)(self + 0x1dc) = obj;
    } else {
        *(uint8_t **)(self + 0x1d8) = obj;
    }

    if (L.mar != 0) {
        if (L.flag) {
            func_02052d3c(L.mar, L.idx);
        }
        func_02052c04(L.mar);
    }
    func_02053290(&L);
}
