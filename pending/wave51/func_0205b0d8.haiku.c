#include "ffc/types.h"

extern uint8_t data_020b0e70[];
extern void func_020835fc(void);
extern void func_0208360c(void);
extern void func_02081a6c(int x);
extern void func_02053574(void);
extern void func_0205bc04(void *p);
extern void func_0209d02c(void *p, int a, int b, void *fn);
extern void func_02057c6c(void *p);
extern void func_02059bd0(void *p);
extern void func_02056844(void *p);
extern void func_0205b060(void *p);

void *func_0205b0d8(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    void *o;

    *(uint8_t **)p = data_020b0e70;
    o = *(void **)(p + 0x10c);
    if (o != 0) {
        void **vt = *(void ***)o;
        ((void (*)(void *))vt[1])(o);
    }
    func_020835fc();
    func_0208360c();
    func_02081a6c(-1);
    func_02053574();
    func_0205bc04(p + 0xf4);
    func_0205bc04(p + 0xdc);
    func_0209d02c(p + 0xac, 2, 0x18, (void *)func_0205b060);
    func_02057c6c(p + 0x70);
    func_02057c6c(p + 0x34);
    func_02059bd0(p);
    func_02056844(p);
    return p;
}
