#include "ffc/types.h"

extern int32_t func_020735d4(void *p);
extern uint32_t func_020735dc(void *p, int32_t i);
extern uint32_t func_020735ec(void *p, int32_t i);
extern void func_0215c0c4(int32_t a, uint32_t b, uint32_t c);

void func_02073708(void *p) {
    int32_t i;
    for (i = 0; i < func_020735d4(p); i++) {
        uint32_t x = func_020735dc(p, i);
        uint32_t y = func_020735ec(p, i);
        func_0215c0c4(0, x, y);
    }
}
