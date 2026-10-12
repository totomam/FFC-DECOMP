#include "ffc/types.h"

extern void func_0204de50(void);
extern void *func_0204de78(void);
extern int32_t func_0204c19c(void *p, void *data, uint32_t n);
extern uint8_t data_020b0230[];
extern uint8_t data_020b022c[];

int32_t func_0204c258(void *p)
{
    uint8_t *r4;
    int32_t r;

    func_0204de50();
    r4 = *(uint8_t **)(*(uint8_t **)func_0204de78() + 0xc);
    if (*(uint32_t *)(r4 + 0xa8) == 0) {
        return 0;
    }
    r = func_0204c19c(p, data_020b0230, 0x15);
    if (r != 0) {
        return r;
    }
    r = func_0204c19c(p, r4 + 0x4c, *(uint32_t *)(r4 + 0xa8));
    if (r != 0) {
        return r;
    }
    r = func_0204c19c(p, data_020b022c, 2);
    if (r != 0) {
        return r;
    }
    return 0;
}
