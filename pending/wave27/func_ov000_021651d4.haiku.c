#include "ffc/types.h"

extern uint8_t *func_ov000_02164ed0(uint8_t *p);
extern void func_ov000_02165834(uint8_t *p);
extern void func_ov000_0216583c(uint8_t *p);

void func_ov000_021651d4(uint8_t *p)
{
    uint8_t *r4 = func_ov000_02164ed0(p);
    func_ov000_02165834(r4 + 0x10);
    if (*(uint32_t *)(p + 0x14) != 0 && *(uint32_t *)(p + 0x18) == 0) {
        void (*fn)(uint32_t) = *(void (**)(uint32_t))(p + 0x2c);
        *(uint32_t *)(p + 0x18) = 1;
        if (fn != 0) {
            fn(*(uint32_t *)(p + 0x20));
        }
    }
    func_ov000_0216583c(r4 + 0x10);
}
