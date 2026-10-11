#include "ffc/types.h"

extern int32_t func_ov000_0216888c(void *a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern void func_ov000_02168784(void *a, void *b);
extern void func_ov000_0216885c(void *a, void *b);

typedef struct {
    void **table;
    uint32_t f4;
    uint32_t f8;
    uint32_t (*idx)(void *, uint32_t);
    uint32_t f10;
} S;

void func_ov000_02168abc(S *s, void *b)
{
    uint32_t i;
    int32_t r;

    if (s == 0) {
        return;
    }
    i = s->idx(b, s->f4);
    r = func_ov000_0216888c(s->table[i], b, s->f10, 0, 0);
    if (r == -1) {
        func_ov000_02168784(s->table[i], b);
        return;
    }
    func_ov000_0216885c(s->table[i], b);
}
