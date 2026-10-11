#include "ffc/types.h"

extern void func_02069694(void *a, void *b, uint32_t c);
extern void func_02069670(void *a, void *b, uint32_t c, uint32_t d);

void func_ov011_021c65b8(uint8_t *p, uint32_t idx)
{
    uint32_t *arr = (uint32_t *)(p + 0xcc);
    func_02069694(p, *(void **)(p + 0xd4), 4);
    func_02069694(p, *(void **)(p + 0xd4), 2);
    func_02069670(p, *(void **)(p + 0xd4), 4, arr[idx]);
    func_02069670(p, *(void **)(p + 0xd4), 2, arr[idx]);
}
