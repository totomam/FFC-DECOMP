#include "ffc/types.h"

extern uint32_t func_02056aec(void);
extern uint32_t func_0203bfe0(int x);
extern uint32_t func_0203bfcc(int x);
extern uint32_t func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_020215a4(int a, int b);

typedef struct {
    uint8_t pad0[0x14];
    uint8_t inner[0x95];
    uint8_t flag;
} Obj;

void func_ov007_021adfe0(Obj *p)
{
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint32_t e; int n = 0x1e;

    p->flag = 0;
    a = func_02056aec();
    b = func_0203bfe0(n);
    c = func_0203bfcc(n);
    d = func_0203b6fc();
    func_02056bc0((void *)d, (void *)c);
    func_02056bc0((void *)d, (void *)b);
    e = func_020215a4(n - 0x1f, 0x19);
    p = (Obj *)((uint8_t *)p + 0x14);
    func_02056bc0(p, (void *)e);
    func_02056bc0(p, (void *)d);
    func_02056bc0(p, (void *)a);
}
