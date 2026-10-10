#include "ffc/types.h"

extern uint16_t data_ov006_021bc78c[];
extern int32_t func_0208130c(int32_t a, int32_t b);

int32_t func_ov006_021ac3a0(int32_t a)
{
    int32_t r = func_0208130c(data_ov006_021bc78c[2], 0x1d);
    return r + a;
}
