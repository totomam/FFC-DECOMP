#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_ov000_02147b7c(void *);

void *func_ov000_0214dcd4(uint8_t *self) {
    uint8_t *p = *(uint8_t **)(self + 0xa0);
    uint32_t s = func_02088978();
    void *r5 = *(void **)(p + 0xf8);
    if (r5 != 0) {
        *(void **)(p + 0xf8) = 0;
        func_ov000_02147b7c(r5);
    }
    func_0208898c(s);
    return r5;
}
