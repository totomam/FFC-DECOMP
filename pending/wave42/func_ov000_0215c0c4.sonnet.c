#include "ffc/types.h"

extern uint32_t func_02092948(void *v);
extern uint32_t func_ov000_0216181c(void);
extern void func_ov000_021591a8(uint32_t x);
extern uint32_t func_02092864(const uint8_t *text);
extern void *func_ov000_0215917c(uint32_t a, uint32_t b);
extern void func_ov000_0215dbd8(uint32_t a, uint32_t b);
extern void func_02092878(void *dst, const uint8_t *src);
extern void func_ov001_02185478(uint32_t a, void *b);

extern uint8_t data_ov000_0217022c[];
extern uint8_t data_ov000_0217022d[];
extern uint8_t data_ov000_0217022e[];
extern uint8_t data_ov000_02170230[];
extern uint8_t data_ov000_02170234[];

uint32_t func_ov000_0215c0c4(uint32_t a, const uint8_t *p, uint32_t b)
{
    uint32_t c = a;
    uint32_t idx;
    uint32_t off;
    void *v;
    void *m;

    if (p == 0 || b == 0) {
        return 0;
    }

    if (c >= 100) {
        idx = c - 100;
        off = idx * 12;
        if (data_ov000_0217022c[off] != 0) {
            v = *(void **)(data_ov000_02170230 + off);
            if (v != 0 && func_02092948(v) != 0) {
                return 0;
            }
            goto store;
        }
    }
    c = func_ov000_0216181c();
    if (c == 0) {
        return 0;
    }
store:
    idx = c - 100;
    off = idx * 12;
    data_ov000_0217022c[off] = (uint8_t)c;
    data_ov000_0217022d[off] = 1;
    *(uint16_t *)(data_ov000_0217022e + off) = 0;
    if (*(void **)(data_ov000_02170230 + off) != 0) {
        func_ov000_021591a8(4);
    }
    m = func_ov000_0215917c(4, func_02092864(p) + 1);
    *(void **)(data_ov000_02170230 + off) = m;
    if (m == 0) {
        func_ov000_0215dbd8(9, 0xfffec77f);
        return 0;
    }
    func_02092878(m, p);
    *(uint32_t *)(data_ov000_02170234 + off) = b;
    func_ov001_02185478(c, *(void **)(data_ov000_02170230 + off));
    return c;
}
