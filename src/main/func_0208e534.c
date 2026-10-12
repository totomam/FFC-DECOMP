#include "ffc/types.h"

extern uint8_t *func_0208ceec(void);
extern int32_t func_0208d260(void);
extern void func_0208e5c4(void);
extern void func_0208e688(void);

void func_0208e534(uint8_t *p)
{
    uint8_t *base = func_0208ceec();
    uint16_t idx = *(uint16_t *)(p + 0xa);
    uint8_t *e = base + (idx << 2);
    uint8_t *obj = *(uint8_t **)(e + 0x10c);
    void (*fn)(void) = *(void (**)(void))(e + 0xcc);
    int32_t r0;

    if (fn != func_0208e5c4 && fn != func_0208e688) {
        return;
    }
    if (obj == 0) {
        return;
    }
    if (obj != *(uint8_t **)(p + 0x20)) {
        return;
    }

    r0 = func_0208d260();
    if (*(uint16_t *)(p + 2) == 0) {
        if (r0 != 0) {
            return;
        }
        {
            int32_t s = *(uint16_t *)(p + 0x1a) >> 1;
            *(uint16_t *)(obj + (*(uint16_t *)(obj + 0x80a) << 1) + 0x800) = (uint16_t)s;
            *(uint16_t *)(obj + 0x80a) = (uint16_t)((*(uint16_t *)(obj + 0x80a) + 1) & 3);
        }
        return;
    }
    if (*(uint16_t *)(p + 2) == 10) {
        if (r0 != 0) {
            *(uint16_t *)(obj + 0x80a) = (uint16_t)((*(uint16_t *)(obj + 0x80a) + 3) & 3);
        }
        *(uint16_t *)(obj + 0x81c) = 4;
        return;
    }
    *(uint16_t *)(obj + 0x81c) = 5;
}
