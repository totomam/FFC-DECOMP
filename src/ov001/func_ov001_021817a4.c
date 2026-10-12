#include "ffc/types.h"

extern int func_ov001_02181620(void *p, int mode, uint8_t *buf, int *out);
extern void func_ov001_0217fe28(void *dst, void *src, int n);
extern int func_ov001_021816dc(void *p);

int func_ov001_021817a4(void *p, void *a, void *b) {
    int flag;
    uint8_t *base = (uint8_t *)p;
    uint8_t *sub = *(uint8_t **)(base + 8);
    uint8_t *buf = *(uint8_t **)(sub + 0x44);

    if (func_ov001_02181620(p, 2, buf + 0x47, &flag) == 0) {
        return 0;
    }
    if (flag != 0) {
        return 1;
    }
    func_ov001_0217fe28(base + 0x50, a, 0x20);
    func_ov001_0217fe28(base + 0x50, b, 0x20);
    if (func_ov001_021816dc(p) == 0) {
        return 0;
    }
    *(uint32_t *)(base + 0x8c) = *(uint32_t *)(base + 0x88);
    return 1;
}
