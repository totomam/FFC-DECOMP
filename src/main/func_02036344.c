#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x54];
    uint32_t flags;
} S;

uint32_t func_02036344(S *p) {
    return (p->flags & 1) ? 1 : 0;
}
