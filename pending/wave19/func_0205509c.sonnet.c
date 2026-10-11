/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_0205509c(uint8_t *base);
struct Ime {
    uint16_t old;
    Ime() { old = *(volatile uint16_t *)0x04000208; *(volatile uint16_t *)0x04000208 = 0; }
    ~Ime() { (void)*(volatile uint16_t *)0x04000208; *(volatile uint16_t *)0x04000208 = (old != 0) ? 1 : 0; }
};
extern "C" void func_0205509c(uint8_t *base) {
    Ime g;
    *(int32_t *)(base + 0x17c) -= 1;
}
