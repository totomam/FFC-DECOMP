#include "ffc/types.h"

extern void func_0209720c(uint8_t *p);
extern void func_02056844(uint8_t *p);

uint8_t *func_020991c0(uint8_t *p) {
    func_0209720c(p + 4);
    func_02056844(p);
    return p;
}
