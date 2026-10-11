#include "ffc/types.h"

typedef struct {
    uint8_t pad[0xc8];
    int32_t val;
} S;

void func_ov002_021d3254(S *p, int32_t v, int32_t f) {
    if (f != 0) {
        if (f == 1) {
            int32_t s = ~0;
            v = v * s;
        }
    }
    p->val = p->val + v;
    if (p->val >= 6) {
        p->val = p->val - 6;
    }
    if (p->val <= -6) {
        p->val = p->val + 6;
    }
}
