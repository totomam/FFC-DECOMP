#include "ffc/types.h"

extern void func_ov001_0217ec78(void *buf, uint32_t a, uint32_t n);
extern void func_ov001_02178324(void *self, void *obj, const void *data);
extern void func_ov001_02178340(void *self, void *obj, uint32_t v);
extern uint8_t data_ov001_02190354[];
extern uint8_t data_ov001_02190328[];
extern uint8_t data_ov001_02190540[];
extern uint8_t data_ov001_021903a8[];
extern uint8_t data_ov001_0219034c[];

int func_ov001_02177b9c(uint8_t *self, uint32_t r1, uint32_t r2, uint32_t r3)
{
    uint8_t buf[0xdad];
    uint32_t saved = r2;
    uint8_t *base;
    uint8_t *obj;

    base = *(uint8_t **)self;
    func_ov001_0217ec78(buf, r3, 0xdad);
    obj = base + 0x210;
    func_ov001_02178324(self, obj, data_ov001_02190354);
    func_ov001_02178340(self, obj, saved);
    func_ov001_02178324(self, obj, data_ov001_02190328);
    func_ov001_02178340(self, obj, *(uint32_t *)(base + 0x198));
    func_ov001_02178324(self, obj, data_ov001_02190540);
    func_ov001_02178340(self, obj, r1);
    func_ov001_02178324(self, obj, data_ov001_021903a8);
    func_ov001_02178324(self, obj, buf);
    func_ov001_02178324(self, obj, data_ov001_0219034c);
    return 0;
}
