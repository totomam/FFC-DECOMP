#include "ffc/types.h"

extern int func_02087460(void *p);
extern int func_0207d474(void);
extern void func_020871d8(uint32_t v);
extern void func_021da934(void);
extern void func_021da9a0(void *p);
extern void func_021da9d0(uint32_t v);

void func_0201a3fc(uint8_t *p)
{
    uint32_t c;
    if (func_02087460(p) == 0) {
        return;
    }
    if (p[1] != 0) {
        c = 10;
        for (;;) {
            if (func_0207d474() == 1) {
                break;
            }
            func_020871d8(c);
        }
        func_020871d8(0x30);
        func_021da934();
        p[1] = 0;
    }
    func_021da9a0(p + 4);
    func_021da9d0(p[0]);
}
