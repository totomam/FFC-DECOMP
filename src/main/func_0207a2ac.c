#include "ffc/types.h"

extern void func_02089c5c(void *p, uint32_t a, uint32_t b, uint32_t c);
extern void func_0208bc28(void *p);
extern void func_0208bc38(void *p);
extern uint32_t func_0208a17c(void);
extern void func_0208a030(uint32_t x);
extern void func_0208a138(uint32_t x);
extern void func_0207a2fc(void *p);

void func_0207a2ac(uint8_t *a)
{
    if (((int32_t)(*(uint32_t *)(a + 0x2c) << 30)) >> 31) {
        func_02089c5c(*(void **)(a + 0x4c), 0, 1u << *(uint32_t *)(a + 0x48), 0);
        func_0208bc28(a + 8);
        func_0208bc38(a + 0x18);
        *(uint32_t *)(a + 0x2c) &= ~2u;
        {
            uint32_t r = func_0208a17c();
            func_0208a030(1);
            func_0208a138(r);
        }
    }
    func_0207a2fc(a);
}
