#include "ffc/types.h"

extern void func_020840a8(uint32_t *table, uint32_t poly);
extern uint32_t func_02084130(uint32_t *table, void *data, uint32_t len);

int func_ov000_02155270(uint8_t *p)
{
    uint32_t table[256];
    uint32_t crc;

    func_020840a8(table, 0xedb88320);
    crc = func_02084130(table, p, 0x3c);
    if (crc == *(uint32_t *)(p + 0x3c)) {
        return 1;
    }
    return 0;
}
