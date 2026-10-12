#include "ffc/types.h"

extern void func_ov000_02145ad0(void *p);
extern int func_ov000_02145a4c(void *p);
extern uint32_t func_0209a978(uint32_t p, uint32_t n);
extern void func_020871d8(uint32_t x);
extern uint32_t data_ov000_021697d0[];
extern uint8_t data_ov000_0216bc60[];

int func_ov000_02145b74(void *p)
{
    uint32_t i;
    int j;
    uint32_t n;

    for (i = 0; i < 6; i++) {
        func_ov000_02145ad0(p);
        j = 0;
        n = func_0209a978(data_ov000_021697d0[i], 100);
        while ((uint32_t)j < n) {
            if (*(uint32_t *)(data_ov000_0216bc60 + 0x50) == 0) {
                return 0;
            }
            func_020871d8(100);
            {
                int r = func_ov000_02145a4c(p);
                if (r != 0) {
                    return r;
                }
            }
            j++;
            n = func_0209a978(data_ov000_021697d0[i], 100);
        }
    }
    return 0;
}
