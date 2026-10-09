#include "ffc/types.h"

extern void func_02035afc(uint8_t *p);
extern void func_02056844(uint8_t *p);

uint8_t *func_02035994(uint8_t *p) {
    func_02035afc(p + 4);
    func_02056844(p);
    return p;
}
