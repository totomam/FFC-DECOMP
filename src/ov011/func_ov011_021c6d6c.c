#include "ffc/types.h"

extern void func_02056c9c(void *p, int x);
extern char data_ov011_021cb9cc[];

typedef struct S {
    void *vtbl;
    uint8_t pad[0x80 - 4];
    uint32_t f80;
    uint32_t f84;
    uint32_t f88;
} S;

void *func_ov011_021c6d6c(void *p, uint32_t b)
{
    S *s = (S *)p;
    func_02056c9c(p, 0);
    s->vtbl = data_ov011_021cb9cc;
    s->f80 = 0;
    s->f84 = 0;
    s->f88 = b;
    return p;
}
