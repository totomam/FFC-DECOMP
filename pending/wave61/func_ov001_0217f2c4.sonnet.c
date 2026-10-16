#include "ffc/types.h"
extern void func_ov000_021653f4(uint32_t a);
extern uint32_t func_ov000_021658c0(uint32_t *a);
extern uint32_t func_ov001_0217f2a0(uint32_t a);
extern void func_ov001_0217f30c(void *a);
typedef struct { uint32_t a0; uint32_t mode; uint32_t a8; uint32_t c; uint32_t d; } S;
void func_ov001_0217f2c4(S *self, uint32_t *p) {
    uint32_t v;
    if (self->mode == 0) {
        v = p[0];
        self->c = v;
    } else if (self->mode == 1) {
        uint32_t y = p[1], x = p[0];
        self->c = x;
        self->d = y;
    } else if (self->mode == 2) {
        if (self->c != 0) func_ov000_021653f4(self->c);
        if (p == 0) v = 0;
        else v = func_ov001_0217f2a0(func_ov000_021658c0(p));
        self->c = v;
    }
    func_ov001_0217f30c(self);
}
