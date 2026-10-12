#include "ffc/types.h"

extern uint8_t *func_ov000_02152ae4(uint32_t size);
extern void func_020849e0(int val, void *dst, uint32_t size);
extern uint8_t func_ov000_02153650(uint8_t *p);
extern uint8_t func_ov000_02153918(uint8_t *p);
extern uint8_t func_ov000_02153994(uint8_t *p);
extern uint8_t func_ov000_02153698(uint8_t *p);
extern void func_02087460(void);

int func_ov000_0215355c(int mode)
{
    uint8_t *p;
    uint32_t idx;

    p = func_ov000_02152ae4(0x10);
    switch (mode) {
    case 0:
        func_020849e0(0, p + 0x900, 0x2f4);
        p[0x14c0] = func_ov000_02153650(p);
        break;
    case 1:
        p[0x14c0] = func_ov000_02153918(p);
        p[0x14bf] = func_ov000_02153994(p);
        if (p[0x14c0] == 0) {
            return 0;
        }
        break;
    case 2:
        func_020849e0(0, p + 0x900, 0x2f4);
        idx = 0x14bf;
        p[idx] = 0;
        p[idx + 1] = func_ov000_02153698(p);
        if (p[idx + 1] == 0) {
            return 0;
        }
        break;
    }
    func_02087460();
    return 1;
}
