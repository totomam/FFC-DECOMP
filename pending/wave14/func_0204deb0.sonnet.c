#include "ffc/types.h"

extern void func_0204a894(void);

void func_0204deb0(uint32_t *p) {
    if (p[6] == 0) {
        func_0204a894();
        p[6] = 1;
    }
}
