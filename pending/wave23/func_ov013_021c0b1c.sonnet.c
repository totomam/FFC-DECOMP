#include "ffc/types.h"

extern void func_02021338(uint32_t arg);

typedef struct { uint8_t pad[0xc4]; uint32_t x; uint8_t pad2[6]; uint8_t f; } S;

void func_ov013_021c0b1c(S *self, uint32_t v)
{
    if (self->f != 0) {
        self->f = 0;
        if (v == self->x) {
            func_02021338(0xcd);
        }
        return;
    }
    func_02021338(0xcd);
}
