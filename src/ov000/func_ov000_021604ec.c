#include "ffc/types.h"

extern void *func_ov000_02163350(void);
extern int func_ov000_02163408(void);
extern void func_ov000_02160f20(void);
extern void func_ov000_0215dbd8(int a, int b);
extern int func_ov000_0216384c(void);
extern void func_ov001_021832d4(int a);
extern int func_ov000_02163a84(void);
extern int func_ov000_0216376c(void);
extern int func_ov000_0215b73c(int a, int b);
extern void func_ov000_02160e88(void);
extern void func_ov000_0216335c(int a);
extern int func_ov000_021602ac(int a);

#define FIELD32(off) (*(int32_t *)((uint8_t *)func_ov000_02163350() + (off)))
#define FIELD8(off) (*(uint8_t *)((uint8_t *)func_ov000_02163350() + (off)))

int func_ov000_021604ec(void) {
    int r4 = 1;

    if (FIELD32(0x798) != 0 || FIELD8(0x15) == 3) {
        if (func_ov000_02163408() > 1) {
            func_ov000_02160f20();
        }
        if (FIELD32(0x798) != 0) {
            func_ov000_0215dbd8(0x16, (int)0xfffec5d0);
        } else {
            func_ov000_0215dbd8(0x16, (int)0xfffec5d2);
        }
        return 0;
    }

    if (func_ov000_0216384c() == 1) {
        return r4;
    }

    if (FIELD32(0x57c) != 0) {
        FIELD32(0x57c) = 0;
    }
    if (FIELD32(0x618) != 0) {
        func_ov001_021832d4(FIELD32(0x618));
        FIELD32(0x618) = 0;
    }

    if ((func_ov000_02163a84() && FIELD8(0x62f) != 0) ||
        (func_ov000_0216376c() && func_ov000_0215b73c(FIELD32(0x554), 1) != 0) ||
        func_ov000_02163408() > 1) {
        func_ov000_02160e88();
    } else {
        func_ov000_0216335c(3);
        r4 = func_ov000_021602ac(0);
    }
    return r4;
}
