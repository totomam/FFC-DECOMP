#include "ffc/types.h"

typedef struct {
    uint8_t pad[4];
    uint16_t f;
} S;

uint32_t func_02060558(S *p)
{
    return (p->f & 0xC0) >> 6;
}
