#include "ffc/types.h"

extern void func_ov012_021d1440(void *p, int zero, uint32_t v, uint32_t d);

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
    uint32_t w;
} Hdr;

void func_ov012_021d1420(Hdr *p, uint32_t d)
{
    uint32_t v;
    if (p->flag == 0) {
        v = ((uint32_t)*(uint8_t *)p << 24) >> 25;
    } else {
        v = p->w;
    }
    func_ov012_021d1440(p, 0, v, d);
}
