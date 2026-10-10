#include "ffc/types.h"

typedef struct {
    uint8_t flag;
    uint8_t b;
    uint8_t pad[6];
    uint32_t src;
    uint32_t dst;
} S;

void func_0200604c(S *p) {
    if (p->flag == 0) {
        p->dst = p->src;
        p->flag = 1;
        p->b = 0;
    }
}
