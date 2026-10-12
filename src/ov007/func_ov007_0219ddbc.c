#include "ffc/types.h"

extern void func_02021240(int a, int b);
extern uint32_t func_02056aec(void *object);
extern void *func_0203c058(int size);
extern void *func_0203c044(int size);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);

void func_ov007_0219ddbc(uint8_t *p)
{
    int *ptr = *(int **)(p + 0x88);
    uint8_t *q;
    void *a;
    void *b;
    void *c;
    uint32_t r7;

    *ptr = 10;
    func_02021240(10 - 11, 0x3c);
    r7 = func_02056aec(p);
    a = func_0203c058(0x3c);
    b = func_0203c044(0x3c);
    c = func_0203b6fc();
    func_02056bc0(c, b);
    func_02056bc0(c, a);
    q = p + 0x14;
    func_02056bc0(q, c);
    func_02056bc0(q, (void *)r7);
}
