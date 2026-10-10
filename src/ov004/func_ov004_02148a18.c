#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} DataPair;

extern void func_ov004_02149590(uint32_t v);
extern DataPair data_ov004_021584b0;

void func_ov004_02148a18(uint8_t *p)
{
    func_ov004_02149590(*(uint32_t *)(p + 0x90));
    *(DataPair *)(p + 0x80) = data_ov004_021584b0;
}
