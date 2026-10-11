#include "ffc/types.h"

extern uint8_t data_ov000_0217004c[];
extern void func_ov000_0215a120(void);
extern void func_ov001_02175a94(void *a, uint32_t b, uint32_t c, uint32_t d, void (*e)(void), uint32_t f);

void func_ov000_021598d8(void *a, uint32_t *b)
{
    if (*(uint32_t *)(*(uint32_t *)(data_ov000_0217004c + 0xc) + 0x18) != 0) {
        func_ov001_02175a94(a, *b, 0, 0, func_ov000_0215a120, 0);
    }
}
