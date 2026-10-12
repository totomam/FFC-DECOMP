#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern int func_ov000_0216376c(void);
extern void func_02084b2c(void *dst, int c, uint32_t n);
extern void func_ov001_021832d4(uint32_t p);
extern void func_ov000_02160398(int x);
extern int func_ov000_0215fed0(void);
extern void func_ov000_02163758(void);

typedef struct { uint32_t a, b; } Pair;

#define W32(p, o) (*(uint32_t *)((uint8_t *)(p) + (o)))

int func_ov000_0216384c(void) {
    uint8_t *p;
    uint32_t i;

    if (W32(func_ov000_02163350(), 0x5a4) == 0) {
        return 0;
    }
    W32(func_ov000_02163350(), 0x5a4) = 0;
    p = func_ov000_02163350();
    W32(p, 0x5a8) = W32(func_ov000_02163350(), 0x61c);

    if (func_ov000_0216376c()) {
        uint8_t *dst = func_ov000_02163350();
        uint8_t *src = func_ov000_02163350();
        Pair *s = (Pair *)(src + 0x554);
        Pair *d = (Pair *)(dst + 0x5ac);
        for (i = 0; i < 5; i++) {
            d[i] = s[i];
        }
    } else {
        uint8_t *dst = func_ov000_02163350();
        func_02084b2c(dst + 0x5ac, 0, 0x28);
    }

    if (W32(func_ov000_02163350(), 0x618)) {
        func_ov001_021832d4(W32(func_ov000_02163350(), 0x618));
        W32(func_ov000_02163350(), 0x618) = 0;
        *(uint8_t *)(func_ov000_02163350() + 0x5f8) = 0;
        W32(func_ov000_02163350(), 0x5fc) = 0;
        W32(func_ov000_02163350(), 0x600) = 0;
        W32(func_ov000_02163350(), 0x604) = 0;
    }

    if (W32(func_ov000_02163350(), 0x61c) == 3 ||
        W32(func_ov000_02163350(), 0x61c) == 5 ||
        W32(func_ov000_02163350(), 0x61c) == 6 ||
        W32(func_ov000_02163350(), 0x61c) == 0xe ||
        W32(func_ov000_02163350(), 0x61c) == 0xf) {
        if (W32(func_ov000_02163350(), 0x67c) != 0) {
            func_ov000_02160398(0);
            if (func_ov000_0215fed0()) {
                func_ov000_02163758();
                return 1;
            }
        }
        *(uint8_t *)(func_ov000_02163350() + 0x18) = 0;
        W32(func_ov000_02163350(), 0x5dc) = 0;
    }

    func_ov000_02163758();
    return 1;
}
