#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    Pair p[5];
} Block;

extern uint8_t *func_ov000_02163350(void);

int func_ov000_021634c8(uint8_t key) {
    int i;
    int n;
    int sa = 0x28;
    int sb = 0x28;

    if (*(int32_t *)(func_ov000_02163350() + 0x50) == 0) {
        return 0;
    }
    i = 0;
    if (*(int32_t *)(func_ov000_02163350() + 0x50) > 0) {
        do {
            if (key == func_ov000_02163350()[i * 0x28 + 0x6a]) {
                break;
            }
            i++;
        } while (i < *(int32_t *)(func_ov000_02163350() + 0x50));
    }
    if (i == *(int32_t *)(func_ov000_02163350() + 0x50)) {
        return 0;
    }
    n = *(int32_t *)(func_ov000_02163350() + 0x50) - 1;
    if (i < n) {
        do {
            uint8_t *b1;
            uint8_t *b2;
            Block *d;
            Block *s;
            b1 = func_ov000_02163350();
            b2 = func_ov000_02163350();
            d = (Block *)(b1 + i * sa + 0x54);
            s = (Block *)(b2 + (i + 1) * sb + 0x54);
            *d = *s;
            i++;
            n = *(int32_t *)(func_ov000_02163350() + 0x50) - 1;
        } while (i < n);
    }
    *(int32_t *)(func_ov000_02163350() + 0x50) = *(int32_t *)(func_ov000_02163350() + 0x50) - 1;
    return 1;
}
