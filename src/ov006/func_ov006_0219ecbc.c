#include "ffc/types.h"

extern uint64_t func_0209a978(uint32_t a, uint32_t b);

typedef struct {
    uint32_t i;
    uint32_t j;
    uint8_t *s;
    uint32_t param;
} State;

uint8_t func_ov006_0219ecbc(State *p)
{
    uint8_t *s = p->s;
    uint32_t param = p->param;
    uint8_t i = func_0209a978(p->i + 1, param) >> 32;
    uint8_t si = s[i];
    uint8_t j = func_0209a978(si + p->j, param) >> 32;
    uint8_t sj = s[j];
    p->i = i;
    p->j = j;
    s[j] = si;
    s[i] = sj;
    return s[func_0209a978(si + sj, p->param) >> 32];
}
