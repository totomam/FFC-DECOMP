#include "ffc/types.h"

extern void func_02089e64(void *p);
extern void func_02087890(void *p, uint32_t n);
extern void func_02089e74(void);

void func_0208a65c(uint8_t *p, uint32_t idx, uint32_t val)
{
    uint32_t *arr;
    func_02089e64(p);
    arr = (uint32_t *)(p + 0x3c);
    arr[idx] = val;
    func_02087890(&arr[idx], 4);
    func_02089e74();
}
