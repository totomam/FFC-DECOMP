#include "ffc/types.h"

extern void func_ov006_021a28c4(void *p);
extern void func_ov006_021a28ec(void *p, uint32_t a, uint32_t b);
extern void func_ov006_021a2964(void *a, void *p);

void func_ov006_021a3288(void *r0, uint32_t r1, uint32_t r2) {
    uint8_t buf[0x58];
    func_ov006_021a28c4(buf);
    func_ov006_021a28ec(buf, r1, r2);
    func_ov006_021a2964(r0, buf);
}
