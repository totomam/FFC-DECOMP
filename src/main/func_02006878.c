#include "ffc/types.h"

extern void func_020799bc(int a, int b);
extern void func_02079838(int a, uint32_t b);
extern uint32_t data_020a7ea4;

void func_02006878(uint8_t *p) {
    if (*p != 0) {
        func_020799bc(0, 0);
        func_020799bc(1, 0);
        func_02079838(2, data_020a7ea4);
        func_02079838(3, data_020a7ea4);
        func_020799bc(4, 0);
    }
}
