#include "ffc/types.h"

extern uint8_t data_ov000_0216e26c[];
extern int func_ov000_02152ce0(void);
extern void *func_ov000_02150268(int);
extern void func_02087874(void *, int);
extern int func_ov000_021545c8(void *, void *);
extern void func_02084b2c(void *, int, int);

void func_ov000_02152ba4(void)
{
    uint8_t v;
    void *p;

    v = *(uint8_t *)(*(uint8_t **)(data_ov000_0216e26c + 0xc) + 0x22);
    if (v == 0) {
        v = (uint8_t)func_ov000_02152ce0();
    }
    *(uint8_t *)(*(uint8_t **)(data_ov000_0216e26c + 0xc) + 0x17) = v;

    p = func_ov000_02150268(0);
    if (p != 0) {
        func_02087874(p, 0x20);
        if (func_ov000_021545c8(p, *(uint8_t **)(data_ov000_0216e26c + 0xc) + 0x18) == 0) {
            func_02084b2c(*(uint8_t **)(data_ov000_0216e26c + 0xc) + 0x18, 0, 10);
        }
        return;
    }
    func_02084b2c(*(uint8_t **)(data_ov000_0216e26c + 0xc) + 0x18, 0, 10);
}
