#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern void func_ov000_02165c2c(uint32_t v);
extern uint32_t func_ov000_02165c48(uint32_t a, uint32_t b);
extern void func_ov000_02165e50(uint8_t *buf, void *dst, uint32_t len, uint32_t flag);

void func_ov001_0217ef7c(const int8_t *text, void *dst)
{
    uint8_t buf[0x20];
    uint32_t i;
    uint32_t len;

    len = func_02092864((const uint8_t *)text);
    func_ov000_02165c2c(0x79707367);
    i = 0;
    for (; i < len; i++) {
        int8_t k = (int8_t)func_ov000_02165c48(0, 0xff);
        buf[i] = (uint8_t)(text[i] ^ k);
    }
    buf[i] = 0;
    func_ov000_02165e50(buf, dst, len, 1);
}
