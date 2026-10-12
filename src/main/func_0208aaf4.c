#include "ffc/types.h"

typedef struct {
    uint32_t pad0;
    void (*cb)(int, int, int);
    uint8_t pad8[0x30];
    uint16_t f38;
    uint16_t f3a;
} S;

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern int32_t func_02089218(int32_t, uint32_t, int32_t);
extern S data_021434e4;

void func_0208aaf4(void) {
    uint32_t r4 = func_02088978();
    int32_t r5 = 0;
    if (func_02089218(6, 0x3000200, 0) >= 0) {
        r5 = 1;
    }
    if (r5 == 0) {
        func_0208898c(r4);
        data_021434e4.f38 |= 4;
        if (data_021434e4.cb != 0) {
            data_021434e4.cb(2, 4, 0);
        }
    } else {
        data_021434e4.f3a |= 4;
        data_021434e4.f38 &= 0xfffb;
        func_0208898c(r4);
    }
}
