#include "ffc/types.h"

extern uint8_t data_020b367c[];
extern void func_02056858(uint32_t);
extern void func_02056844(void *);

void *func_02097b2c(void *p) {
    uint8_t *s = (uint8_t *)p;
    *(uint8_t **)s = data_020b367c;
    if (s[0x39] != 0) {
        func_02056858(*(uint32_t *)(s + 0x20));
    }
    func_02056844(p);
    return p;
}
