#include "ffc/types.h"

extern uint32_t func_ov006_021b49e4(uint32_t a, uint32_t b);
extern int func_0208a858(void *p);
extern void func_02088f30(void);
extern void func_0208a8d4(void *p);
extern void func_0208aa48(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0208ae70(uint32_t a);
extern int func_0208ae80(uint32_t a);
extern void func_ov006_021b4ac8(void);
extern uint32_t data_ov006_021bc828[];

void func_ov006_021b4a50(void)
{
    uint32_t local[2];

    data_ov006_021bc828[1] = func_ov006_021b49e4(0x3a, 4);
    if (func_0208a858(local) == 0) {
        func_02088f30();
    }
    func_0208a8d4(local);
    func_0208aa48(0, 4, data_ov006_021bc828[1], 5);
    func_0208ae70(2);
    if (func_0208ae80(2) != 0) {
        func_02088f30();
    }
    func_ov006_021b4ac8();
}
