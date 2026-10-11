#include "ffc/types.h"

extern void func_02068bbc(void *dst, void *src, void *p, uint16_t n);

typedef struct { uint32_t flag : 1; uint32_t rest : 31; } FW;
typedef struct {
    union { FW w; struct { uint16_t lo; uint16_t hi; } h; } u;
    uint32_t pad;
    void *ptr;
} In;
typedef struct { uint8_t pad[0x4c]; In in; } S;

void func_02068b70(S *p, uint32_t n) {
    uint32_t buf[2];
    void *q;
    if (p->in.u.w.flag == 0) {
        q = (void *)((uint32_t)&p->in + 2);
    } else {
        q = p->in.ptr;
    }
    func_02068bbc(&buf[1], &p->in, q, (uint16_t)n);
}
