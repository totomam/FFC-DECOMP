#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
extern void func_ov009_0219e46c(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t data_ov009_021b0374;
extern uint32_t data_ov009_021b0570[];

void *func_ov009_0219e780(void *self, uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t *p = (uint32_t *)self;
    int i;
    func_ov009_0219e46c(self, a, 1, b, c);
    p[0] = (uint32_t)&data_ov009_021b0374;
    i = 0;
    p[0x42] = i;
    do {
        p[0x3c + i] = 0;
        i++;
    } while (i < 5);
    *(S *)&p[0x3a] = *(S *)data_ov009_021b0570;
    return self;
}
