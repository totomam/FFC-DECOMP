#include "ffc/types.h"

extern void *func_0203b6fc(void *a);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov002_021c85f8(void *p);
extern void *func_02055a2c(void *list, void *node);
extern void func_02056bc0(void *object, void *node);
extern void *data_020abbf8;

typedef struct Obj {
    void *vtbl;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint8_t f18;
    uint32_t f1c;
    uint8_t f20;
} Obj;

void *func_ov002_021a4aa0(uint8_t *a, uint32_t x, uint8_t b, uint8_t c) {
    void *result;
    int i;
    Obj *obj;

    result = func_0203b6fc(a);
    for (i = 0; i < 3; i++) {
        obj = func_0205681c(0x24);
        if (obj != 0) {
            uint32_t r = func_ov002_021c85f8(a + 0x144);
            obj->f8 = 0;
            obj->fc = 0x100f3;
            obj->vtbl = &data_020abbf8;
            obj->f10 = x;
            obj->f14 = r;
            obj->f18 = b;
            obj->f1c = i;
            obj->f20 = c;
        }
        func_02056bc0(result, func_02055a2c(*(void **)(a + 0xf0), obj));
    }
    return result;
}
