#include "ffc/types.h"

extern uint8_t data_020b1f5c[];
extern uint8_t data_020b1f70[];
extern void func_02054738(void *p);
extern void func_02056858(uint32_t x);
extern void func_0209d06c(void *p, uint32_t size, uint32_t count, void *dtor);
extern void func_02057658(void);
extern void func_02057934(void *p);

void *func_0206d9b0(void *self)
{
    uint8_t *p = (uint8_t *)self;
    *(uint8_t **)p = data_020b1f5c;
    *(uint8_t **)(p + 0x14) = data_020b1f70;
    func_02054738(p + 0x14);
    func_02056858(*(uint32_t *)(p + 0x2c));
    func_0209d06c(*(void **)(p + 0x20), 0x2c, 8, (void *)func_02057658);
    func_02057934(p);
    return p;
}
