#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov005_021973fc(void *a, void *b);
extern void func_ov005_02197514(void *a);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov009_021b0924[];

void func_ov009_021a4be8(uint8_t *p)
{
    void *n = func_0205681c(0xac);
    if (n != 0) {
        n = func_ov005_021973fc(n, data_ov009_021b0924);
    }
    *(void **)(p + 0x180) = n;
    func_ov005_02197514(n);
    func_02056bc0(p + 0x48, *(void **)(p + 0x180));
}
