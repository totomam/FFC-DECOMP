#include "ffc/types.h"

extern void func_0204de50(void);
extern uint32_t func_0204de80(void);
extern uint32_t func_0204dc80(uint32_t x, uint32_t a);
extern void func_0204db08(uint32_t r, uint32_t b, uint32_t c);

void func_0204dae8(uint32_t a, uint32_t b, uint32_t c)
{
    func_0204de50();
    func_0204db08(func_0204dc80(func_0204de80(), a), b, c);
}
