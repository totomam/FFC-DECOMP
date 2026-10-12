#include "ffc/types.h"

extern void func_02054b18(void *p, uint32_t a, uint32_t b);
extern void func_02087620(void *object);
extern uint32_t func_02056830(uint32_t x);
extern void func_02086dcc(void *obj, void *fn, void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02087154(void *obj, uint32_t v);
extern void func_020870a0(void *object);
extern void func_02086ff4(void *obj, void *p);
extern void func_0204f338(void *obj);
extern uint32_t data_020b1b94[];
extern void func_0206a84c(void);

void *func_0206a714(void *self, uint32_t r1, uint32_t r2)
{
    uint8_t *s = (uint8_t *)self;
    volatile uint16_t *ime = (volatile uint16_t *)0x04000208;
    uint8_t flag;
    uint16_t old;
    volatile uint8_t tmp;
    void **n;
    uint8_t *p;

    flag = 1;
    func_02054b18(self, 0, 1);
    *(uint32_t **)s = data_020b1b94;
    *(uint32_t *)(s + 0xc) = 0;
    p = s + 0xc;
    n = (void **)(p + 4);
    n[1] = n;
    ((void **)p)[1] = n;
    func_02087620(s + 0xe4);
    *(uint32_t *)(s + 0xfc) = 0;
    old = *ime;
    *ime = 0;
    if (old == 0) {
        flag = 0;
    }
    tmp = flag;
    *(uint32_t *)(s + 0xe0) = func_02056830(r2);
    func_02086dcc(s + 0x18, (void *)func_0206a84c, self,
                  *(uint32_t *)(s + 0xe0) + r2, r2, r1);
    func_02087154(s + 0x18, 0x200);
    *(uint32_t *)(s + 0xdc) = 0;
    *(uint32_t *)(s + 0xd8) = 0;
    func_020870a0(s + 0x18);
    func_02086ff4(s + 0x18, s + 0xd8);
    func_0204f338(s + 0x18);
    old = *ime;
    *ime = tmp;
    return self;
}
