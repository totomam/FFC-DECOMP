#include "ffc/types.h"

extern void func_02087840(void);
extern void func_02087890(uint32_t addr, uint32_t size);
extern void func_02087874(uint32_t addr, uint32_t size);
extern void func_020878d0(void);

void func_0207ce78(uint32_t a, uint32_t n, uint32_t lim)
{
    uint32_t addr = a;
    uint32_t size = n;
    uint32_t off;

    if (size >= lim) {
        func_02087840();
        return;
    }
    off = addr & 31;
    if (off != 0) {
        addr -= off;
        func_02087890(addr, 32);
        func_02087890(addr + size, 32);
        size += 32;
    }
    func_02087874(addr, size);
    func_020878d0();
}
