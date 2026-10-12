#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0203b77c(uint8_t *a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0203b9cc(Pair v, uint32_t c, uint32_t d);
extern uint32_t func_02066878(const void *object);
extern void func_0205fdc8(void *object, uint32_t value);
extern void *func_0203b878(uint32_t a, void *b);
extern void func_ov009_021ad660(Pair *out, uint8_t *p, uint8_t i);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov009_021b0c30[];
extern Pair data_ov009_021b088c;

void func_ov009_021a4b0c(uint8_t *p)
{
    void *obj0;
    uint32_t tmp;
    uint8_t *q;
    Pair args;
    Pair sum;
    Pair out;
    uint8_t i;
    uint8_t *slot;
    void *obj;

    obj0 = func_0203b77c(data_ov009_021b0c30, 0, 0, 0);
    args.a = 0x10;
    args.b = 0x10;
    q = p + 0x48;
    for (i = 0; i < 10; i++) {
        tmp = ((uint32_t (*)(void *))((void **)(*(void ***)obj0))[8])(obj0);
        tmp = func_0203b9cc(args, tmp, 1);
        func_0205fdc8((void *)func_02066878((void *)tmp), 1);
        slot = p + i * 4;
        *(void **)(slot + 0x114) = func_0203b878(tmp, obj0);
        func_ov009_021ad660(&out, p, i);
        sum.a = out.a + data_ov009_021b088c.a;
        sum.b = out.b + data_ov009_021b088c.b;
        obj = *(void **)(slot + 0x114);
        ((void (*)(void *, Pair))(*(void ***)obj)[3])(obj, sum);
        obj = *(void **)(slot + 0x114);
        ((void (*)(void *, uint32_t))(*(void ***)obj)[8])(obj, 2);
        obj = *(void **)(slot + 0x114);
        ((void (*)(void *))(*(void ***)obj)[10])(obj);
        func_02056bc0(q, *(void **)(slot + 0x114));
    }
}
