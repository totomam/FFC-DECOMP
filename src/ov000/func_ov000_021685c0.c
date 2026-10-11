#include "ffc/types.h"

extern void func_02084a58(void *dst, void *src, uint32_t n);
extern void func_02084a0c(uint32_t v, void *p, uint32_t n);
extern uint8_t data_ov000_02170bcc[];
extern uint8_t data_ov000_0217118c[];

void func_ov000_021685c0(void)
{
    int i;
    for (i = 0; i < 0x17; i++) {
        func_02084a58(data_ov000_02170bcc + ((i + 1) << 6), data_ov000_02170bcc + (i << 6), 0x40);
    }
    func_02084a0c(0, data_ov000_0217118c, 0x40);
}
