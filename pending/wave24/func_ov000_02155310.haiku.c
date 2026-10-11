#include "ffc/types.h"

extern void func_020840a8(uint32_t *table, uint32_t poly);
extern uint32_t func_02084130(uint32_t *table, void *data, uint32_t len);

typedef struct { uint32_t a, b, c; } S3;

void func_ov000_02155310(uint8_t *p, S3 *src, uint32_t x)
{
    uint32_t table[256];

    *(S3 *)(p + 0x10) = *src;
    *(uint32_t *)(p + 0x1c) = x;
    func_020840a8(table, 0xedb88320);
    *(uint32_t *)(p + 0x3c) = func_02084130(table, p, 0x3c);
    *(uint32_t *)(p + 0x20) |= 1;
}
