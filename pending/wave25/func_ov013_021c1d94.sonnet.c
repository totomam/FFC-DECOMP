/* cflags: -lang c++ */
#include "ffc/types.h"

struct S {
    uint8_t pad[0x14];
    uint8_t list[0xb0];
    uint32_t *p;
    void *q;
    inline void clr() { *p = 0; }
};

extern "C" {
extern void *func_02056aec(void);
extern void *func_0206c270(void *node);
extern void func_02056bc0(void *object, void *node);
void func_ov013_021c1d94(S *a);
}

void func_ov013_021c1d94(S *x)
{
    void *n;
    void *node;
    x->clr();
    n = func_02056aec();
    node = func_0206c270(x->q);
    func_02056bc0(x->pad + 0x14, node);
    func_02056bc0(x->pad + 0x14, n);
}
