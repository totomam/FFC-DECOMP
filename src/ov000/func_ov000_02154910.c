#include "ffc/types.h"

extern int func_ov000_0214f964(void);
extern uint8_t *func_ov000_02152ae4(int size);
extern void func_ov000_0215355c(int a, int b);
extern int func_ov000_0214f4f0(uint32_t *args, void (*fn)(void));
extern void func_ov000_02152b80(int x);
extern void func_ov000_02151efc(void);

int func_ov000_02154910(void) {
    uint32_t args[4];
    int r4 = func_ov000_0214f964();
    uint8_t *p = func_ov000_02152ae4(0x10);
    int ret;

    if (r4 == 1) {
        args[0] = p[0x14ba];
        args[1] = 0;
        args[2] = 0;
        args[3] = 0;
        func_ov000_0215355c(0, 0x14ba);
        ret = func_ov000_0214f4f0(args, func_ov000_02151efc);
        if (ret == 1 || ret >= 4) {
            func_ov000_02152b80(1);
            return 0x11;
        }
    } else {
        return 1;
    }
    return 2;
}
