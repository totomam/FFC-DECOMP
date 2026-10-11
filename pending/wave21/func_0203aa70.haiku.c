#include "ffc/types.h"

extern uint32_t func_ov011_021bd288(void *p);
extern void func_02056bf4(void *p, uint32_t v);
extern void func_0203abd0(void *a, uint32_t b, void *c);

void func_0203aa70(uint8_t *p) {
    uint32_t r = func_ov011_021bd288(p + 0x98);
    func_02056bf4(p + 0x48, r);
    func_0203abd0(p, *(uint32_t *)(p + 0x8c), p + 0x98);
}
