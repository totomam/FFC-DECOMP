#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern void func_ov000_02160bfc(void);
extern int func_ov000_0215b6f0(void);
extern void func_ov001_021832d4(uint32_t);
extern void func_ov001_021807e8(uint32_t);
extern void func_ov000_02160398(int);
extern int func_ov000_0215fed0(void);
extern void func_ov000_02160c84(void);

#define LD32(off) (*(uint32_t *)(func_ov000_02163350() + (off)))
#define ST32(off, v) (*(uint32_t *)(func_ov000_02163350() + (off)) = (v))
#define LD8(off) (*(uint8_t *)(func_ov000_02163350() + (off)))
#define ST8(off, v) (*(uint8_t *)(func_ov000_02163350() + (off)) = (v))

void func_ov000_02160aa4(void) {
    int u;

    ST32(0x680, 0);
    u = 0;
    if (LD32(0x61c) == 0x16) {
        func_ov000_02160bfc();
        return;
    }
    if (func_ov000_0215b6f0() != 0) {
        u = 1;
    }
    ST8(0x62a, 1);
    if (LD8(0x14) == 3) {
        if (LD32(0x618) != 0) {
            func_ov001_021832d4(LD32(0x618));
            ST32(0x618, 0);
        }
        ST8(0x62a, 1);
        if (u != 0) {
            func_ov001_021807e8(*(uint32_t *)(*(uint32_t *)(func_ov000_02163350() + 4)));
        } else {
            func_ov000_02160398(0);
            if (func_ov000_0215fed0() != 0) {
                return;
            }
        }
        func_ov000_02160bfc();
        return;
    }
    if (LD32(0x61c) == 3 || LD32(0x61c) == 4 || LD32(0x61c) == 5 ||
        LD32(0x61c) == 6 || LD32(0x61c) == 0xe || LD32(0x61c) == 0xf) {
        if (LD32(0x67c) != 0) {
            func_ov000_02160398(0);
            if (func_ov000_0215fed0() != 0) {
                return;
            }
        }
        func_ov000_02160c84();
        if (func_ov000_0215fed0() != 0) {
            return;
        }
    }
    if (LD32(0x618) != 0) {
        func_ov001_021832d4(LD32(0x618));
        ST32(0x618, 0);
    }
    if (u != 0) {
        ST8(0x62a, 1);
        func_ov001_021807e8(*(uint32_t *)(*(uint32_t *)(func_ov000_02163350() + 4)));
    }
    func_ov000_02160bfc();
}
