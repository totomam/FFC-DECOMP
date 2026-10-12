#include "ffc/types.h"

extern void *func_ov002_021aa820(void *);
extern void *func_0205681c(uint32_t);
extern void func_02055914(void *, void *);
extern char data_020abf58[];

typedef struct Obj {
    void *vt;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint8_t f24;
    uint8_t f25;
} Obj;

void func_ov002_021ad184(uint8_t *p)
{
    Obj *obj;
    uint8_t b31; uint8_t b30;
    uint32_t v20, v1c, v2c, v28, v24;

    if (*(void **)(p + 0x14) != 0) {
        *(void **)(p + 0x24) = func_ov002_021aa820(*(void **)(p + 0x14));
    }

    obj = (Obj *)func_0205681c(0x28);
    if (obj != 0) {
        b31 = *(uint8_t *)(p + 0x31);
        v20 = *(uint32_t *)(p + 0x20);
        b30 = *(uint8_t *)(p + 0x30);
        v1c = *(uint32_t *)(p + 0x1c);
        v28 = *(uint32_t *)(p + 0x28);
        v2c = *(uint32_t *)(p + 0x2c);
        v24 = *(uint32_t *)(p + 0x24);
        obj->f8 = 0;
        obj->fc = 0x1010e;
        obj->vt = data_020abf58;
        obj->f10 = v1c;
        obj->f14 = v20;
        obj->f18 = v24;
        obj->f1c = v28;
        obj->f20 = v2c;
        obj->f24 = b30;
        obj->f25 = b31;
    }

    func_02055914(*(void **)(p + 0x18), obj);

    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & 0xFFFFFF00) | 2;
}
