#include "ffc/types.h"

extern void func_02074a5c(uint8_t *p);
extern void *func_0205681c(uint32_t size);
extern void *func_0207236c(void *p, uint32_t n);
extern void func_02054714(uint8_t *p);

void func_02074a38(uint8_t *p)
{
    void *r;

    func_02074a5c(p);
    r = func_0205681c(0x80);
    if (r != 0) {
        r = func_0207236c(r, 0x14);
    }
    *(void **)(p + 0x28) = r;
    func_02054714(p + 0x14);
}
