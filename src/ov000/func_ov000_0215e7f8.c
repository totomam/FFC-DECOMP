#include "ffc/types.h"

extern int func_02086b04(void *dst, int size, const void *fmt, ...);
extern uint32_t func_02092864(const uint8_t *text);
extern uint8_t data_ov000_0216b058[];
extern uint8_t data_ov000_0216b068[];
extern uint8_t data_ov000_0216b014[];
extern uint8_t data_ov000_0216b01c[];
extern uint8_t data_ov000_0216b0e8[];
extern uint8_t data_ov000_0216b0f4[];
extern uint8_t data_ov000_0216b080[];
extern uint8_t data_ov000_0216b0dc[];

uint32_t func_ov000_0215e7f8(uint8_t *a, uint32_t b, uint32_t c, uint32_t d, uint8_t type)
{
    uint8_t buf[0x200];

    if (type == 3) {
        func_02086b04(buf, 0x1ff, data_ov000_0216b068, data_ov000_0216b058, 0, data_ov000_0216b058, 2);
    } else {
        func_02086b04(buf, 0x1ff, data_ov000_0216b014, data_ov000_0216b058, type);
    }

    func_02086b04(a, 0x1ff, data_ov000_0216b080, data_ov000_0216b0dc, 0x5a,
                  data_ov000_0216b01c, b, c, c, data_ov000_0216b0e8, d,
                  data_ov000_0216b0f4, 0, buf);
    return func_02092864(a);
}
