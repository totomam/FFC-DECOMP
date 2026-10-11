#include "ffc/types.h"

extern void func_020084b8(void *a, void *b);
extern void func_020083dc(void *a, void *b);
extern void func_020083b8(void *a, void *b, int16_t c);

void func_02008450(void *p, void *q)
{
    func_020084b8(p, q);
    func_020083dc(p, q);
    func_020083b8(p, q, *(int16_t *)((uint8_t *)p + 0x12));
}
