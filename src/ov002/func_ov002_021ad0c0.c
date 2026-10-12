#include "ffc/types.h"

extern void *func_ov002_021aaf80(void *p, int idx);
extern void *func_02017714(void *unused, const uint8_t *index);
extern void *data_020b8e44;

int func_ov002_021ad0c0(void *p0, uint32_t p1, uint32_t p2) {
    uint32_t i;
    for (i = 0; i < 5; i++) {
        uint8_t *idx = (uint8_t *)func_ov002_021aaf80(p0, i);
        if (idx) {
            uint8_t *rec = (uint8_t *)func_02017714(data_020b8e44, idx);
            if (p1 == rec[1]) {
                if (p2 == 1) {
                    return 1;
                }
                if (p2 == rec[2]) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
