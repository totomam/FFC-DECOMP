#include "ffc/types.h"

extern void func_02056c4c(void *object);
extern void *func_02062a30(void *owner);
extern void *func_0203b708(int arg);
extern void func_02056bc0(void *object, void *node);

void func_ov011_021bd5d0(uint8_t *a0, int a1)
{
    func_02056c4c(a0 + 0x14);
    if (a1) {
        void *r5 = func_02062a30(*(void **)(a0 + 0x94));
        void *n = func_0203b708(10);
        uint8_t *p = a0 + 0x14;
        func_02056bc0(p, n);
        func_02056bc0(p, r5);
        return;
    }
    {
        void **obj = *(void ***)(a0 + 0x94);
        void (*fn)(void *) = (void (*)(void *))((void **)*obj)[0x2c / 4];
        fn(obj);
    }
}
