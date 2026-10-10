#include "ffc/types.h"

extern uint8_t data_02143544[];
extern void func_0208bb40(uint8_t *p, uint32_t a, uint32_t b, uint32_t c);

void func_0208bbfc(uint32_t a)
{
    func_0208bb40(data_02143544, a, 0xff, 0);
}
