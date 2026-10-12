#include "ffc/types.h"

extern uint32_t func_ov000_0214f964(void);
extern void func_ov000_0214f478(void);
extern void func_ov000_0214f588(void);
extern void func_ov000_0214f67c(void);
extern void func_ov000_0214f804(void);
extern void func_ov000_0214f898(void);
extern void func_ov000_02152b80(uint32_t x);

int func_ov000_02151fa4(void)
{
    uint32_t v = func_ov000_0214f964();
    switch (v) {
    case 0:
        return 1;
    case 1:
        func_ov000_0214f478();
        break;
    case 3:
        func_ov000_0214f588();
        break;
    case 6:
        func_ov000_0214f67c();
        break;
    case 9:
        func_ov000_0214f804();
        break;
    case 12:
        func_ov000_0214f898();
        break;
    case 11: {
        int n = 0;
        func_ov000_02152b80(0);
        return n - 1;
    }
    default:
        break;
    }
    return 0;
}
