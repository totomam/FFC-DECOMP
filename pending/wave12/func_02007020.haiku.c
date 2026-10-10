#include "ffc/types.h"

typedef struct {
    uint8_t pad0[8];
    uint16_t f8;
    uint8_t pad1[6];
    uint8_t f10;
} S;

void func_02007020(S *p, int32_t v) {
    if (v <= 0) {
        v = 1;
    }
    p->f8 = v;
    p->f10 = 1;
}
