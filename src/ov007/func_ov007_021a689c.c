#include "ffc/types.h"

extern void func_02056c4c(void *x);
extern uint32_t func_02056aec(void *x);
extern uint32_t func_0202157c(uint32_t a, uint32_t b);
extern uint32_t func_020215f0(void);
extern uint32_t func_020215cc(uint32_t a);
extern uint32_t func_ov007_021ae984(void);
extern uint32_t func_0206cbf4(void *x);
extern uint32_t func_0203b688(void);
extern uint32_t func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021a689c(uint8_t *p) {
    uint32_t v0, v4, v8, vc;
    uint32_t r7, r4, r6, t;
    uint32_t base;

    func_02056c4c(*(void **)(p + 0xb0));
    *(uint32_t *)*(void **)(p + 0x90) = 0;
    v0 = func_02056aec(p);
    v4 = func_0202157c(0x45, 0);
    v8 = func_020215f0();
    vc = func_020215cc(0x19);
    r7 = func_ov007_021ae984();
    r4 = func_0206cbf4(*(void **)(p + 0x88));
    r6 = func_0203b688();
    func_02056bc0((void *)r6, (void *)r4);
    func_02056bc0((void *)r6, (void *)r7);
    t = func_0203b6fc();
    r4 = t;
    func_02056bc0((void *)t, (void *)r6);
    base = (uint32_t)p + 0x14;
    func_02056bc0((void *)base, (void *)r4);
    func_02056bc0((void *)base, (void *)vc);
    func_02056bc0((void *)base, (void *)v8);
    func_02056bc0((void *)base, (void *)v4);
    func_02056bc0((void *)base, (void *)v0);
}
