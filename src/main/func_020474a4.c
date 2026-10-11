#include "ffc/types.h"

extern int func_0205681c(int x);
extern void func_ov008_021a123c(void);
extern void func_ov008_021a15c8(void);

void func_020474a4(uint8_t *p) {
    if (p[0x94]) {
        if (func_0205681c(0x80)) {
            func_ov008_021a123c();
        }
    } else {
        if (func_0205681c(0x80)) {
            func_ov008_021a15c8();
        }
    }
}
