#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x14bb];
    uint8_t f : 2;
} S;

uint32_t func_ov000_0215237c(S *p)
{
    if (p->f == 1) {
        return 0x30000;
    }
    return 0x20000;
}
