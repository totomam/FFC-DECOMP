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

    i = 0;
    init = func_ov000_0216591c();
    idx = i - 1;
    cnt = 0;
    if (!(p[0x118] & 0x80)) {
        func_ov001_02184160(a, i);
        return 1;
    }

    for (; i < 200; i++) {
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

    w = (((((c6 << 16) | c7)) >> 8) & 0xff00) | (((c4 << 16) | c5) >> 24 & 0xff);
    w |= (((c2 << 16) | c3) << 8) & 0xff0000;
    w |= (((c0 << 16) | c1) << 24) & 0xff000000;
    *(uint32_t *)(p + idx * 16 + 0x124) = w;
    *(int *)(p + idx * 16 + 0x128) = init;
    func_ov001_02184160(a, *(uint32_t *)(p + idx * 16 + 0x124));
    return 1;
}
