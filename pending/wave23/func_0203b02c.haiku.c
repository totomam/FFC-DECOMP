#include "ffc/types.h"

extern void func_0203ad70(void *self, void *a, void *b);
extern void func_0203adc8(void *self, void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i);
extern int data_020ae854[];

void *func_0203b02c(void *self, void *a, void *b)
{
    func_0203ad70(self, a, b);
    *(int **)self = data_020ae854;
    func_0203adc8(self, a, b, 0, 0, 1, 1, 1, 0, 0);
    return self;
}
