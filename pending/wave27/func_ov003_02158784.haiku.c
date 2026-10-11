#include "ffc/types.h"

extern int func_ov003_0215630c(void *p);

typedef struct {
    uint8_t pad[4];
    uint8_t a;
    uint8_t b;
} Inner;

int func_ov003_02158784(void *p) {
    int r4 = 0;
    int r1 = 0;
    int r5 = 0;
    if (*(uint32_t *)((uint8_t *)p + 0x110) != 0) {
        Inner *q = *(Inner **)((uint8_t *)p + 0xa8);
        if (q->a == 1) {
            r5 = 1;
            if (q->b != 1) {
                if (q->b != 2) {
                    r5 = r4;
                }
            }
            if (r5 != 0) {
                r1 = 1;
            }
        }
    }
    if (r1 != 0) {
        if (func_ov003_0215630c(p) != 0) {
            r4 = 1;
        }
    }
    return r4;
}
