#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint8_t *b;
} S;

extern S data_ov000_02170064;

void func_ov000_0215bf3c(uint8_t v)
{
    data_ov000_02170064.b[0x365] = v;
    *(uint32_t *)(data_ov000_02170064.b + 0xae8) = 0;
}
