#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t func_02087260(uint32_t value);
extern void func_0204f338(uint32_t v);
extern void func_0204f244(void);
extern uint32_t data_0213df10[];
extern uint32_t data_02141510[];

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t *c;
} Node;

void func_0204f300(void)
{
    uint32_t *g;
    Node *p = (Node *)func_0205681c(12);
    if (p != 0) {
        p->a = 0;
        p->b = 0;
        p->c = &p->b;
    }
    g = data_0213df10;
    g[3] = (uint32_t)p;
    g[0] = func_02087260((uint32_t)&func_0204f244);
    func_0204f338(data_02141510[1]);
}
