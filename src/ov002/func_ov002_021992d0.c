#include "ffc/types.h"

extern void *func_ov002_02196414(void *object);
extern void func_02005db4(void *object, uint32_t value);
extern void func_02005d8c(void *object);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_02005dc8(void *object);
extern void func_02055914(void *a, void *b);
extern uint8_t data_020aca98[];

typedef struct {
    void *vt;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint8_t f18;
    uint8_t f19;
} Obj;

void func_ov002_021992d0(uint8_t *p) {
    if (*(void **)(p + 0xc8) == 0) {
        return;
    }
    if (*(uint16_t *)((uint8_t *)func_ov002_02196414(*(void **)(p + 0xc8)) + 0x318) == 0) {
        return;
    }
    func_02005db4(*(void **)(p + 0xe8),
                  *(uint16_t *)((uint8_t *)func_ov002_02196414(*(void **)(p + 0xc8)) + 0x318));
    func_02005d8c(*(void **)(p + 0xe8));
    {
        Obj *r5 = (Obj *)func_0205681c(0x1c);
        if (r5 != 0) {
            uint32_t v = func_02005dc8(*(void **)(p + 0xe8));
            uint32_t d4 = *(uint32_t *)(p + 0xd4);
            r5->f8 = 0;
            r5->fc = 0x10168;
            r5->vt = data_020aca98;
            r5->f10 = d4;
            r5->f14 = v;
            r5->f18 = 1;
            r5->f19 = 0;
        }
        func_02055914(*(void **)(p + 0xc4), r5);
    }
}
