#include "ffc/types.h"

extern int32_t func_ov000_02168768(void *obj);
extern uint32_t *func_ov000_0216876c(void *obj, int32_t idx);
extern int32_t func_ov001_02181b90(void *obj);

int32_t func_ov001_0218043c(uint8_t *p, uint32_t t)
{
    int32_t n;
    int32_t i;

    n = func_ov000_02168768(*(void **)(p + 0x60));
    for (i = 0; i < n; i++) {
        uint32_t *e = func_ov000_0216876c(*(void **)(p + 0x60), i);
        if (t - e[3] > 1000) {
            if (!func_ov001_02181b90(p)) {
                return 0;
            }
        }
    }
    return 1;
}
