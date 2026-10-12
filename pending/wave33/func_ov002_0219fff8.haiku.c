#include "ffc/types.h"

extern void *func_0203b6fc(void);
extern void *func_0205681c(uint32_t size);
extern void *func_02055a2c(void *p);
extern void func_02056bc0(void *object, void *node);
extern char data_020ac618[];

typedef struct Obj {
    void *vtbl;
    uint32_t pad4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    void *f14;
    void *f18;
} Obj;

void *func_ov002_0219fff8(void *p, void **arr, void *arg2)
{
    void *res = func_0203b6fc();
    uint32_t i;
    for (i = 0; i < 6; i++) {
        if (arr[i]) {
            Obj *o;
            o = (Obj *)func_0205681c(0x1c);
            if (o) {
                o->f8 = 0;
                o->fc = 0x10111;
                o->vtbl = data_020ac618;
                o->f10 = 0;
                o->f14 = arr[i];
                o->f18 = arg2;
            }
            func_02056bc0(res, func_02055a2c(*(void **)((uint8_t *)p + 0xf0)));
        }
    }
    return res;
}
