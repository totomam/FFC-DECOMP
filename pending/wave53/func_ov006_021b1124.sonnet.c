#include "ffc/types.h"

extern uint64_t func_020882cc(uint32_t a);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern void func_ov006_021b5774(uint32_t x, uint32_t a);
extern uint8_t *data_ov006_021bc7f4;
extern uint8_t data_ov006_021b8998[];

void func_ov006_021b1124(uint32_t a)
{
    uint8_t *base;
    uint32_t f8;
    uint32_t f4;
    int32_t i;

    uint64_t t = func_020882cc(a);
    base = data_ov006_021bc7f4;
    f4 = 0;
    if (t >= *(uint64_t *)(base + 0x1b88) + (((uint64_t)f4 << 32) | 0x17f898u)) {
        f8 = f4;
        for (i = f4; i < 16; i++) {
            if (func_02090410(base + 0x1300 + i * 7, data_ov006_021b8998, 6) != 0) {
                if (base[0x1306 + i * 7] != 0) {
                    f8 = 1;
                } else {
                    f4 = 1;
                }
            }
        }

        if (f8 != 0 && f4 != 0) {
            void (*fp)(uint32_t) = *(void (**)(uint32_t))(base + 0x1370);
            if (fp != 0) {
                fp(2);
            }
        } else if (f8 != 0) {
            void (*fp)(uint32_t) = *(void (**)(uint32_t))(base + 0x1370);
            if (fp != 0) {
                fp(1);
            }
        } else if (f4 == 0) {
            void (*fp)(uint32_t) = *(void (**)(uint32_t))(base + 0x1370);
            if (fp != 0) {
                fp(0);
            }
        }

        *(uint32_t *)(data_ov006_021bc7f4 + 0x1b90) = 0;
        data_ov006_021bc7f4[0x1b96] = 1;
        func_ov006_021b5774(0, a);
    }
}
