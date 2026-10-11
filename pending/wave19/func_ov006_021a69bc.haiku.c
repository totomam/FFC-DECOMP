#include "ffc/types.h"

extern int32_t func_ov006_021a351c(void *p);
extern void func_02088f30(void);
extern void func_ov006_021b016c(void *p);

void func_ov006_021a69bc(void)
{
    uint8_t buf[0xe8];

    if (func_ov006_021a351c(buf) != 1) {
        func_02088f30();
    }
    func_ov006_021b016c(buf);
}
