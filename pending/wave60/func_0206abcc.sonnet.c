#include "ffc/types.h"
extern void *func_020548b4(void *o, uint32_t a, uint32_t b);
extern void func_020534f8(int a);
extern int func_02053524(void);
extern void *func_02056830(uint32_t n);
extern void *func_0205681c(uint32_t n);
extern void *func_0206abac(void *p, void *o);
extern void func_02054114(int a);
extern void func_02054714(void *p);
extern uint32_t data_020b1c14;
extern uint32_t data_020b1c28;
void *func_0206abcc(uint32_t *o, int a, uint32_t b, int c)
{
    uint32_t n;
    void *p;
    func_020548b4(o, 0, 0);
    o[0] = (uint32_t)&data_020b1c14;
    o[5] = (uint32_t)&data_020b1c28;
    o[10] = 0;
    *((uint8_t *)o + 0x3c) = 0;
    o[9] = a;
    o[11] = b;
    o[12] = c;
    if (a != -1) {
        func_020534f8(a);
    } else {
        o[9] = func_02053524();
    }
    n = c * 0xc1;
    o[13] = (uint32_t)func_02056830(n);
    o[14] = (uint32_t)func_02056830(n);
    p = func_0205681c(0x18);
    if (p != 0) p = func_0206abac(p, o);
    func_02054114(0);
    o[8] = (uint32_t)p;
    func_02054714(o + 5);
    return o;
}
