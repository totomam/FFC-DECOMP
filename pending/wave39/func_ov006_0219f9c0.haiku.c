#include "ffc/types.h"

extern uint32_t data_ov006_021bb120[];
extern int func_ov000_0214f600(uint32_t a, uint32_t b, uint32_t c);
extern int func_ov000_0214f804(void);
extern int func_ov000_0214f4f0(uint32_t a, void *fn);
extern void func_ov006_0219f708(void);

int func_ov006_0219f9c0(void)
{
    switch (data_ov006_021bb120[6]) {
    case 1:
        if (func_ov000_0214f4f0(data_ov006_021bb120[2], (void *)func_ov006_0219f708) == 3) {
            return 1;
        }
        return 0;
    case 5:
        if (func_ov000_0214f600(0, 0, 0) == 3) {
            return 1;
        }
        return 0;
    case 7:
        if (func_ov000_0214f804() == 3) {
            return 1;
        }
        return 0;
    case 0:
    case 2:
    case 3:
    case 4:
    case 6:
    case 8:
    default:
        return 0;
    }
}
