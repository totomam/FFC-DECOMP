#include "ffc/types.h"

extern uint8_t *data_0213df20;
extern char data_020b1c40[];
extern char data_020b1c54[];
extern uint32_t func_02060c24(uint32_t x);
extern uint32_t func_02060b24(void);
extern void func_0206abcc(uint8_t *self, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_02056830(uint32_t size);
extern void func_0206aff8(uint8_t *self);
extern void func_0206b014(uint8_t *self, uint32_t v);
extern void func_0206b034(uint8_t *self, uint32_t v);
extern void func_0206b048(uint8_t *self, uint32_t v);
extern void func_0206b068(uint8_t *self, uint32_t v);
extern void func_02060b00(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern uint32_t func_02060c28(uint32_t x);

#define FLD(p, o) (*(uint32_t *)((uint8_t *)(p) + (o)))

uint8_t *func_0206aed4(uint8_t *self, uint32_t r1, uint8_t *parent, uint8_t flag)
{
    uint32_t v;

    if (parent != 0) {
        v = FLD(parent, 0x1c);
    } else {
        v = FLD(data_0213df20, 0x1c);
    }
    func_02060c24(v);
    func_0206abcc(self, r1, func_02060b24(), 4);
    FLD(self, 0) = (uint32_t)data_020b1c40;
    FLD(self, 0x14) = (uint32_t)data_020b1c54;
    if (parent != 0) {
        v = FLD(parent, 0x1c);
    } else {
        v = FLD(data_0213df20, 0x1c);
    }
    FLD(self, 0x40) = v;
    self[0x48] = flag;
    self[0x49] = 0;
    FLD(self, 0x44) = func_02056830(0x0c00);
    func_0206aff8(self);
    func_0206b014(self, 0);
    func_0206b034(self, 0);
    func_0206b048(self, 0);
    func_0206b068(self, 0);
    func_02060b00(func_02060c24(FLD(self, 0x40)), 0, 0, 0, 0xff);
    func_02060b00(func_02060c28(FLD(self, 0x40)), 0, 0, 0, 0xff);
    return self;
}
