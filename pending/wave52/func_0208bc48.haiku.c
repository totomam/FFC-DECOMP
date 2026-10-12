#include "ffc/types.h"

extern void func_020889f4(uint32_t value);
extern uint32_t func_0208baf4(void);
extern uint32_t func_0208b5a4(void *object, uint32_t value);
extern uint32_t func_0208bad0(uint32_t value);
extern uint32_t data_020b2ba4;

void func_0208bc48(void) {
    uint32_t saved;
    func_020889f4(0x360000);
    saved = data_020b2ba4;
    data_020b2ba4 = 14;
    if (func_0208baf4() != 1) {
        if (func_0208b5a4((void *)2, 0) != 0) {
            do {
                func_020889f4(0x51d23);
            } while (func_0208b5a4((void *)2, 0) != 0);
        }
        if (func_0208bad0(1) == 0) {
            do {
                func_020889f4(5);
            } while (func_0208bad0(1) == 0);
        }
    }
    data_020b2ba4 = saved;
}
