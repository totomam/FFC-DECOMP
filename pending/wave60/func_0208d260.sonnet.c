#include "ffc/types.h"
extern void func_02088978(void);
extern void func_0208898c(void);
extern struct { uint32_t a; uint8_t *p; } data_02143580;
uint32_t func_0208d260(void) {
    uint16_t v;
    func_02088978();
    if (data_02143580.p != 0) v = *(uint16_t*)(data_02143580.p + 0x150);
    else v = 0;
    func_0208898c();
    return v;
}
