#include "ffc/types.h"

extern uint32_t func_02086b20(void *object, uint32_t first, uint32_t second, uint32_t third);
extern void func_ov000_021685f4(int32_t c);
extern void func_02088a18(void);
extern uint32_t data_ov000_0216bc0c;
extern int8_t data_ov000_021711cc[];
extern uint8_t data_ov000_021719ac[];

void func_ov000_02168640(uint32_t a, uint32_t b)
{
    int32_t i;

    if (data_ov000_0216bc0c & 1) {
        func_02086b20(data_ov000_021711cc, 0x7ff, a, b);
        data_ov000_021719ac[0x1f] = 0;
        for (i = 0; data_ov000_021711cc[i] != 0; i++) {
            func_ov000_021685f4(data_ov000_021711cc[i]);
        }
        func_02088a18();
    }
}
