#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    void *vtbl;
    uint8_t pad[0x94 - 4];
    uint32_t f94;
    uint32_t f98;
} Obj;

extern Pair data_ov009_021b0914[];
extern char data_ov009_021b0b88[];
extern Obj *func_0205681c(uint32_t size);
extern Obj *func_02069210(Obj *object);
extern void func_020695ec(void *self, Obj *obj);

void func_ov009_021a44e4(void *param)
{
    Pair *tbl = data_ov009_021b0914;
    uint8_t i;
    for (i = 0; i < 2; i++) {
        Obj *obj = func_0205681c(0x9c);
        if (obj != 0) {
            Pair p = tbl[i];
            func_02069210(obj);
            obj->vtbl = data_ov009_021b0b88;
            obj->f94 = p.a;
            obj->f98 = p.b;
        }
        ((Obj **)param)[0x158 / 4 + i] = obj;
        func_020695ec(param, obj);
    }
}
