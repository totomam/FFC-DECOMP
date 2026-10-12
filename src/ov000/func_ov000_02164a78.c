#include "ffc/types.h"

extern void func_ov000_02158cf4(uint32_t *out, void *in);
extern uint32_t func_ov000_021581b8(void *a, void *b);
extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_ov000_02158230(void *a, void *b);
extern void func_ov000_0215820c(void);
extern void func_ov000_0215917c(void);
extern void func_ov000_021591a8(void);
extern uint8_t data_ov000_0216b2cc[];

uint32_t func_ov000_02164a78(void *param0, void *param1)
{
    uint32_t buf[5];
    uint32_t r;

    func_ov000_02158cf4(buf, param1);
    if (buf[4] == 0) {
        return 0;
    }
    if (func_ov000_021581b8(func_ov000_0215917c, func_ov000_021591a8) == 0) {
        return 0;
    }
    if (func_02092864((const uint8_t *)param0) == 0) {
        r = func_ov000_02158230(data_ov000_0216b2cc, param1);
    } else {
        r = func_ov000_02158230(param0, param1);
    }
    if (r == 0) {
        func_ov000_0215820c();
        return 0;
    }
    return 1;
}
