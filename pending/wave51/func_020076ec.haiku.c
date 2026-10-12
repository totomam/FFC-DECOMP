#include "ffc/types.h"

extern void func_02005fec(uint8_t *p);
extern int func_02006110(uint8_t *p, int i);
extern void func_020060a8(uint8_t *p, int i);
extern void func_020060dc(uint8_t *p, int i);

void func_020076ec(uint8_t *p) {
    int i;
    if (p[0] == 0) return;
    for (i = 0; i < 0x10; i++) {
        int off = i * 0x18;
        func_02005fec(p + 0x28 + off);
        if (func_02006110(p + 0x18, i) == 0 && *(int32_t *)(p + off + 0x34) <= 0) {
            func_020060a8(p + 0x18, i);
        } else {
            if (func_02006110(p + 0x18, i) != 0 && *(int32_t *)(p + off + 0x34) > 0) {
                func_020060dc(p + 0x18, i);
            }
        }
    }
}
