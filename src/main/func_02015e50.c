#include "ffc/types.h"

extern void *func_02015ba4(void *unused, uint32_t index);
extern uint32_t func_02092784(void *s, void *tbl, uint32_t *p);
extern uint8_t data_020acdf8[];

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
    uint32_t inl[1];
    uint32_t ptr;
} Hdr;

uint32_t func_02015e50(void *a, Hdr *b, uint32_t *c, void *unused, uint8_t flag)
{
    void *s;
    uint32_t r;

    if (b->flag == 0) {
        s = (void *)((uint8_t *)b + 1);
    } else {
        s = (void *)b->ptr;
    }
    r = func_02092784(s, data_020acdf8, c);
    if (flag) {
        void *q = func_02015ba4(a, *c);
        *c = *(uint16_t *)((uint8_t *)q + 0x3a);
    }
    return r;
}
