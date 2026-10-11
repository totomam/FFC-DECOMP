#include "ffc/types.h"

extern uint32_t func_02055194(uint32_t x);
extern void func_0208641c(uint32_t a, uint32_t b);
extern void func_0204f584(uint8_t *p);
extern uint32_t data_0213e098;
extern uint32_t data_02141510[];

void func_0204f550(uint8_t *p)
{
    uint32_t v = *(uint32_t *)(p + 0x94);
    if (v == 0) {
        v = func_02055194(data_0213e098);
    }
    if (data_02141510[1] == v) {
        func_0208641c(1, 1);
        func_0204f584(p);
    }
}
