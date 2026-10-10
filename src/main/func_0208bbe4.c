#include "ffc/types.h"

extern uint8_t data_0214355c[];
extern int func_0208bb40(void *p, int a, int b, int c);

int func_0208bbe4(int a)
{
    return func_0208bb40(data_0214355c, a, ~0xfe, 1);
}
