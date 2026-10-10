#include "ffc/types.h"

extern void func_ov007_021ad958(void *p);

void func_ov007_021ad944(uint8_t *p, uint32_t v) {
    if (v == *(uint32_t *)(p + 0xbc)) {
        func_ov007_021ad958(p);
    }
}
