#include "ffc/types.h"

extern uint8_t data_0213e264[];
extern void func_02079dc0(void *entry, uint32_t c);

void func_02079978(uint32_t a, uint32_t b, uint32_t c)
{
    int i;
    for (i = 0; i < 16; i++) {
        uint8_t *e = data_0213e264 + i * 0x44;
        if (e[0x2c] != 0 && *(uint16_t *)(e + 0x34) == 2 &&
            *(uint16_t *)(e + 0x38) == a && *(uint16_t *)(e + 0x3a) == b) {
            func_02079dc0(e, c);
        }
    }
}
