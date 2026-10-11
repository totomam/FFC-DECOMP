#include "ffc/types.h"

int func_0203c418(int16_t *p) {
    int i;
    for (i = 0; i < 4; i++) {
        if (p[i]) {
            return 1;
        }
    }
    return 0;
}
