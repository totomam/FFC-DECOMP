/* cflags: -nothumb */
#include "ffc/types.h"

typedef uint32_t (*FnPtr)(uint32_t);
extern FnPtr data_020b2b34[];

uint32_t func_02087f78(uint32_t idx, uint32_t arg)
{
    return data_020b2b34[idx](arg);
}
