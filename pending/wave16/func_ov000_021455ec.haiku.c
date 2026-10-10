#include "ffc/types.h"

extern void *data_ov000_021697c0;
extern uint8_t data_ov000_0216c098[];
extern uint8_t data_ov000_0216bfd8[];
extern void func_0208716c(void *dst, void *src);

void func_ov000_021455ec(void *p)
{
    data_ov000_021697c0 = p;
    func_0208716c(data_ov000_0216c098, p);
    func_0208716c(data_ov000_0216bfd8, p);
}
