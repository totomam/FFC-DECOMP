#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern int func_ov000_02163408(void);
extern uint8_t *func_ov000_02163634(int idx);
extern uint32_t func_ov000_0215b534(void);
extern void func_ov000_0215eb30(int code, uint32_t a, uint32_t b, uint16_t c, uint32_t *d, int e);
extern int func_ov000_0215fed0(void);
extern void func_ov000_021619a0(void);

int func_ov000_02162ad0(void)
{
    int n;
    int i;
    uint8_t *obj;
    uint32_t x;
    int code;

    func_ov000_02163350();
    n = func_ov000_02163408();
    for (i = 1; i < n; i++) {
        obj = func_ov000_02163634(i);
        x = func_ov000_0215b534();
        code = (*(uint32_t *)(func_ov000_02163350() + 0x788) & (1u << obj[0x16])) ? 0x55 : 0x52;
        func_ov000_0215eb30(code, *(uint32_t *)obj, *(uint32_t *)(obj + 4), *(uint16_t *)(obj + 0xc), &x, 1);
        if (func_ov000_0215fed0() != 0) {
            return 0;
        }
    }
    func_ov000_021619a0();
    return 1;
}
