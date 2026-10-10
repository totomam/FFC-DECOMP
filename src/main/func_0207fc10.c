#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x14];
    uint32_t flags;
} S54;

uint32_t func_0207fc10(S54 *p) {
    if (p->flags & 4) {
        return 1;
    }
    return 0;
}
