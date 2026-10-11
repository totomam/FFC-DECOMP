#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern uint8_t data_ov001_02191a38[];

void func_ov001_021822f8(const uint8_t **pp, uint32_t *out)
{
    if (*pp == 0) {
        *pp = data_ov001_02191a38;
        *out = 0;
        return;
    }
    if (*out == 0xFFFFFFFFu) {
        *out = func_02092864(*pp) + 1;
    }
}
