#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} DataPair;

extern void func_0206b07c(uint32_t v);
extern DataPair data_ov004_02158cbc;

void func_ov004_0214a714(uint8_t *p)
{
    func_0206b07c(*(uint32_t *)(p + 0xa0));
    *(DataPair *)(p + 0x80) = data_ov004_02158cbc;
}
