#include "ffc/types.h"

extern void func_02089c5c(uint32_t a, int32_t b, int32_t c, int32_t d);
extern void func_02089cf8(uint32_t a, int32_t b);
extern void func_0208a030(int32_t a);

void func_ov014_02147a40(uint8_t *p)
{
    func_02089c5c(*(uint32_t *)(p + 0x84), 0, 1, 0);
    func_02089cf8(*(uint32_t *)(p + 0x84), 0);
    func_0208a030(1);
}
