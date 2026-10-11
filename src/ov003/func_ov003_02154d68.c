#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern int func_0201bf6c(uint32_t a, uint16_t b);

int func_ov003_02154d68(uint32_t *p)
{
    uint32_t n = p[0];
    uint32_t i;
    int result = 1;
    for (i = 0; i < n; i++) {
        uint16_t *tbl = (uint16_t *)((uint8_t *)p + p[1]);
        if (func_0201bf6c(data_020b93b8, tbl[i]) == 0) {
            result = 0;
            break;
        }
    }
    return result;
}
