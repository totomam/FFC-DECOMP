#include "ffc/types.h"

extern void func_020376e0(void);
extern void func_ov015_021d77d8(void);
extern void func_ov015_021d77e0(void (*a)(void), void (*b)(void));
extern uint32_t func_ov015_021d7810(uint32_t a, uint32_t b);
extern void func_020376f0(void);
extern void func_ov003_02167480(void);
extern void func_ov003_02167484(void);

void func_ov003_02167490(uint8_t *p) {
    func_020376e0();
    func_ov015_021d77d8();
    func_ov015_021d77e0(func_ov003_02167480, func_ov003_02167484);
    uint32_t r = func_ov015_021d7810(0, 0);
    *(uint32_t *)(*(uint8_t **)(p + 0x18) + 0x170) = r;
    func_020376f0();
}
