#include "ffc/types.h"

extern void func_0208d2e0(void);
extern uint32_t data_02143580[];
extern uint8_t data_02143588[];
extern void func_0208bc10(void *p, int n);

void func_0208d2ac(void)
{
    data_02143580[2] = (uint32_t)func_0208d2e0;
    data_02143580[3] = 0;
    func_0208bc10(data_02143588, 1000);
}
