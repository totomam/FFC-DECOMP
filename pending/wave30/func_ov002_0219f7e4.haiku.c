#include "ffc/types.h"

extern void *func_ov002_02198d08(void *p, uint32_t idx);
extern int func_ov002_0219b834(void *p, uint32_t idx);
extern int func_ov002_021bdcf8(void);

uint32_t func_ov002_0219f7e4(uint32_t *obj) {
    uint32_t j;
    for (j = 0; j < 2; j++) {
        void *r4 = func_ov002_02198d08((void *)obj[5], j);
        uint32_t k;
        for (k = 0; k < 3; k++) {
            if (func_ov002_0219b834(r4, k) != 0) {
                int r = func_ov002_021bdcf8();
                if (r != 0) {
                    return (uint32_t)r;
                }
            }
        }
    }
    obj[3] = (obj[3] & ~0xffu) | 2u;
    return obj[3];
}
