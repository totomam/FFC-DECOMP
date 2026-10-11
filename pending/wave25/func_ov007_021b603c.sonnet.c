#include "ffc/types.h"

extern void *func_02056aec(void);
extern void *func_0203b708(int x);
extern void func_02056bc0(void *object, void *node);

typedef struct { uint32_t a, b; } S;
typedef struct { uint8_t pad[0x14]; uint8_t x[0x124]; S *n; } P;

void func_ov007_021b603c(P *p)
{
    S *n = p->n;
    void *t;
    void *v;
    n->a = 100000000;
    n->b = 0;
    t = func_02056aec();
    v = func_0203b708(30);
    p = (P*)((uint8_t*)p + 0x14);
    func_02056bc0(p, v);
    func_02056bc0(p, t);
}
