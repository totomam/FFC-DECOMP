#include "ffc/types.h"

extern uint8_t *data_ov006_021bc784;
extern void func_02084ca4(const void *src, void *dst, uint32_t n);
extern int func_02093b18(const char *s);

int func_ov006_021aaa1c(int a) {
    uint8_t *p = data_ov006_021bc784;
    uint32_t idx = p[0x14];
    uint8_t *base = p + 8;
    uint32_t off = idx * 3;
    uint8_t c = base[off];
    if (c != 0 && c != 0x20) {
        return 1;
    }
    uint8_t buf[4];
    uint8_t *s = buf;
    func_02084ca4(base + off, s, 3);
    s[3] = 0;
    for (int i = 0; i < 3; i++) {
        if (s[i] != 0) {
            break;
        }
        s[i] = 0x20;
    }
    if (func_02093b18((const char *)buf) >= a) {
        return 1;
    }
    return 0;
}
