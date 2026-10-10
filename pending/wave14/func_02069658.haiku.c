#include "ffc/types.h"

extern void func_02056c4c(uint32_t a);
extern void func_0206a57c(uint8_t *p);

void func_02069658(uint8_t *p)
{
    func_02056c4c(*(uint32_t *)(p + 0x90));
    func_0206a57c(p + 0xa4);
}
