#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t func_0203b75c(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov003_02179a78;

void func_ov003_0214f270(uint8_t *self)
{
    uint32_t n = func_0203b75c(0xf);
    func_02056bc0(self + 0x14, (void *)n);
    *(Pair *)(self + 0x80) = data_ov003_02179a78;
}
