#include "ffc/types.h"

extern uint32_t data_ov000_0216e294[];
extern uint32_t data_ov000_0216e2a0[];
extern int func_ov000_02156f0c(uint32_t a, int b);
extern int func_ov000_02155b84(void);
extern int func_ov000_02158ba4(uint32_t *a, uint32_t b);
extern void func_ov000_02158bdc(uint32_t *a);
extern void func_ov000_02158b74(uint32_t *a, uint32_t b);

#define ST (*(int32_t *)((uint8_t *)data_ov000_0216e294[1] + 0x1008))

int func_ov000_02155a80(void) {
    uint8_t *base = (uint8_t *)data_ov000_0216e294[1];
    void *(*alloc)(int, uint32_t) = *(void *(**)(int, uint32_t))(base + 0x120c);
    void (*release)(int, void *, int) = *(void (**)(int, void *, int))(base + 0x1210);
    uint32_t arg = *(uint32_t *)(base + 0x1314);
    int32_t k;
    int32_t st;
    void *p;
    uint32_t aligned;

    if (func_ov000_02156f0c(arg, 0) != 1) {
        ST = 0x4e84;
        return 0xe;
    }
    if (func_ov000_02155b84() != 0) {
        return 0xe;
    }
    k = 0x4e84;
    st = ST;
    if (st < k) {
        if (st == k - 0x62) {
            p = alloc(0, 0x101f);
            if (p == 0) {
                ST = k;
                return 2;
            }
            aligned = ((uint32_t)p + 0x1f) & ~0x1fU;
            if (func_ov000_02158ba4(data_ov000_0216e2a0, aligned) == 1) {
                release(0, p, 0);
            } else {
                release(0, p, 0);
                ST = k;
                return 0xf;
            }
        }
        return 0x15;
    }
    if (st == k + 4) {
        func_ov000_02158bdc(data_ov000_0216e2a0);
        ST = k + 4;
        return 0x10;
    }
    if (st == k + 8) {
        p = alloc(0, 0x1000);
        if (p == 0) {
            ST = k + 0x10;
            return 0x11;
        }
        aligned = ((uint32_t)p + 0x1f) & ~0x1fU;
        func_ov000_02158b74(data_ov000_0216e2a0, aligned);
        release(0, p, 0);
        ST = k + 0x10;
        return 0x11;
    }
    return 0x12;
}
