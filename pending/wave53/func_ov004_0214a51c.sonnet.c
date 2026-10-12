#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_0206aed4(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern void *func_ov004_0214e854(void *obj);
extern void func_0206b014(void *obj, uint32_t v);
extern void func_0206b034(void *obj, uint32_t v);
extern void func_0206b048(void *obj, uint32_t v);
extern void func_0206b068(void *obj, uint32_t v);
extern void func_0206afdc(void *obj);
extern int32_t func_02081210(void *object, uint32_t v);
extern uint32_t data_ov004_02158b04[];
extern Pair data_ov004_02158cac;

void func_ov004_0214a51c(void *self)
{
    uint8_t *p = (uint8_t *)self;
    int32_t r;

    if (*(void **)(p + 0xa0) == 0) {
        void *o = func_0205681c(0x4c);
        if (o != 0) {
            o = func_0206aed4(o, -1, 0, 1);
        }
        *(void **)(p + 0xa0) = o;
    }

    if (p[0x95] == 0) {
        func_0206b014(*(void **)(p + 0xa0), 0);
    } else {
        void *res = func_ov004_0214e854(*(void **)(p + 0x88));
        void **vt = *(void ***)res;
        void *(*fn)(void *) = (void *(*)(void *))(vt[0x34 / 4]);
        uint32_t v = (uint32_t)fn(res);
        func_0206b014(*(void **)(p + 0xa0), v);
    }

    func_0206b034(*(void **)(p + 0xa0), 0x3f);
    func_0206b048(*(void **)(p + 0xa0), 1);
    func_0206b068(*(void **)(p + 0xa0), 1);
    func_0206afdc(*(void **)(p + 0xa0));

    *(uint32_t *)(p + 0x98) = 0;
    uint32_t q = *(uint32_t *)(p + 0xa8);

    if (p[0x94] != 0) {
        r = func_02081210((void *)data_ov004_02158b04[1], q);
    } else {
        r = func_02081210((void *)data_ov004_02158b04[6], q);
    }
    *(int32_t *)(p + 0x9c) = (r >> 12) - 1;

    *(Pair *)(p + 0x80) = data_ov004_02158cac;
}
