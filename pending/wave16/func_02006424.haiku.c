#include "ffc/types.h"

extern int func_02007174(void *p, int a, int b, int c, int d);

int func_02006424(uint8_t *p, int a, int b, int c, int d) {
    if (*p != 0) {
        return func_02007174((uint8_t *)p + 0x2a28, a, b, c, d);
    }
    return 0;
}
