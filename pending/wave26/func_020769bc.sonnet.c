#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
extern S data_020b2874;
extern S data_020b287c;

void func_020769bc(uint8_t *p) {
    uint32_t v = *(uint32_t *)(p + 0x94);
    if (v != 0) {
        if (v == 1) {
            *(S *)(p + 0x88) = data_020b2874;
            return;
        }
    } else {
        *(S *)(p + 0x88) = data_020b287c;
    }
}
