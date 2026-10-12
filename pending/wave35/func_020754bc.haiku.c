#include "ffc/types.h"

extern char data_020b25f8[];
extern void func_02056c9c(void *obj, uint32_t x);
extern void func_020751ec(void *x, void *fn);
extern void func_020751fc(void *obj, void *fn);
extern void *func_020731fc(void *x);
extern void func_02056bc0(void *object, void *node);
extern void *func_02072434(void *x);
extern void func_02074f70(void);
extern void func_02074fa4(void);

void *func_020754bc(void *self, void *arg) {
    uint8_t *p = (uint8_t *)self;
    func_02056c9c(self, 0);
    *(void **)p = data_020b25f8;
    *(void **)(p + 0x80) = arg;
    func_020751ec(arg, (void *)func_02074f70);
    func_020751fc(*(void **)(p + 0x80), (void *)func_02074fa4);
    {
        void *r = func_020731fc(*(void **)((uint8_t *)*(void **)(p + 0x80) + 0x2c));
        func_02056bc0(p + 0x14, r);
    }
    {
        void *r = func_02072434(*(void **)((uint8_t *)*(void **)(p + 0x80) + 0x28));
        func_02056bc0(p + 0x14, r);
    }
    return self;
}
