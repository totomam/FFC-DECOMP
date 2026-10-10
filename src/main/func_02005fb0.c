#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t *buf;
    uint32_t idx;
} S;

extern void func_02005fd4(S *p);

void func_02005fb0(S *p, uint32_t v) {
    p->buf[p->idx] = v;
    p->idx++;
    func_02005fd4(p);
}
