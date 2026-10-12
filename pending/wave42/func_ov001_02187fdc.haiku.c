#include "ffc/types.h"

extern int32_t func_ov001_021876a8(void *p, uint32_t a, int32_t n, uint32_t *x, uint16_t *y);
extern int32_t func_ov001_02186c70(void *p, uint32_t a, uint16_t b);
extern void *func_ov001_0218636c(void *p, uint32_t a, uint16_t b);
extern int32_t func_ov001_021863e8(void);
extern void *func_ov001_02186d24(void *p, int32_t idx);
extern int32_t func_ov001_021876ec(void *p, void *q, uint32_t a, int32_t n, int32_t zero);
extern void func_ov001_02186c10(void *p, void *q);

typedef void (*func_ov001_cb_t)(void *p, int32_t one, void *q, uint32_t arg);

int32_t func_ov001_02187fdc(void *p, uint32_t a, int32_t n)
{
    uint16_t b;
    uint32_t c;
    void *q;
    int32_t idx;
    func_ov001_cb_t cb;
    uint32_t arg;

    if (n < 5) {
        return 4;
    }
    func_ov001_021876a8(p, a, n, &c, &b);
    idx = func_ov001_02186c70(p, c, b);
    if (idx == -1) {
        q = func_ov001_0218636c(p, c, b);
        if (func_ov001_021863e8() != 0) {
            return 5;
        }
    } else {
        q = func_ov001_02186d24(p, idx);
    }
    if (func_ov001_021876ec(p, q, a, n, 0) < 0) {
        return 4;
    }
    if (idx == -1) {
        func_ov001_02186c10(p, q);
    }
    arg = *(uint32_t *)((uint8_t *)p + 0x494);
    cb = *(func_ov001_cb_t *)((uint8_t *)p + 0x488);
    cb(p, 1, q, arg);
    return 0;
}
