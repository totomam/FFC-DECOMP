#include "ffc/types.h"

typedef struct {
    uint32_t pad[2];
    uint32_t a;
    uint32_t b;
    uint32_t c;
} S;

int func_ov000_021680b4(S *p) {
    p->a = 0xFFFFFFFF;
    p->b = 0xFFFFFFFF;
    p->c = 0xFFFFFFFF;
    return 1;
}
