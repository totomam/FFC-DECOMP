#include "ffc/types.h"

extern void func_0200a5dc(void *p);
extern uint16_t *func_0200cd94(void *p, uint32_t i);

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
    uint32_t n;
} S;

void func_020394fc(void *p0)
{
    S *p = (S *)p0;
    uint32_t i = 0;
    uint32_t n;
    int c;
    uint16_t *dst;

    func_0200a5dc(p0);
    if (p->flag == 0) n = ((uint32_t)((uint8_t *)p0)[0] << 24 >> 25); else n = p->n;
    if (n == 0) {
        return;
    }
    c = *func_0200cd94(p0, i);
    if (c < 0x61) {
        return;
    }
    c = *func_0200cd94(p0, i);
    if (c > 0x7a) {
        return;
    }
    dst = func_0200cd94(p0, i);
    *dst = *func_0200cd94(p0, i) - 0x20;
}
