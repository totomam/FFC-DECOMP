#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern uint8_t *func_02092a2c(uint8_t *text, uint32_t character);
extern void func_020928f0(uint8_t *dst, const uint8_t *src, uint32_t len);
extern int32_t func_02093748(uint8_t *p, int32_t c, uint32_t n);
extern void func_ov000_0215db5c(void *ctx, void *arg, const uint8_t *end);
extern uint8_t data_ov000_0216afa8[];
extern uint8_t data_ov000_0216afb0[];
extern uint32_t data_ov000_02170064[];

void func_ov000_0215ba60(void *r0, void **r1) {
    uint8_t buf[12] = {0};
    uint8_t *p;
    uint8_t *q;
    uint32_t n;
    uint32_t len;
    uint8_t *g;

    p = (uint8_t *)r1[2];
    len = func_02092864(data_ov000_0216afa8);
    if (func_02090410(p, data_ov000_0216afa8, len) != 0) {
        return;
    }
    p += func_02092864(data_ov000_0216afa8);
    q = func_02092a2c(p, 0x76);
    n = (uint32_t)(q - p);
    func_020928f0(buf, p, n);
    if (n > 10) {
        return;
    }
    if (func_02093748(buf, 0, 10) != 0x5a) {
        return;
    }
    p += n + 1;
    len = func_02092864(data_ov000_0216afb0);
    if (func_02090410(p, data_ov000_0216afb0, len) != 0) {
        return;
    }
    g = (uint8_t *)data_ov000_02170064[1];
    if (*(int32_t *)(g + 0x24) == 4) {
    } else if (*(int32_t *)(g + 0x24) == 5) {
        if (g[0x364] == 2) {
        } else if (*(volatile uint8_t *)(g + 0x364) == 3) {
        } else {
            return;
        }
    } else {
        return;
    }
    len = func_02092864(data_ov000_0216afb0);
    func_ov000_0215db5c(r0, r1[0], p + len);
}
