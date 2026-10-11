#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern struct { uint32_t a; uint8_t *b; } data_ov000_0216e294;

void func_ov000_02155e38(uint32_t param)
{
    func_0208763c(data_ov000_0216e294.b + 0x13d8);
    *(uint32_t *)(data_ov000_0216e294.b + 0x1004) = param;
    func_02087678(data_ov000_0216e294.b + 0x13d8);
}
