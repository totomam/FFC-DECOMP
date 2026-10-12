/* cflags: -nothumb */
#include "ffc/types.h"

extern uint16_t data_02141888;
extern void func_020867a8(void);
extern void func_020890f8(void);
extern uint32_t func_020891f4(uint32_t a, uint32_t b);
extern void func_020891a8(uint32_t a, void *fn);

void func_02088a40(void)
{
    if (data_02141888 != 0) {
        return;
    }
    data_02141888 = 1;
    func_020890f8();
    while (func_020891f4(12, 1) == 0) {
    }
    func_020891a8(12, (void *)func_020867a8);
}
