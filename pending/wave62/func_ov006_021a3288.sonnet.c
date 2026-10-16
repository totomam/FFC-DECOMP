/* cflags: -O4,p -opt noschedule */
#include "ffc/types.h"
extern void func_ov006_021a28c4(void *a);
extern void func_ov006_021a28ec(void *a, uint32_t b, uint32_t c);
extern void func_ov006_021a2964(void *a, void *b);
void func_ov006_021a3288(void *p, uint32_t b, uint32_t c) {
    uint8_t buf[0x58];
    func_ov006_021a28c4(buf);
    func_ov006_021a28ec(buf, b, c);
    func_ov006_021a2964(p, buf);
}
