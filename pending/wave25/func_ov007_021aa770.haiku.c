#include "ffc/types.h"

extern void func_02056c9c(void *p, int32_t x);
extern uint32_t data_ov007_021c4a40[];
extern uint32_t data_ov007_021c4d38[];
extern uint32_t data_ov007_021c4d40[];

typedef struct {
    void *vtbl;
    uint8_t pad[0x7c];
    uint32_t f80;
    uint32_t f84;
    int32_t f88;
} Obj;

void *func_ov007_021aa770(void *p, int32_t v)
{
    Obj *o = (Obj *)p;
    uint32_t *src;
    uint32_t a;
    uint32_t b;

    func_02056c9c(p, 0);
    o->vtbl = data_ov007_021c4a40;
    o->f88 = v;
    if (v >= 0) {
        src = data_ov007_021c4d38;
    } else {
        src = data_ov007_021c4d40;
    }
    a = src[0];
    b = src[1];
    o->f80 = a;
    o->f84 = b;
    return p;
}
