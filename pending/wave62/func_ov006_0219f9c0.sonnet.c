#include "ffc/types.h"
extern int func_ov000_0214f600(int a, int b, int c);
extern int func_ov000_0214f804(void);
extern int func_ov000_0214f4f0(int a, void *f);
extern void func_ov006_0219f708(void);
extern uint32_t data_ov006_021bb120[];
int func_ov006_0219f9c0(void)
{
    switch (data_ov006_021bb120[6]) {
    case 5:
        if (func_ov000_0214f600(0, 0, 0) == 3) return 1;
        break;
    case 7:
        if (func_ov000_0214f804() == 3) return 1;
        break;
    case 1:
        if (func_ov000_0214f4f0(data_ov006_021bb120[2], (void*)func_ov006_0219f708) == 3) return 1;
        break;
    case 0: case 2: case 3: case 4: case 6: case 8:
        break;
    }
    return 0;
}
