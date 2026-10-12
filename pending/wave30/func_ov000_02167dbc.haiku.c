#include "ffc/types.h"

extern uint64_t func_0209a400(uint32_t x);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern uint32_t func_ov000_02167b80(void *a, uint32_t b, uint32_t c);
extern uint32_t func_ov000_02167f34(void *a, void *b);
extern uint32_t func_ov000_02167bcc(void *a, uint32_t b, uint32_t c);
extern uint8_t data_ov000_0216bbb8[];

uint32_t func_ov000_02167dbc(void *a, uint32_t b, uint32_t c, uint32_t d)
{
    uint8_t buf[0x20];
    uint64_t v;

    v = func_0209a400(d);
    func_02091b10(buf, (uint32_t)data_ov000_0216bbb8, (uint32_t)v, (uint32_t)(v >> 32));

    if (func_ov000_02167b80(a, b, c) && func_ov000_02167f34(a, buf) && func_ov000_02167bcc(a, b, c)) {
        return 1;
    }
    return 0;
}
