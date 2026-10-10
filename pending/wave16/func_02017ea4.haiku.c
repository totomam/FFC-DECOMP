#include "ffc/types.h"

extern void *func_02052d90(uint32_t a, uint32_t b);
extern void func_020159c8(void *p, uint32_t idx);
extern uint8_t data_020b8e70[];

void func_02017ea4(void *p, uint32_t n)
{
    uint8_t *q = (uint8_t *)func_02052d90(*(uint32_t *)(data_020b8e70 + 0x70),
                                          *(uint32_t *)(data_020b8e70 + 0x74));
    func_020159c8(p, n + *(uint16_t *)(q + 0x1c) - 1);
}
