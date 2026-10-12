#include "ffc/types.h"

extern uint32_t func_0208cf38(uint32_t a, uint32_t b);
extern uint32_t func_02087460(void);
extern uint32_t func_0208d304(void);
extern uint8_t *func_0208ceec(void);
extern void func_0208cdd8(uint32_t a, uint32_t b);
extern uint32_t func_0208ce30(uint32_t a, uint32_t b, uint32_t c);

uint32_t func_0208d9e8(uint32_t a, uint32_t b) {
    uint32_t r;
    uint8_t *p;

    r = func_0208cf38(1, 2);
    if (r != 0) {
        return r;
    }
    if (func_02087460() != 0) {
        if (func_0208d304() == 0) {
            return 4;
        }
    }
    p = func_0208ceec();
    *(uint16_t *)(p + 0x150) = 0;
    *(uint32_t *)(p + 0x14C) = 0;
    func_0208cdd8(8, a);
    r = func_0208ce30(8, 1, b);
    if (r != 0) {
        return r;
    }
    return 2;
}
