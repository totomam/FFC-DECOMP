#include "ffc/types.h"

extern void func_02022bf8(void *a, void *b, void *c);

void func_02022bec(uint8_t *a, void *b)
{
    func_02022bf8(a, b, a + 0xc0);
}
