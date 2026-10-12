#include "ffc/types.h"

extern void func_0209cf5c(void *dst, int a, int b, void (*c)(void), void (*d)(void));
extern void func_0203c3fc(uint16_t *buf);
extern void func_0203c40c(uint16_t *buf);

typedef struct {
    uint32_t zero[7];
    uint16_t arr[8];
} Self;

Self *func_ov002_021d3298(Self *self)
{
    uint16_t buf[4];
    int i;

    self->zero[0] = 0;
    self->zero[1] = 0;
    self->zero[2] = 0;
    self->zero[3] = 0;
    self->zero[4] = 0;
    self->zero[5] = 0;
    self->zero[6] = 0;

    func_0209cf5c(self->arr, 2, 8, (void (*)(void))func_0203c3fc, (void (*)(void))func_0203c40c);

    for (i = 0; i < 2; i++) {
        func_0203c3fc(buf);
        self->arr[i * 4 + 0] = buf[0];
        self->arr[i * 4 + 1] = buf[1];
        self->arr[i * 4 + 2] = buf[2];
        self->arr[i * 4 + 3] = buf[3];
        func_0203c40c(buf);
    }

    return self;
}
