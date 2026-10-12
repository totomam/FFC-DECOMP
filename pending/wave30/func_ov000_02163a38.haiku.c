#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern void func_ov001_02184030(uint32_t);

void func_ov000_02163a38(uint8_t *a) {
    if (*(uint32_t *)(func_ov000_02163350() + 0x34)) {
        uint8_t *x = func_ov000_02163350();
        uint8_t *y = func_ov000_02163350();
        uint8_t *z = func_ov000_02163350();
        ((void (*)(uint8_t *, uint32_t, uint32_t))(*(uint32_t *)(x + 0x34)))(
            a, *(uint32_t *)(y + 0x2c), *(uint32_t *)(z + 0x38));
    }
    if (a == 0) {
        func_ov001_02184030(*(uint32_t *)(func_ov000_02163350() + 0x10));
    }
    *(uint32_t *)(func_ov000_02163350() + 0x2c) = 0xff;
    *(uint32_t *)(func_ov000_02163350() + 0x48) = 0;
}
