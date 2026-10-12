#include "ffc/types.h"

extern uint8_t data_021434e4[];
extern void func_020890f8(void);
extern int func_020891f4(int a, int b);
extern void func_020891a8(int a, void *b);
extern void func_0208a6a8(void);

void func_0208a814(void) {
    if (*(uint16_t *)data_021434e4 == 0) {
        *(uint16_t *)data_021434e4 = 1;
        func_020890f8();
        *(uint16_t *)(data_021434e4 + 0x10) = 0;
        *(uint32_t *)(data_021434e4 + 4) = 0;
        *(uint32_t *)(data_021434e4 + 0x14) = 0;
        *(uint16_t *)(data_021434e4 + 0x36) = 0;
        *(uint16_t *)(data_021434e4 + 0x34) = 0;
        *(uint16_t *)(data_021434e4 + 0x3a) = 0;
        *(uint16_t *)(data_021434e4 + 0x38) = 0;
        while (!func_020891f4(6, 1)) {
        }
        func_020891a8(6, (void *)func_0208a6a8);
    }
}
