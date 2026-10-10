#include "ffc/types.h"

int __FindExceptionTable(uint32_t *p) {
    p[3] = 0x209d6dc;
    p[4] = 0x209ddb4;
    return 1;
}
