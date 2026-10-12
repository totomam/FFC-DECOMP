#include "ffc/types.h"

typedef struct {
    uint32_t lo;
    uint32_t hi;
} D;

int func_02090288(D d, ...) {
    uint32_t e = d.hi & 0x7ff00000;
    if (e != 0) {
        if (e == 0x7ff00000) {
            if ((d.hi & 0xfffff) != 0 || d.lo != 0) {
                return 1;
            }
            return 2;
        }
        return 4;
    }
    if ((d.hi & 0xfffff) != 0 || d.lo != 0) {
        return 5;
    }
    return 3;
}
