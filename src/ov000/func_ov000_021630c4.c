#include "ffc/types.h"

extern int func_ov000_02159000(void);
extern uint8_t *func_ov000_02163350(void);
extern int func_ov000_021633a8(void);
extern int func_ov000_0215b594(void);
extern void func_ov000_0216307c(int a, int b, int c);

int func_ov000_021630c4(int a, int b, int c) {
    if (func_ov000_02159000() != 0 ||
        func_ov000_02163350() == 0 ||
        func_ov000_021633a8() == 0 ||
        (func_ov000_0215b594() != 4 && func_ov000_0215b594() != 5) ||
        func_ov000_021633a8() == 0 ||
        (*(int32_t *)(func_ov000_02163350() + 0x61c) != 0xd &&
         *(int32_t *)(func_ov000_02163350() + 0x61c) != 1) ||
        b == 0 ||
        func_ov000_02163350()[0xd] == 0) {
        return 0;
    }
    if (*(int32_t *)(func_ov000_02163350() + 0x48) != 0) {
        return 0;
    }
    if (a != *(int32_t *)(func_ov000_02163350() + 0x2c)) {
        func_ov000_0216307c(a, b, c);
    }
    return 1;
}
