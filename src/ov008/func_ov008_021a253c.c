#include "ffc/types.h"

extern uint32_t func_ov008_021a2388(void *p, uint16_t x);
extern uint32_t func_0201e994(uint32_t x);
extern uint32_t func_ov008_021a27ec(void *p, uint32_t x);
extern uint32_t data_020b93b8;

typedef struct {
    uint8_t pad[0x131];
    uint8_t idx;
    uint8_t pad2[0x2];
    uint32_t lim;
    uint32_t used;
    uint8_t cnt;
} S;

uint32_t func_ov008_021a253c(S *s, uint32_t a)
{
    uint32_t r;
    if (func_ov008_021a2388(s, (uint16_t)(s->idx * 8 + a)) != 0) {
        goto ret1;
    }
    if (s->cnt >= func_0201e994(data_020b93b8)) {
        return 0;
    }
    r = func_ov008_021a27ec(s, s->idx * 8 + a);
    if (s->used + r <= s->lim) {
        goto ret1;
    }
    return 0;
ret1:
    return 1;
}
