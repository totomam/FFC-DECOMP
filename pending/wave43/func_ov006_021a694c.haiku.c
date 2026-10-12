#include "ffc/types.h"

extern int32_t func_ov006_021a351c(int32_t *p);
extern void func_02088f30(void);
extern int32_t *data_ov006_021bc734;

int32_t func_ov006_021a694c(void)
{
    int32_t buf[58];

    switch (*data_ov006_021bc734) {
    case 0:
    case 1:
    case 3:
    case 5:
        return 0;
    case 2:
        return 1;
    case 4:
        return 2;
    case 6:
        if (func_ov006_021a351c(buf) != 1) {
            func_02088f30();
        }
        if (buf[8] >= 0 && buf[8] <= 3 && buf[9] == 1) {
            return 3;
        }
        return 5;
    case 7:
        return 4;
    }
}
