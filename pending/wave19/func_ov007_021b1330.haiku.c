#include "ffc/types.h"

extern void func_02075af4(void *a, int b, int c);
extern void *func_02056aec(void *object);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021b1330(uint8_t *p)
{
    func_02075af4(*(void **)(p + 0xb8), 0, 0);
    void *node = func_02056aec(p);
    func_02056bc0(p + 0x14, node);
}
