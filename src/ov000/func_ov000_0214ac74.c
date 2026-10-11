#include "ffc/types.h"

extern void func_ov000_0214c46c(void *p);
extern void func_ov000_0214bdb8(void *p, uint32_t a, uint32_t b);

void func_ov000_0214ac74(void *p, uint32_t a, uint32_t b) {
    func_ov000_0214c46c((uint8_t *)p + 0x2ec);
    func_ov000_0214bdb8((uint8_t *)p + 0x3a4, a, b);
}
