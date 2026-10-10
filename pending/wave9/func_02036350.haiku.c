#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x54];
    uint32_t flags;
} S54;

uint32_t func_02036350(S54 *p) {
    if (p->flags & 2) {
        return 1;
    }
    return 0;
}
