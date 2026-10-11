#include "ffc/types.h"

uint32_t func_02023618(uint32_t *p) {
    if (p == 0) {
        return 0;
    }
    return (uint32_t)p + (p[4] + (p[3] + (p[1] + p[2])));
}
