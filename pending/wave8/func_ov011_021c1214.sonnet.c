#include "ffc/types.h"

extern void *func_ov011_021bd28c(void *p, int b);

void *func_ov011_021c1214(uint8_t *p, int b) {
    return func_ov011_021bd28c(*(void **)(p + 0x32c), b);
}
