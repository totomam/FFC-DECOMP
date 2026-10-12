#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint8_t pad[0xb8];
    void *f0;
    uint8_t pad2[0xec - 0xbc];
    void *slots[1];
} Obj;

extern void *func_0205681c(uint32_t size);
extern void func_ov009_021ad660(Pair *out, Obj *obj, uint32_t idx);
extern uint8_t func_02036360(const void *object);
extern uint32_t func_020366d4(void *object);
extern uint32_t func_02035ff4(void *object);
extern uint32_t func_020363a4(const void *object);
extern void *func_ov009_0219a130(void *p, void *q, Pair t, uint32_t a, uint32_t b, uint32_t flag, uint32_t d);
extern void func_020695ec(Obj *obj, void *res);

void func_ov009_021a45f8(Obj *obj, uint32_t idx, void *arg)
{
    void *res;
    Pair tmp;
    uint32_t a;
    uint32_t b;
    uint32_t flag;
    uint32_t e;

    res = func_0205681c(0xb4);
    if (res != 0) {
        func_ov009_021ad660(&tmp, obj, idx);
        a = func_02036360(arg);
        b = func_020366d4(arg);
        e = func_02035ff4(arg);
        flag = 1;
        if (e != 0) {
            flag = 0;
        }
        e = func_020363a4(arg);
        res = func_ov009_0219a130(res, obj->f0, tmp, a, b, flag, e);
    }
    {
        uint8_t *slot = (uint8_t *)obj;
        slot += 0xec;
        ((void **)slot)[idx] = res;
    }
    func_020695ec(obj, res);
}
