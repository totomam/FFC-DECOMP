#include "ffc/types.h"

extern void func_02036750(void *p);
extern void func_0201f1f0(uint32_t a, uint32_t b, void *c);
extern uint32_t func_02036890(void *p);
extern int func_02019ff0(uint32_t a, uint8_t b);
extern void func_020367a8();
extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;

int func_ov007_021ae928(void)
{
    uint8_t buf[0x58];
    int i;

    func_02036750(buf);
    for (i = 0; i < 3; i++) {
        func_0201f1f0(data_020b93b8, i + 1, buf);
        if (func_02036890(buf) != 0) {
            if (func_02019ff0(data_020b8e44, (uint8_t)(i + 1)) == 1) {
                func_020367a8(buf);
                return 1;
            }
        }
    }
    func_020367a8(buf);
    return 0;
}
