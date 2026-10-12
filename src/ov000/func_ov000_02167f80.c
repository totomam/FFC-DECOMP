#include "ffc/types.h"

extern int32_t func_ov000_0216714c(void *p);
extern int32_t func_ov000_02166278(uint16_t id, uint8_t *buf);
extern int32_t func_ov000_02167fd4(void *a, uint8_t *buf);

int32_t func_ov000_02167f80(void *a, uint16_t *list)
{
    uint8_t buf[4] = {0, 0, 0, 0};
    int32_t i;
    int32_t n;
    int32_t idx;

    n = func_ov000_0216714c(list);
    buf[3] = 0;
    for (i = 0; i < n; i++) {
        idx = func_ov000_02166278(list[i], buf);
        buf[idx] = 0;
        if (func_ov000_02167fd4(a, buf) == 0) {
            return 0;
        }
    }
    return 1;
}
