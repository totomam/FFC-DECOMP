#include "ffc/types.h"

typedef struct {
    uint8_t pad[0xb];
    uint8_t lo : 4;
} S;

uint32_t func_ov000_02153484(S *p)
{
    if (p->lo == 0) {
        return 0xffff3c4d;
    }
    return 0xffff3865;
}
