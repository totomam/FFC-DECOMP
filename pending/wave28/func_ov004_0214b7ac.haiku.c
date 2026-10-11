#include "ffc/types.h"

extern void func_ov004_02149be0(void);
extern int func_ov004_02153134(void);
extern uint32_t func_ov004_02149c04(uint32_t a);
extern int func_ov004_0214ea04(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern int func_0208f68c(void);

int func_ov004_0214b7ac(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    func_ov004_02149be0();
    if (func_ov004_02153134() == 1) {
        uint32_t r = func_ov004_02149c04(a);
        func_ov004_0214ea04(b, r, c, d, 0);
        if (func_0208f68c() == 6) {
            return 1;
        }
    }
    return 0;
}
