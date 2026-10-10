#include "ffc/types.h"

extern void func_02054738(void *p);
extern void func_0206ade0(void *p);
extern void func_02053574(uint32_t v);
extern void func_02056858(uint32_t v);
extern void func_02054844(void *p);
extern uint8_t data_020b1c14[];
extern uint8_t data_020b1c28[];

void *func_0206acd4(void *p) {
    uint8_t *s = (uint8_t *)p;
    *(void **)s = data_020b1c14;
    *(void **)(s + 0x14) = data_020b1c28;
    func_02054738(s + 0x14);
    func_0206ade0(s);
    func_02053574(*(uint32_t *)(s + 0x24));
    func_02056858(*(uint32_t *)(s + 0x34));
    func_02056858(*(uint32_t *)(s + 0x38));
    func_02054844(s + 0x14);
    return s;
}
