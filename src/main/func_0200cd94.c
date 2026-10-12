#include "ffc/types.h"

extern void func_02091a24(void *);
extern uint32_t func_0208f42c(void);
extern uint8_t data_020ab124[];

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
} Hdr;

uint8_t *func_0200cd94(Hdr *p, uint32_t idx)
{
    uint8_t *base;
    uint32_t count;
    int r4;

    if (p->flag) {
        r4 = 0;
    } else {
        r4 = 1;
    }
    if (r4 != 0) {
        count = ((uint32_t)((uint8_t *)p)[0] << 24) >> 25;
    } else {
        count = *(uint32_t *)((uint8_t *)p + 4);
    }
    if (idx >= count) {
        func_02091a24(data_020ab124);
        func_0208f42c();
    }
    base = (uint8_t *)p + 2;
    if (r4 == 0) {
        base = *(uint8_t **)((uint8_t *)p + 8);
    }
    return base + idx * 2;
}
