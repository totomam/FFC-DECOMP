#include "ffc/types.h"

extern int func_0200764c(void *p);
extern int func_02007064(void *p);

int func_020068f0(uint8_t *p) {
    if (p[0] == 0) {
        return 1;
    }
    if (func_0200764c(p + 0x2bb8)) {
        return 0;
    }
    if (func_02007064(p + 0x2ba4) == 0) {
        return 1;
    }
    return 0;
}
