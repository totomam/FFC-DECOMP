#include "ffc/types.h"

extern void func_02088978(uint32_t id);
extern void func_0208898c(void);

void func_02084774(uint32_t id)
{
    uint32_t off;
    uint32_t v;

    func_02088978(id);
    off = id * 12;
    do {
        v = *(volatile uint32_t *)(0x40000b8 + off);
    } while (v & 0x80000000);
    if (id == 0) {
        *(volatile uint32_t *)(0x40000b0 + off) = 0;
        *(volatile uint32_t *)(0x40000b4 + off) = 0;
        *(volatile uint32_t *)(0x40000b8 + off) = 0x81400001;
    }
    func_0208898c();
}
