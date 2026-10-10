#include "ffc/types.h"

typedef struct FfcMarDecoded FfcMarDecoded;

extern void *func_02052d90(const FfcMarDecoded *mar, uint32_t index);
extern uint8_t data_020b8ef0[];

void *func_02017c34(void)
{
    uint32_t *p = (uint32_t *)data_020b8ef0;
    return func_02052d90((const FfcMarDecoded *)p[0x50 / 4], p[0x54 / 4]);
}
