#include "ffc/types.h"

extern void *func_ov011_021bd290(void *p, int b);

void *func_ov011_021c1224(uint8_t *p, int b) {
    return func_ov011_021bd290(*(void **)(p + 0x32c), b);
}
