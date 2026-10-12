#include "ffc/types.h"

extern void func_02056c4c(uint32_t x);
extern int32_t func_ov009_0219ced8(void *a, void *b);
extern void *func_0203bc04(uint32_t a, int32_t b, int32_t c, int32_t d);
extern void func_02056bc0(uint32_t object, uint32_t node);
extern void *data_0213df18;
extern uint32_t data_0213df20;

typedef void (*VFn0)(void *);
typedef void (*VFn1)(void *, int32_t);

void func_ov009_0219cf28(void *a0, void *a1) {
    uint8_t *self = (uint8_t *)a0;
    uint32_t v;
    uint8_t idx;
    int32_t r;
    void *obj;

    if (self[0x204] == 0) {
        v = ((uint32_t *)data_0213df18)[8];
    } else {
        v = ((uint32_t *)data_0213df18)[9];
    }
    data_0213df20 = v;
    func_02056c4c(*(uint32_t *)(self + 0x16c));
    r = func_ov009_0219ced8(self, a1);
    if (self[0x188] != r) {
        self[0x188] = (uint8_t)r;
    }
    idx = self[0x188];
    obj = func_0203bc04(*(uint32_t *)(self + (idx << 2) + 0x80), 0, 0, 0);
    *(void **)(self + 0xa4) = obj;
    ((VFn0)(*(void ***)obj)[10])(obj);
    obj = *(void **)(self + 0xa4);
    ((VFn1)(*(void ***)obj)[8])(obj, 3);
    func_02056bc0(*(uint32_t *)(self + 0x16c), *(uint32_t *)(self + 0xa4));
}
