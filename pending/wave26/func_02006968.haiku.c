#include "ffc/types.h"

extern uint8_t data_020b3af8;
extern void func_0200619c(uint8_t *p, uint32_t a, uint32_t b);
extern void func_020061b0(uint8_t *p, uint32_t a);
extern void func_020061d0(uint8_t *p);
extern void func_020066a4(uint8_t *p);
extern void func_02006840(uint8_t *p);

void func_02006968(uint32_t a, uint32_t b, uint32_t c)
{
    func_0200619c(&data_020b3af8, a, b);
    func_020061b0(&data_020b3af8, c);
    func_020061d0(&data_020b3af8);
    func_020066a4(&data_020b3af8);
    func_02006840(&data_020b3af8);
    data_020b3af8 = 1;
}
