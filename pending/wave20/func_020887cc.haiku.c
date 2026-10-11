#include "ffc/types.h"

extern void func_0208658c(int32_t a, void *b);
extern void func_020818f8(int16_t a);
extern void func_020866dc(int32_t a);
extern void func_02088828(void);

void func_020887cc(uint8_t *p)
{
    func_0208658c(4, (void *)func_02088828);
    func_020818f8(*(int16_t *)(p + 0x10));
    *(volatile uint16_t *)0x4000004 |= 0x20;
    func_020866dc(4);
}
