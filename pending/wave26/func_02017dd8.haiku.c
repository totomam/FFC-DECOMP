#include "ffc/types.h"

extern void *func_02015ba4(void *unused, uint32_t index);
extern void *func_02052d90(const void *mar, uint32_t index);
extern uint32_t data_020b8ef0[2];

void *func_02017dd8(void *unused, uint32_t index) {
    uint8_t *p;
    uint32_t k;
    char *m;
    uint32_t off;

    if (index == 0) {
        return 0;
    }
    p = (uint8_t *)func_02015ba4(unused, index);
    if (p == 0) {
        return 0;
    }
    k = *p;
    if (k == 0) {
        return 0;
    }
    m = (char *)func_02052d90((const void *)data_020b8ef0[0], data_020b8ef0[1]);
    off = *(uint32_t *)(m + 8);
    return m + *(uint32_t *)(m + off + (k << 2) - 4);
}
