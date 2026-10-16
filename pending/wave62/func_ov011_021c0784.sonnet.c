#include "ffc/types.h"
typedef struct S {
    uint8_t p0[0xd8];
    uint32_t a[5];
    uint32_t b[5];
    uint8_t p1[0x279 - 0xd8 - 40];
    uint8_t idx;
    uint8_t p2[0x33c - 0x27a];
    uint32_t cur;
} S;
extern void func_ov011_021c2d4c(S *p);
extern void func_ov009_0219a308(uint32_t v);
extern void func_020697ac(S *p);
extern void func_ov011_021c3100(S *p);
void func_ov011_021c0784(S *self) {
    func_ov011_021c2d4c(self);
    if (self->idx < 5) {
        func_ov009_0219a308(self->a[self->idx]);
        self->cur = self->a[self->idx];
    } else {
        func_ov009_0219a308(self->b[self->idx - 5]);
        self->cur = self->b[self->idx - 5];
    }
    func_020697ac(self);
    func_ov011_021c3100(self);
}
