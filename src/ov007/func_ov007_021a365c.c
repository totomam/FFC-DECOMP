#include "ffc/types.h"

extern uint32_t func_02056aec(void *p);
extern uint32_t func_0206d774(uint32_t x);
extern uint32_t func_0203b688(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203b744(void);
extern uint32_t func_0203b6fc(void);

void func_ov007_021a365c(uint8_t *p)
{
    uint32_t a = func_02056aec(p);
    uint32_t d = func_0206d774(*(uint32_t *)(p + 0xf0));
    uint32_t v = func_0203b688(d);
    func_02056bc0((void *)v, (void *)d);
    uint32_t e = func_0203b744();
    uint32_t f = func_0203b6fc();
    func_02056bc0((void *)f, (void *)e);
    func_02056bc0((void *)f, (void *)v);
    uint8_t *q = p + 0x14;
    func_02056bc0(q, (void *)f);
    func_02056bc0(q, (void *)a);
}
