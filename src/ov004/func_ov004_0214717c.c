#include "ffc/types.h"

extern uint8_t data_ov004_02157c58[];
extern void func_ov004_0215312c(uint32_t a, uint32_t b);
extern void func_02056db0(void *p);

void *func_ov004_0214717c(void *p) {
    *(uint8_t **)p = data_ov004_02157c58;
    func_ov004_0215312c(*(uint32_t *)((uint8_t *)p + 0x88), 0);
    func_02056db0(p);
    return p;
}
