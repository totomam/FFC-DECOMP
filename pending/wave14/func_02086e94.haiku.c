#include "ffc/types.h"

extern void func_02088978(void);
extern void func_02086eac(void *p, uint32_t x);
extern uint8_t data_021414f4[];

void func_02086e94(void)
{
    func_02088978();
    func_02086eac(*(void **)(data_021414f4 + 0x20), 0);
}
