#include "ffc/types.h"

extern void func_ov001_02178324(void *a, void *b, void *c);
extern void func_ov001_02178340(void *a, void *b, uint32_t c);
extern uint8_t data_ov001_0219031c[];
extern uint8_t data_ov001_02190328[];
extern uint8_t data_ov001_02190334[];
extern uint8_t data_ov001_02190344[];
extern uint8_t data_ov001_0219034c[];

uint32_t func_ov001_0217699c(void *a, void *b)
{
    uint8_t *base = *(uint8_t **)a;
    uint8_t *obj = base + 0x210;

    func_ov001_02178324(a, obj, data_ov001_0219031c);
    func_ov001_02178324(a, obj, data_ov001_02190328);
    func_ov001_02178340(a, obj, *(uint32_t *)(base + 0x198));
    func_ov001_02178324(a, obj, data_ov001_02190334);
    func_ov001_02178340(a, obj, *(uint32_t *)b);
    func_ov001_02178324(a, obj, data_ov001_02190344);
    func_ov001_02178324(a, obj, *(void **)((uint8_t *)b + 0x14));
    func_ov001_02178324(a, obj, data_ov001_0219034c);
    return 0;
}
