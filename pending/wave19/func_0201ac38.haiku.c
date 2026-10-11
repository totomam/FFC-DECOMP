#include "ffc/types.h"

extern uint32_t func_02054218(uint32_t p);
extern void func_02054380(uint32_t r);
extern uint32_t func_02054254(uint32_t p);
extern void func_020543b8(uint32_t r);

void func_0201ac38(uint32_t p) {
    if (p) {
        func_02054380(func_02054218(p));
    } else {
        func_020543b8(func_02054254(p));
    }
}
