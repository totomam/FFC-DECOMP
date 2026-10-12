#include "ffc/types.h"

extern uint32_t data_02141948;
extern void func_020890f8(void);
extern int func_020891f4(int a, int b);
extern void func_020891a8(int a, void *b);
extern void func_020894cc(void);

void func_02089334(void)
{
    if (*(uint16_t *)&data_02141948 != 0) {
        return;
    }
    *(uint16_t *)&data_02141948 = 1;
    *(uint32_t *)((uint8_t *)&data_02141948 + 4) = 0;
    *(uint32_t *)((uint8_t *)&data_02141948 + 8) = 0;
    *(uint32_t *)((uint8_t *)&data_02141948 + 0x20) = 0;
    *(uint32_t *)((uint8_t *)&data_02141948 + 0xc) = 0;
    *(uint32_t *)((uint8_t *)&data_02141948 + 0x10) = 0;
    func_020890f8();
    while (func_020891f4(5, 1) == 0) {
    }
    func_020891a8(5, (void *)func_020894cc);
}
