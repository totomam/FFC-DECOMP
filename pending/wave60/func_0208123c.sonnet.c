#include "ffc/types.h"
extern int func_020812c8(int n);
int func_0208123c(int n) {
    if (n > 0) {
        uint16_t *h = (uint16_t*)0x040002b0;
        uint32_t *p = (uint32_t*)(h + 4);
        *h = 1;
        *p = 0;
        p[1] = n;
        return func_020812c8(n);
    }
    return 0;
}
