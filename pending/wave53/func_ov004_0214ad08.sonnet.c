#include "ffc/types.h"

extern void func_ov004_02149be0(void *self);
extern uint32_t func_ov004_0215310c(void);
extern void *func_0203b95c(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void *data_ov004_02158cd4[];

typedef void (*VFnArg)(void *self, int arg);
typedef void (*VFn)(void *self);

#define VT(o) (*(void ***)(o))

void func_ov004_0214ad08(void *self) {
    uint8_t *p = (uint8_t *)self;
    void **d = data_ov004_02158cd4;

    *(uint8_t *)(p + 0x95) = 0;

    func_ov004_02149be0(self);
    *(void **)(p + 0x88) = func_0203b95c(d[3], func_ov004_0215310c(), 0, 1);
    ((VFnArg)VT(*(void **)(p + 0x88))[8])(*(void **)(p + 0x88), 2);
    ((VFn)VT(*(void **)(p + 0x88))[10])(*(void **)(p + 0x88));

    func_ov004_02149be0(self);
    *(void **)(p + 0x8c) = func_0203b95c(d[0], func_ov004_0215310c(), 0, 1);
    ((VFnArg)VT(*(void **)(p + 0x8c))[8])(*(void **)(p + 0x8c), 2);
    ((VFn)VT(*(void **)(p + 0x8c))[10])(*(void **)(p + 0x8c));

    func_ov004_02149be0(self);
    *(void **)(p + 0x90) = func_0203b95c(d[1], func_ov004_0215310c(), 0, 1);
    ((VFnArg)VT(*(void **)(p + 0x90))[15])(*(void **)(p + 0x90), 1);
    ((VFnArg)VT(*(void **)(p + 0x90))[8])(*(void **)(p + 0x90), 2);
    ((VFn)VT(*(void **)(p + 0x90))[10])(*(void **)(p + 0x90));

    {
        void *r6 = *(void **)(p + 0x90);
        void *r7 = *(void **)(p + 0x88);
        uint8_t *s = p + 0x48;
        void **pp = (void **)(p + 0x8c);
        func_02056bc0(s, *pp);
        func_02056bc0(s, r7);
        func_02056bc0(s, r6);
    }
}
