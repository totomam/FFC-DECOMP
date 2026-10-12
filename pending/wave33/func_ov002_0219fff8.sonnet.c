/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern void *func_0203b6fc(void);
extern void *func_0205681c(uint32_t size);
extern void *func_02055a2c(void *p);
extern void func_02056bc0(void *object, void *node);
extern char data_020ac618[];
void *func_ov002_0219fff8(void *p, void **arr, void *arg2);
}

struct Obj {
    void *vtbl;
    uint32_t pad4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    void *f14;
    void *f18;
    Obj(void *a, void *b) {
        f8 = 0; fc = 0x10111; vtbl = data_020ac618; f10 = 0; f14 = a; f18 = b;
    }
    static void *operator new(unsigned long n) { return func_0205681c(n); }
};

void *func_ov002_0219fff8(void *p, void **arr, void *arg2)
{
    void *res = func_0203b6fc();
    for (uint32_t i = 0; i < 6; i++) {
        if (arr[i]) {
            Obj *o = new Obj(arr[i], arg2);
            func_02056bc0(res, func_02055a2c(*(void **)((uint8_t *)p + 0xf0)));
        }
    }
    return res;
}
