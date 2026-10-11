#include "ffc/types.h"

extern void func_ov000_0214a4a4(void *dst, void *src, void *p);
extern void func_02084ca4(void *dst, void *src, uint32_t n);
extern uint8_t data_ov000_02169858[];
extern uint8_t data_ov000_0216985c[];
extern uint8_t data_ov000_02169860[];

void func_ov000_0214a510(void *p)
{
    uint8_t buf[0x30];

    func_ov000_0214a4a4(buf, data_ov000_02169858, p);
    func_ov000_0214a4a4(buf + 0x10, data_ov000_0216985c, p);
    func_ov000_0214a4a4(buf + 0x20, data_ov000_02169860, p);
    func_02084ca4(buf, p, 0x30);
}
