#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x14bb];
    uint8_t lo : 2;
    uint8_t f : 2;
} S;

uint32_t func_ov000_02152398(S *p)
{
    if (p->f == 1) {
        return 0xC0000;
    }
    return 0x80000;
}
