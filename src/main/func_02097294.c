#include "ffc/types.h"

extern void func_020970c0(uint8_t *p);
extern void func_02056844(uint8_t *p);

uint8_t *func_02097294(uint8_t *p) {
    func_020970c0(p + 4);
    func_02056844(p);
    return p;
}
