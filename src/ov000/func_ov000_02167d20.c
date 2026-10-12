#include "ffc/types.h"

extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern uint32_t func_ov000_02167b80(void *obj, uint32_t a, uint32_t b);
extern uint32_t func_ov000_02167f34(void *obj, void *buf);
extern uint32_t func_ov000_02167bcc(void *obj, uint32_t a, uint32_t b);
extern uint8_t data_ov000_0216bbb4[];

uint32_t func_ov000_02167d20(void *obj, uint32_t a, uint32_t b, uint32_t c)
{
    uint8_t buf[0x20];

    func_02091b10(buf, (uint32_t)data_ov000_0216bbb4, c);
    if (func_ov000_02167b80(obj, a, b) == 0) {
        goto fail;
    }
    if (func_ov000_02167f34(obj, buf) == 0) {
        goto fail;
    }
    if (func_ov000_02167bcc(obj, a, b) != 0) {
        goto ok;
    }
fail:
    return 0;
ok:
    return 1;
}
