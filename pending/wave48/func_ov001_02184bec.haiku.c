#include "ffc/types.h"

extern int func_ov000_0216591c(void);
extern void func_ov001_02184160(void *a, uint32_t v);
extern uint32_t func_02091c0c(void);

int func_ov001_02184bec(uint8_t *p, void *a, uint8_t *b) {
    int init;
    int idx;
    int cnt;
    int i;
    uint32_t c0, c1, c2, c3, c4, c5, c6, c7;
    uint32_t w, x1, x2, x3, x4;

    init = func_ov000_0216591c();
    if (!(p[0x118] & 0x80)) {
        func_ov001_02184160(a, 0);
        return 1;
    }

    idx = init;
    cnt = 0;
    for (i = 0; i < 200; i++) {
        if (idx == -1 && *(uint32_t *)(p + i * 16 + 0x120) == 0) {
            idx = i;
        }
        if (*(uint32_t *)(p + i * 16 + 0x120) == *(uint32_t *)(b + 4) &&
            *(uint16_t *)(p + i * 16 + 0x11e) == *(uint16_t *)(b + 2)) {
            cnt++;
        }
    }

    if (cnt > 5) {
        return 0;
    }
    if (idx == -1) {
        return 0;
    }

    *(uint32_t *)(p + idx * 16 + 0x11c) = *(uint32_t *)(b + 0);
    *(uint32_t *)(p + idx * 16 + 0x120) = *(uint32_t *)(b + 4);

    c0 = func_02091c0c();
    c1 = func_02091c0c();
    c2 = func_02091c0c();
    c3 = func_02091c0c();
    c4 = func_02091c0c();
    c5 = func_02091c0c();
    c6 = func_02091c0c();
    c7 = func_02091c0c();

    x1 = ((c0 << 16) | c1) << 24;
    x1 &= 0xff000000;
    x2 = ((c2 << 16) | c3) << 8;
    x2 &= 0xff0000;
    x3 = (((c4 << 16) | c5) >> 24) & 0xff;
    x4 = ((((c6 << 16) | c7)) >> 8) & 0xff00;
    w = x3 | x4;
    w |= x2;
    w |= x1;

    *(uint32_t *)(p + idx * 16 + 0x124) = w;
    *(int *)(p + idx * 16 + 0x128) = init;
    func_ov001_02184160(a, w);
    return 1;
}
