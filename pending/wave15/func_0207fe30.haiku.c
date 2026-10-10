#include "ffc/types.h"

extern void func_0207e96c(void *a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern uint8_t data_02141308[];

void func_0207fe30(void *a, uint32_t b, uint32_t c)
{
    func_0207e96c(a, data_02141308, b, b + c, 0xffff);
}
