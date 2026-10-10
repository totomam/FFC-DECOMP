#include "ffc/types.h"

extern void func_0200a7f8(void *p, uint32_t v, uint32_t zero, uint32_t d);

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
    uint32_t w;
} Hdr;

void func_02068b9c(Hdr *p, uint32_t d)
{
    uint32_t v;
    if (p->flag == 0) {
        v = ((uint32_t)*(uint8_t *)p << 24) >> 25;
    } else {
        v = p->w;
    }
    func_0200a7f8(p, v, 0, d);
}
