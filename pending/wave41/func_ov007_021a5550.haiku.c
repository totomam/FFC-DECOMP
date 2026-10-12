#include "ffc/types.h"

extern void func_02056c4c(void *p);
extern void *func_02056aec(void *p);
extern void *func_02056dd4(void *p);
extern void *func_02060634(void *p, int a, int b, int c, int d, int e);
extern void *func_0206cd68(void *p);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021a5550(uint8_t *self)
{
    void *d;
    uint8_t *q;
    void *c;
    void *r6;
    void *r4;

    *(uint8_t *)((uint8_t *)*(void **)(self + 0x100) + 0x3c) = 1;
    func_02056c4c(*(void **)(self + 0xdc));
    c = func_02056aec(self);
    d = func_02060634(*(void **)((uint8_t *)func_02056dd4(self) + 0x20), 8, 0, 10, 0, 0);
    r4 = func_0206cd68(*(void **)(self + 0xc8));
    r6 = func_0203b6fc();
    func_02056bc0(r6, r4);
    func_02056bc0(r6, d);
    q = self + 0x14;
    func_02056bc0(q, r6);
    func_02056bc0(q, c);
}
