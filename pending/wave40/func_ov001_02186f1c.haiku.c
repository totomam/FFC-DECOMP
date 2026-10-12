#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_02092a04(uint32_t a, const uint8_t *b, uint32_t c);
extern void func_ov001_021879c0(uint8_t *self, uint32_t v);
extern void func_ov001_021874c4(uint8_t *self);
extern uint8_t *data_ov001_021942f8;
extern uint32_t data_ov001_02195758;

typedef void (*fn_t)(uint8_t *self, uint32_t a, uint32_t b, uint32_t c);

void func_ov001_02186f1c(uint8_t *self)
{
    uint8_t *p7;
    uint8_t *p6;
    uint32_t n;
    int32_t cnt;

    cnt = *(int32_t *)(self + 0x80);
    if (cnt > 0) {
        p7 = data_ov001_021942f8;
        if ((uint32_t)cnt > func_02092864(p7)) {
            p6 = data_ov001_021942f8;
            n = *(uint32_t *)(self + 0x7c);
            if (func_02092a04(n, p6, func_02092864(p6)) == 0) {
                func_ov001_021879c0(self, n + func_02092864(p7));
                ((fn_t)*(void **)(self + 0x488))(self, 5, data_ov001_02195758, *(uint32_t *)(self + 0x494));
            }
        }
    }
    ((fn_t)*(void **)(self + 0x488))(self, 4, data_ov001_02195758, *(uint32_t *)(self + 0x494));
    func_ov001_021874c4(self);
}
