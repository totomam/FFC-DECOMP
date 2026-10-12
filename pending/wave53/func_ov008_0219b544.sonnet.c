#include "ffc/types.h"

typedef struct Self {
    uint8_t pad0[0xcc];
    uint32_t *tbl;
    uint8_t pad1[0xe4 - 0xd0];
    uint32_t f0e4;
    uint8_t pad2[0x104 - 0xe8];
    uint8_t f104;
    uint8_t pad3[0x108 - 0x105];
    uint32_t f108;
    uint32_t f10c;
    uint8_t pad4[0x110 - 0x110];
    uint8_t f110;
} Self;

extern uint32_t func_ov008_0219b694(Self *self, uint8_t idx);
extern uint32_t func_ov008_0219ba0c(Self *self, uint8_t idx);
extern void func_02021338(uint32_t code);
extern uint32_t func_0201e994(uint32_t v);
extern void func_ov008_0219b69c(Self *self, uint8_t idx, uint32_t flag);
extern void func_ov005_02196bcc(uint32_t entry, uint32_t flag);
extern void func_ov008_0219b6f4(Self *self);
extern uint32_t data_020b93b8;

void func_ov008_0219b544(Self *self, uint32_t val)
{
    uint8_t i;
    uint8_t idx;
    uint32_t r6;

    i = 0;
    do {
        if (val == self->tbl[i]) {
            idx = (uint8_t)(i + (self->f104 << 3));
            if (idx < self->f0e4) {
                r6 = (func_ov008_0219b694(self, idx) == 0);
                if (r6) {
                    uint32_t t = func_ov008_0219ba0c(self, idx);
                    if (self->f10c + t > self->f108) {
                        func_02021338(0xc7);
                        return;
                    }
                }
                if (r6) {
                    if (self->f110 >= func_0201e994(data_020b93b8)) {
                        func_02021338(0xc7);
                        return;
                    }
                }
                func_ov008_0219b69c(self, idx, r6);
                func_ov005_02196bcc(self->tbl[i], r6);
                func_ov008_0219b6f4(self);
            }
            return;
        }
        i++;
    } while (i < 8);
}
