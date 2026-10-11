#include "ffc/types.h"

extern void *data_020b93b8;
extern void func_0201f7fc(void *p, uint32_t idx, uint32_t *out);

uint8_t func_ov007_021ae604(void) {
    uint8_t cnt = 0;
    int i;
    uint32_t buf[16];
    for (i = 0; i < 60; i++) {
        func_0201f7fc(data_020b93b8, (uint32_t)i, buf);
        if (((int32_t)(buf[0] << 29) >> 29) > 0) {
            cnt++;
        }
    }
    return cnt;
}
