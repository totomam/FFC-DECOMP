#include "ffc/types.h"

extern void func_02090398(uint32_t a, uint32_t b, uint32_t c);

typedef struct {
    uint32_t base;
    uint32_t unused4;
    uint32_t size;
} S;

void func_ov001_0217fe60(S *p, uint32_t off, uint32_t len) {
    uint32_t t;
    if (off == 0xFFFFFFFF) {
        off = p->size - len;
    }
    t = p->base + off;
    func_02090398(t, t + len, p->size - off - len);
    p->size -= len;
}
