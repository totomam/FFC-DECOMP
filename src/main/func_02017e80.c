#include "ffc/types.h"

extern void *func_02052d90(const void *mar, uint32_t index);
extern void func_020159c8(void *a, uint32_t b);
extern uint32_t data_020b8e70[];

void func_02017e80(void *a, uint32_t b)
{
    uint8_t *p = (uint8_t *)func_02052d90((const void *)data_020b8e70[28], data_020b8e70[29]);
    func_020159c8(a, b + *(uint16_t *)(p + 0xc));
}
