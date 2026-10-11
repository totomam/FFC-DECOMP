#include "ffc/types.h"

extern void func_ov006_021a28c4(void *buf, uint32_t a, uint32_t b);
extern void func_ov006_021a28ec(void *buf, uint32_t a, uint32_t b);
extern void func_ov006_021a2964(void *dst, void *buf);

void func_ov006_021a3288(void *dst, uint32_t a, uint32_t b)
{
    uint8_t buf[0x58];

    func_ov006_021a28c4(buf, a, b);
    func_ov006_021a28ec(buf, a, b);
    func_ov006_021a2964(dst, buf);
}
