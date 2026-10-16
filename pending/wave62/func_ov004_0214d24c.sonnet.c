#include "ffc/types.h"
extern int func_ov004_02153124(int);
extern int func_ov004_0214cf90(int);
extern void func_02069300(int);
extern void func_020692f0(void);
void func_ov004_0214d24c(uint8_t *p) {
    if (*(uint8_t *)(p + 0xa4) != 0) {
        *(uint8_t *)(p + 0xa4) = 0;
        if (func_ov004_0214cf90(func_ov004_02153124(*(int *)(p + 0x94))) != 0) {
            func_02069300(func_ov004_0214cf90(func_ov004_02153124(*(int *)(p + 0x94))));
        }
    } else {
        *(uint8_t *)(p + 0xa4) = 1;
        func_020692f0();
    }
}
