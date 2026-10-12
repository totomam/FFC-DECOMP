#include "ffc/types.h"

extern void func_02053574(uint32_t x);
extern void func_02056858(uint32_t x);
extern void func_020704f8(void *p);
extern void func_020708f8(void *p);
extern void func_0206c1dc(void *p);
extern void func_02055abc(void *p);
extern void func_02056844(void *p);
extern uint8_t data_020b20d0[];
extern uint8_t data_020b20e4[];
extern uint32_t data_0213e180;

void *func_0206fc70(void *self)
{
    uint8_t *p = (uint8_t *)self;
    *(uint8_t **)p = data_020b20d0;
    *(uint8_t **)(p + 0x14) = data_020b20e4;
    func_02053574(*(uint32_t *)(p + 0x54));
    func_02056858(*(uint32_t *)(p + 0x50));
    func_020704f8(self);
    data_0213e180 = 0;
    func_020708f8(p + 0x58);
    func_0206c1dc(p + 0x3d);
    func_02055abc(p + 0x14);
    func_02056844(self);
    return self;
}
