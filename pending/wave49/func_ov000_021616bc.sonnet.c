#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern uint64_t func_020882cc(void);
extern uint64_t func_0209a6d4(uint64_t a, uint64_t b);
extern uint8_t *func_ov000_02163634(int idx);
extern int func_ov000_021614a0(void *obj, int code);
extern int func_ov000_02160f48(uint32_t x);
extern int func_ov000_02163408(void);
extern void func_ov000_02160d04(int x);

int func_ov000_021616bc(void)
{
    uint8_t *p;
    uint8_t *p6;
    uint64_t v;
    uint32_t state;
    int i, n;

    if (*(uint32_t *)(func_ov000_02163350() + 0x61c) == 7 ||
        *(uint32_t *)(func_ov000_02163350() + 0x61c) == 0x11 ||
        *(uint32_t *)(func_ov000_02163350() + 0x61c) == 0x12) {
        v = func_020882cc();
        p = func_ov000_02163350();
        v = func_0209a6d4((v - *(uint64_t *)(p + 0x660)) << 6, 0x82eaULL);
    } else {
        return 1;
    }

    state = *(uint32_t *)(func_ov000_02163350() + 0x61c);
    if (state == 7) goto L70;
    if (state == 0x11) goto L90;
    if (state == 0x12) goto L13a;
    goto L150;

L70:
    if (v <= 0x1770ULL) goto L150;
    if (func_ov000_021614a0(*(void **)func_ov000_02163634(0), 0xe) != 0) goto L150;
    return 0;

L90:
    if (v <= 0x1770ULL) goto L150;
    p = func_ov000_02163350();
    p[0x62d]++;
    p = func_ov000_02163350();
    if (p[0x62d] > 5) goto L0ba;
    n = func_ov000_02163408();
    if (n <= 1) goto L150;
    i = 1;
    do {
        p6 = func_ov000_02163634(i);
        p = func_ov000_02163350();
        if ((*(uint32_t *)(p + 0x654) & ((uint32_t)i << p6[0x16])) == 0) {
            if (func_ov000_021614a0(*(void **)p6, 0xd) == 0) return 0;
        }
        i++;
    } while (i < func_ov000_02163408());
    goto L150;

L0ba:
    p = func_ov000_02163350();
    if (func_ov000_02160f48(*(uint32_t *)(p + 0x654)) == 0) return 0;
    if (func_ov000_02163408() > 1) {
        p = func_ov000_02163350();
        p[0x62d] = 0;
        v = func_020882cc();
        p = func_ov000_02163350();
        *(uint64_t *)(p + 0x660) = v;
        goto L150;
    }
    goto L14a;

L13a:
    p = func_ov000_02163350();
    if ((uint64_t)*(uint16_t *)(p + 0x632) < v) goto L14a;
    goto L150;

L14a:
    func_ov000_02160d04(2);
L150:
    return 1;
}
