#include "ffc/types.h"

extern uint8_t data_ov001_02190e3c[];
extern uint8_t data_ov001_02190bbc[];
extern uint8_t data_ov001_02190e54[];
extern uint8_t data_ov001_02190cf4[];

extern void func_ov001_02178324(void *a, void *b, void *c);
extern void func_ov001_02178340(void *a, void *b, uint32_t c);

int func_ov001_0217aefc(void *p, uint32_t r1, uint32_t r2)
{
    uint8_t *base = *(uint8_t **)p;
    uint8_t *obj = base + 0x210;

    func_ov001_02178324(p, obj, data_ov001_02190e3c);
    func_ov001_02178340(p, obj, *(uint32_t *)(base + 0x198));
    func_ov001_02178324(p, obj, data_ov001_02190bbc);
    func_ov001_02178340(p, obj, r1);
    func_ov001_02178324(p, obj, data_ov001_02190e54);
    func_ov001_02178340(p, obj, r2);
    func_ov001_02178324(p, obj, data_ov001_02190cf4);
    return 0;
}
