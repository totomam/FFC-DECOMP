#include "ffc/types.h"

extern uint16_t data_02141390[];
extern void func_02082d4c(uint16_t v);

void func_0208336c(int32_t r0)
{
    uint16_t a = data_02141390[0];
    uint16_t b = data_02141390[9];
    data_02141390[0] = (uint16_t)((a | b) & ~r0);
    data_02141390[9] = (uint16_t)r0;
    switch (r0) {
    case 0:
        break;
    case 4:
        *(uint8_t *)0x4000242 = 0x84;
        break;
    case 0x180:
        *(uint8_t *)0x4000249 = 0x81;
        /* fall through */
    case 0x80:
        *(uint8_t *)0x4000248 = 0x81;
        break;
    }
    func_02082d4c(data_02141390[0]);
}
