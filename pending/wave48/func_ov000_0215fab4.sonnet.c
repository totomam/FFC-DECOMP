#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern int func_ov000_021633a8(void);
extern int func_ov000_0216372c(uint32_t a);
extern void func_ov000_021639e0(void);
extern uint64_t func_020882cc(void);
extern uint32_t *func_ov000_02163608(void);
extern int func_ov000_0215fba4(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h);

int func_ov000_0215fab4(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h) {
    uint8_t *base;
    int r;
    uint32_t *p;
    uint64_t v;
    int k = 0x5a4;
    int m = 0x7b4;

    base = func_ov000_02163350();
    base[m] = 1;
    switch (func_ov000_021633a8()) {
    case 1:
        if (func_ov000_0216372c(a) != 0) {
            base = func_ov000_02163350();
            if (*(uint32_t *)(base + k) == 0) {
                base = func_ov000_02163350();
                if (*(uint32_t *)(base + k + 0x78) == 1) {
                    base = func_ov000_02163350();
                    if (*(uint32_t *)(base + k - 0x28) == 0) {
                        base = func_ov000_02163350();
                        *(uint32_t *)(base + k) = 1;
                        goto store;
                    }
                }
                r = 4;
            } else {
                base = func_ov000_02163350();
                if (*(uint32_t *)(base + k + 0x78) == 3) {
                    p = func_ov000_02163608();
                    base = func_ov000_02163350();
                    if (a == *(uint32_t *)(base + k - 0x50)) {
                        if ((int)*p < (int)a) {
                        store:
                            func_ov000_021639e0();
                            r = 2;
                            v = func_020882cc();
                            base = func_ov000_02163350();
                            *(uint32_t *)(base + m - 0x4c) = (uint32_t)v;
                            *(uint32_t *)(base + m - 0x48) = (uint32_t)(v >> 32);
                        } else r = 0xff;
                        break;
                    }
                }
                r = 4;
            }
        } else {
            r = 3;
            base = func_ov000_02163350();
            base[m] = 0x14;
        }
        break;
    case 0:
    case 2:
        r = func_ov000_0215fba4(a, b, c, d, e, f, g, h);
        break;
    }
    return r;
}
