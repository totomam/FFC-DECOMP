#include "ffc/types.h"

extern int func_0207a09c(uint32_t *p);

int func_0207bde4(uint32_t *p) {
    if (p[0x4a] == 0) {
        if (func_0207a09c(p) == 0) {
            return 0;
        }
    }
    p[0x4a] = p[0x4a] + 1;
    return 1;
}
