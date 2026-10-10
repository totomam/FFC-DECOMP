#include "ffc/types.h"

typedef struct {
    uint8_t pad0[5];
    uint8_t f5;
    uint8_t pad6[2];
    uint32_t f8;
} S;

void func_02050b38(S *p) {
    p->f8 = (p->f8 + 3) & ~3u;
    p->f5 = 1;
}
