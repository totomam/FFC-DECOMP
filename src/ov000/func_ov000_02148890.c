#include "ffc/types.h"

uint8_t *func_ov000_02148890(uint8_t *p)
{
    uint8_t c = *p;
    p++;
    while (c != 0) {
        if ((c & 0xC0) == 0xC0) {
            p++;
            return p;
        }
        uint8_t *q = p + c;
        p = q + 1;
        c = *q;
    }
    return p;
}
