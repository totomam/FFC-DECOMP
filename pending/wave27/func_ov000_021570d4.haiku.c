#include "ffc/types.h"

extern int32_t func_02092948(uint32_t x);

typedef struct {
    uint32_t a;
    uint32_t b;
} Entry;

typedef struct {
    uint8_t pad[0x1a74];
    Entry e[32];
} Blob;

int32_t func_ov000_021570d4(Blob *s, uint32_t arg)
{
    int32_t i;
    for (i = 0; i < 0x20; i++) {
        if (s->e[i].a == 0) {
            break;
        }
        if (func_02092948(arg) == 0) {
            return s->e[i].b;
        }
    }
    return 0;
}
