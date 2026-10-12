#include "ffc/types.h"

extern void *data_ov001_021952f0;
extern void *func_ov000_021686f4(uint32_t size, uint32_t align, uint32_t flags);
extern void func_ov000_02168784(void *obj, void *buf);
extern uint32_t func_ov000_02168768(void *obj);
extern void func_ov000_0216876c(void *obj, uint32_t v);

void func_ov001_0218298c(void)
{
    uint32_t buf[21] = {0};
    void **gp = &data_ov001_021952f0;
    void *a = *gp;
    void *b = a;
    if (a == 0) {
        a = func_ov000_021686f4(0x54, 4, 0);
        b = a;
        *gp = a;
    }
    func_ov000_02168784(a, buf);
    {
        uint32_t r = func_ov000_02168768(b);
        func_ov000_0216876c(a, r - 1);
    }
}
