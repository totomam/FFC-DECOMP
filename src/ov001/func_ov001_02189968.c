#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint8_t data_ov001_0219581c[];
extern uint8_t data_ov001_02195798[];

void func_ov001_02189968(void)
{
    func_0208763c(data_ov001_0219581c);
    *(uint32_t *)(data_ov001_02195798 + 0x20) = 0;
    func_02087678(data_ov001_0219581c);
}
