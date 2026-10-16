#include "ffc/types.h"
extern void func_ov003_02164834(void*, int, int, int, int, int, int, int);
extern char data_ov003_0217abfc[];
void* func_ov003_02164c08(uint8_t* self, int a1, int a2, uint16_t a3, uint32_t p4, uint16_t p5, int p6, uint16_t p7, uint16_t p8, int p9) {
    func_ov003_02164834(self, a1, a2, p5, p6, p7, p8, p9);
    *(void**)self = data_ov003_0217abfc;
    *(uint16_t*)(self + 0x94) = a3;
    *(uint32_t*)(self + 0x98) = p4;
    return self;
}
