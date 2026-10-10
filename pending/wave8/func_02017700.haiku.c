#include "ffc/types.h"

typedef struct FfcMarDecoded FfcMarDecoded;

extern void *func_02052d90(const FfcMarDecoded *mar, uint32_t index);
extern uint8_t data_020b8e70[];

void *func_02017700(void)
{
    uint32_t *p = (uint32_t *)data_020b8e70;
    return func_02052d90((const FfcMarDecoded *)p[0x60 / 4], p[0x64 / 4]);
}
