#include "ffc/types.h"

extern int32_t func_02097d00(void *p);
extern void func_02098bd0(void *p);
extern int32_t func_02098bec(void *p);

int32_t func_02098958(void *p) {
    uint32_t *w = (uint32_t *)p;
    if (((uint8_t *)p)[0x3a] == 0) {
        return -1;
    }
    if (w[5] != 0) {
        if (func_02097d00(p) < 0) {
            return -1;
        }
        w[5] = 0;
        w[4] = 0;
        w[6] = 0;
    }
    if (w[2] == 0) {
        func_02098bd0(p);
    }
    if (w[2] >= w[3]) {
        if (func_02098bec(p) <= 0) {
            return -1;
        }
    }
    return *(uint8_t *)w[2];
}
