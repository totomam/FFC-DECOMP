#include "ffc/types.h"

extern void func_02021b48(void *a, int b);
extern int func_02021bbc(void *a, int b);
extern void func_02021b68(void *a, int b);
extern void *func_ov004_0214f6f4(void *a, int b, int c);
extern void func_02056bc0(void *object, void *node);

void func_ov004_02155160(uint8_t *self, int idx, int arg2)
{
    int saved = arg2;
    func_02021b48(*(void **)(self + 0xf4), 0x16);
    arg2 = func_02021bbc(*(void **)(self + 0xf4), 0x17) ? 0 : 1;
    func_02021b68(*(void **)(self + 0xf4), 0x17);
    {
        void *node = func_ov004_0214f6f4(*(void **)(self + 0xe4), idx, saved);
        func_02056bc0(*(void **)(self + idx * 4 + 0x1f0), node);
    }
}
