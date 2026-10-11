#include "ffc/types.h"

void func_ov008_0219a130(uint8_t *p) {
    if (p[0x142] == 0) {
        void *o = *(void **)(*(uint8_t **)(p + 0xc4) + 0x98);
        (*(void (**)(void *, int, int))(*(uint8_t **)o + 0x38))(o, 1, 0);
    } else {
        void *o = *(void **)(*(uint8_t **)(p + 0xc4) + 0x98);
        (*(void (**)(void *, int, int))(*(uint8_t **)o + 0x38))(o, 4, 0);
    }
}
