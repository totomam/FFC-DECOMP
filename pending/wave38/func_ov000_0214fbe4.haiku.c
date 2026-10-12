#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_02088548(uint8_t *p);
extern void func_020884b4(uint8_t *p, uint32_t a, uint32_t b, void (*f)(void), uint32_t c);
extern void func_0208898c(uint32_t x);
extern void func_ov000_0214fca0(void);

extern struct {
    uint32_t a;
    uint8_t *p;
} data_ov000_0216e214;

void func_ov000_0214fbe4(uint32_t param) {
    uint32_t r5 = func_02088978();
    if (data_ov000_0216e214.p[0x12de] == 9 && param != 9) {
        func_02088548(data_ov000_0216e214.p + 0x1294);
    }
    if (data_ov000_0216e214.p[0x12de] != 0xb) {
        data_ov000_0216e214.p[0x12de] = (uint8_t)param;
    }
    if (param == 9) {
        func_02088548(data_ov000_0216e214.p + 0x1294);
        func_020884b4(data_ov000_0216e214.p + 0x1294, 0x22f5341, 0, func_ov000_0214fca0, 0);
    }
    func_0208898c(r5);
}
