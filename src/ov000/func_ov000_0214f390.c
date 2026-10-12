#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_02084b2c(uint8_t *a, uint32_t z, uint32_t b);
extern uint32_t func_ov000_0214fca8(void);
extern int32_t func_ov000_0214f4b4(uint32_t *out, uint32_t c);
extern void func_ov000_0214fb1c(void);
extern void func_ov000_021501e4(void);
extern int32_t func_02088280(void);
extern void func_0208823c(void);
extern int32_t func_020883d8(void);
extern void func_020883b4(void);
extern void func_020883e4(uint8_t *p);
extern uint32_t data_ov000_0216e214[];

uint32_t func_ov000_0214f390(uint8_t *a, uint32_t b, uint32_t c)
{
    uint32_t t = func_02088978();
    uint32_t local;
    uint32_t cc;

    local = 0;
    if (((uint8_t **)data_ov000_0216e214)[1] != 0) {
        func_0208898c(t);
        return 1;
    }
    if (a == 0) {
        func_0208898c(t);
        return 1;
    }
    if (((uint32_t)a & 0x1f) != 0) {
        func_0208898c(t);
        return 1;
    }
    func_02084b2c(a, 0, b);

    cc = c;
    if (cc == 0) {
        cc = ((uint8_t *)data_ov000_0216e214)[0];
        if (cc == 0) {
            cc = func_ov000_0214fca8();
        }
    }

    if (func_ov000_0214f4b4(&local, cc) == 0) {
        func_0208898c(t);
        return 1;
    }
    if ((int32_t)b < (int32_t)local) {
        func_0208898c(t);
        return 6;
    }

    ((uint8_t **)data_ov000_0216e214)[1] = a;
    a[0x12de] = 1;
    *(uint16_t *)(((uint8_t **)data_ov000_0216e214)[1] + 0x12da) = 0;
    *(uint16_t *)(((uint8_t **)data_ov000_0216e214)[1] + 0x12d8) = 0;
    ((uint8_t **)data_ov000_0216e214)[1][0x12dc] = 0;
    ((uint8_t **)data_ov000_0216e214)[1][0x12dd] = 0;
    ((uint8_t **)data_ov000_0216e214)[1][0x12df] = (uint8_t)cc;

    func_ov000_0214fb1c();
    func_ov000_021501e4();
    if (func_02088280() == 0) {
        func_0208823c();
    }
    if (func_020883d8() == 0) {
        func_020883b4();
    }
    func_020883e4(((uint8_t **)data_ov000_0216e214)[1] + 0x1294);
    func_0208898c(t);
    return 0;
}
