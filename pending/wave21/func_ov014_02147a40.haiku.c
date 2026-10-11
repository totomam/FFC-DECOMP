#include "ffc/types.h"

extern void func_02089c5c(void *a, int b, int c, int d);
extern void func_02089cf8(void *a, int b);
extern void func_0208a030(int a);

void func_ov014_02147a40(uint8_t *p)
{
    func_02089c5c(*(void **)(p + 0x84), 0, 1, 0);
    func_02089cf8(*(void **)(p + 0x84), 0);
    func_0208a030(1);
}
