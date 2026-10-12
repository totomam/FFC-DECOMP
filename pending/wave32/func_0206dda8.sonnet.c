#include "ffc/types.h"

extern void func_02084ca4(uint8_t *dst, uint8_t *src);

typedef struct {
    uint8_t p0[0x24];
    uint8_t *base;
    uint8_t p1[4];
    uint8_t *buf;
    uint8_t p2[0x230-0x30];
    uint8_t flag;
    uint8_t p3[3];
    int idx;
    uint8_t p4[0x248-0x238];
    int end;
} S;

void func_0206dda8(S *self)
{
    if (self->flag) {
        *self->buf = 1;
        return;
    }
    *self->buf = 0;
    func_02084ca4(self->base + self->idx * 15, self->buf + 1);
    if (self->idx == self->end) {
        self->flag = 1;
        return;
    }
    self->idx = self->idx + 1;
}
