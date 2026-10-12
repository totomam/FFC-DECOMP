#include "ffc/types.h"

extern void func_ov000_0215e0d8(uint32_t a);
extern uint32_t func_ov000_021619c8(void);
extern void func_ov000_0215e500(void);
extern uint8_t *func_ov000_02163350(void);
extern uint32_t func_ov000_021599d0(uint32_t a);

typedef void (*fn6_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

void func_ov000_02160bfc(void) {
    uint32_t flag7 = 1;
    uint32_t flag6;
    uint8_t *p;
    uint32_t v;

    func_ov000_0215e0d8(1);
    if (func_ov000_021619c8() != 0) {
        return;
    }
    func_ov000_0215e500();
    if (*(uint32_t *)(func_ov000_02163350() + 0x680) == 0) {
        if (func_ov000_02163350()[0x14] != 2) {
            flag7 = 0;
        }
    }
    flag6 = (*(uint32_t *)(func_ov000_02163350() + 0x680) == 0);
    p = func_ov000_02163350();
    v = func_ov000_021599d0(*(uint32_t *)(func_ov000_02163350() + 0x680));
    ((fn6_t)(*(uint32_t *)(p + 0x770)))(0, 1, flag6, flag7, v, *(uint32_t *)(func_ov000_02163350() + 0x774));
    func_ov000_02163350()[0x62a] = 0;
}
