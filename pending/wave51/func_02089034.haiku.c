/* cflags: -nothumb */
#include "ffc/types.h"

extern void func_02088d30(uint8_t *buf, uint32_t v);
extern uint32_t func_02088de0(void);
extern uint64_t func_02088e60(void);
extern uint64_t func_021da7e8(uint64_t x, uint64_t y);
extern void func_02088d6c(void);
extern void func_02088e54(void);

void func_02089034(void) {
    uint8_t buf[0x300];
    uint64_t *g = (uint64_t *)0x021dbcbc;
    int32_t zero = 0;
    int8_t c;

    func_02088d30(buf, 0);
    if (func_02088de0() == 0) {
        *g = func_02088e60();
    }
    if (*g != 0) {
        if (func_021da7e8(*g, (uint64_t)(zero - 1)) == 0) {
            goto reset;
        }
    }
    c = (int8_t)(((uint32_t *)g)[0] >> 24 | ((uint32_t *)g)[1] << 8);
    if (c == 0x30 || c == 0x31 || c == 0x32 || c == 0x33 || c == 0x34) {
        goto reset;
    }
    func_02088e54();
    return;
reset:
    *g = 0;
    func_02088d30(buf, 0);
    func_02088d6c();
}
