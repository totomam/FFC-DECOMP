#include "ffc/types.h"

extern int32_t data_020b0fb0[];
extern int32_t data_020b0fb4[];

int32_t func_0205cf44(int32_t i)
{
    return data_020b0fb0[i * 2] * data_020b0fb4[i * 2];
}
