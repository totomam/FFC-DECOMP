#include "ffc/types.h"

extern int32_t func_020985b0(void *p, uint8_t v);

typedef struct {
    uint8_t pad[0x24];
    uint8_t f24;
    uint8_t f25;
    uint8_t f26;
    uint8_t f27;
} S;

int32_t func_02098408(S *p, int32_t c) {
    if (p->f25 != 0) {
        if (p->f26 != 0) {
            if (c == -1) return c;
            if (func_020985b0(p, p->f24) < 0) return -1;
            p->f24 = (uint8_t)c;
            p->f27 = 1;
        } else {
            if (c != -1) {
                p->f24 = (uint8_t)c;
                p->f27 = 1;
            } else {
                if (p->f27 == 0) return -1;
            }
            p->f26 = 1;
            p->f27 = 1;
        }
    } else {
        if (c == -1) return c;
        if (func_020985b0(p, (uint8_t)c) < 0) return -1;
    }
    if (c == -1) c = 0;
    return c;
}
