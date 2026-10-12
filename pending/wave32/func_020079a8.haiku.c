#include "ffc/types.h"

extern void func_02007924(void *p, int16_t a, void *b, int32_t c);
extern int32_t func_0209a76c(int32_t a, int32_t b);
extern void func_02007a0c(void *p, int32_t a, int32_t b);

typedef struct {
    uint32_t pad0;
    uint32_t pad1;
    int16_t a8;
    int16_t aA;
    void *pC;
    uint8_t b10;
    uint8_t b11;
} S;

void func_020079a8(S *s, int32_t v)
{
    if (s->b10 == 0) {
        return;
    }
    if (s->b11 == 0) {
        return;
    }
    if (v < 0) {
        v = 0;
    } else if (v > 127) {
        v = 127;
    }
    func_02007924(s, s->a8, s->pC, 0);
    func_02007a0c(s, func_0209a76c(s->aA * v, 127), 0);
    s->b11 = 0;
}
