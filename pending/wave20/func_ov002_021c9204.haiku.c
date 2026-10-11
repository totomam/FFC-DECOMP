#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint8_t data_020abe98[];

typedef struct {
    void *vtbl;
    uint32_t unk4;
    uint32_t unk8;
    uint32_t unkC;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
} Obj;

void func_ov002_021c9204(uint32_t a, uint32_t b, uint32_t c) {
    Obj *p = (Obj *)func_0205681c(0x1c);
    if (p != 0) {
        p->unk8 = 0;
        p->unkC = 0x10144;
        p->vtbl = data_020abe98;
        p->f10 = a;
        p->f14 = b;
        p->f18 = c;
    }
}
