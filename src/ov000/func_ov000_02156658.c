#include "ffc/types.h"

extern void func_02088e8c(void *p);
extern void func_ov000_0214b0e0(void *p, int n);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_020871d8(int n);

int func_ov000_02156658(void *a0)
{
    uint8_t *p = (uint8_t *)a0;

    if (*(uint32_t *)(p + 0x1130) == 1) {
        func_02088e8c(p + 0x1a10);
        func_ov000_0214b0e0(p + 0x1a10, 0x20);
    }

    func_0208763c(p + 0x1c34);

    if (*(uint32_t *)(p + 0x1c34 + 0x18) == 1) {
        func_02087678(p + 0x1c34);
        return 0;
    }

    func_02087678(p + 0x1c34);
    func_020871d8(10);
    return 1;
}
