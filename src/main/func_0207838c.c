#include "ffc/types.h"

extern void func_020794f4(uint32_t b, uint32_t *a);
extern void func_020796dc(void);

void func_0207838c(uint32_t *a, uint32_t b) {
    func_020794f4(b, a);
    a[1] = (uint32_t)func_020796dc;
}
