#include "ffc/types.h"

extern void func_02089bc0(uint8_t v, int32_t x);
extern void func_02089b54(uint8_t v);
extern void func_02079f8c(uint8_t *p);

void func_02079f0c(uint8_t *p) {
    if (p[0x2c] == 2) {
        func_02089bc0(p[0x3c], -723);
    }
    func_02089b54(p[0x3c]);
    func_02079f8c(p);
}
