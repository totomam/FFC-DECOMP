#include "ffc/types.h"

extern void *func_02088978(void);
extern void func_0208898c(void *p);
extern uint32_t func_0207a7cc(uint32_t x);
extern uint32_t func_0207ab40(uint32_t x);
extern void func_0207ab60(uint32_t x, uint32_t y);

void func_0207b2cc(uint32_t a0, uint32_t a1, uint32_t a2) {
    if (a1 != 0) {
        void *r7 = func_02088978();
        uint32_t r4 = func_0207a7cc(a1);
        if (a0 == func_0207ab40(a2)) {
            func_0207ab60(a2, 0);
        }
        func_0207a7cc(r4);
        func_0208898c(r7);
    }
}
