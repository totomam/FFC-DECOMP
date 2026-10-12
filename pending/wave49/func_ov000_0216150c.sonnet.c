#include "ffc/types.h"

extern int32_t func_ov000_0215b594(void);
extern uint8_t *func_ov000_02163350(void);
extern void func_ov000_0216335c(int32_t x);
extern void func_ov000_02163758(void);
extern int32_t func_ov000_021614a0(void *a, int32_t b);
extern uint64_t func_020882cc(void);
extern uint64_t func_0209a6d4(uint64_t v, uint32_t a, uint32_t b);
extern uint32_t func_ov000_02161948(void *a, int32_t b);
extern int32_t func_ov000_0216195c(int32_t a);
extern int32_t func_ov000_02163408(void);
extern void *func_ov000_02163634(int32_t i);
extern void func_ov000_02160d04(int32_t x);

int32_t func_ov000_0216150c(void *a, int32_t state, int32_t val)
{
    uint8_t *g;
    int32_t off;
    int32_t i;
    int32_t n;
    uint32_t idx;

    if (func_ov000_0215b594() != 5) {
        return 1;
    }

    if (state == 0xd) {
        goto L0024;
    }
    if (state == 0xe) {
        goto L006e;
    }
    if (state == 0xf) {
        goto L018a;
    }
    goto L019c;

L0024:
    g = func_ov000_02163350();
    off = 0x61c;
    if (*(int32_t *)(g + off) != 7) {
        func_ov000_0216335c(7);
        g = func_ov000_02163350();
        *(int32_t *)(g + off + 0x64) = val;
        g = func_ov000_02163350();
        if (*(int32_t *)(g + off - 0xa0) != 0) {
            g = func_ov000_02163350();
            *(int32_t *)(g + off - 0xa0) = 0;
        }
        func_ov000_02163758();
    }
    if (func_ov000_021614a0(a, 0xe) != 0) {
        goto L019c;
    }
    return 0;

L006e:
    g = func_ov000_02163350();
    off = 0x61c;
    if (*(int32_t *)(g + off) != 0x11) {
        if (func_ov000_021614a0(a, 0xf) != 0) {
            return 1;
        }
        return 0;
    }
    {
        uint64_t t = func_020882cc();
        uint64_t d = t - *(uint64_t *)(func_ov000_02163350() + off + 0x44);
        uint64_t r = func_0209a6d4(d << 6, 0x82ea, 0) >> 1;
        if (r > 300) {
            uint64_t d2 = t - *(uint64_t *)(func_ov000_02163350() + off + 0x44);
            uint64_t r2 = func_0209a6d4(d2 << 6, 0x82ea, 0) >> 1;
            int64_t v = (int64_t)(r2 - 300);
            int64_t h = *(int16_t *)(func_ov000_02163350() + off + 0x16);
            if ((uint64_t)h < (uint64_t)v) {
                *(uint16_t *)(func_ov000_02163350() + off + 0x16) = (uint16_t)v;
            }
        }
    }
    idx = func_ov000_02161948(a, 0);
    if (idx != 0xff) {
        g = func_ov000_02163350();
        *(uint32_t *)(g + 0x654) |= (1u << idx);
    }
    if (func_ov000_0216195c(1) != *(int32_t *)(func_ov000_02163350() + 0x654)) {
        goto L019c;
    }
    n = func_ov000_02163408();
    if (n > 1) {
        for (i = 1; i < n; i++) {
            void *p = func_ov000_02163634(i);
            if (func_ov000_021614a0(*(void **)p, 0xf) == 0) {
                return 0;
            }
            n = func_ov000_02163408();
        }
    }
    func_ov000_0216335c(0x12);
    goto L019c;

L017a:
    if (func_ov000_021614a0(a, 0xf) != 0) {
        goto L019c;
    }
    return 0;

L018a:
    g = func_ov000_02163350();
    if (*(int32_t *)(g + 0x61c) == 7) {
        func_ov000_02160d04(2);
    }

L019c:
    return 1;
}
