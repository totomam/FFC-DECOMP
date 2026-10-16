#include "ffc/types.h"
extern void *func_0205681c(int n);
extern void func_02056c9c(void *p, int x);
extern uint32_t data_ov003_0217a3dc;
typedef struct { uint32_t x, y; } S;
void *func_ov003_021603c4(uint32_t a, S s, uint8_t d, uint8_t e) {
    uint8_t *p = (uint8_t*)func_0205681c(0x94);
    if (p != 0) {
        func_02056c9c(p, 0);
        *(uint32_t**)p = &data_ov003_0217a3dc;
        *(uint32_t*)(p + 0x84) = a;
        *(S*)(p + 0x88) = s;
        *(uint8_t*)(p + 0x90) = d;
        *(uint8_t*)(p + 0x91) = e;
    }
    return p;
}
