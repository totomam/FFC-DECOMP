#include "ffc/types.h"

extern uint32_t func_02092948(void);
extern uint32_t func_ov000_0216181c(void);
extern void func_ov000_021591a8(uint32_t a);
extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_ov000_0215917c(uint32_t a, uint32_t b);
extern void func_ov000_0215dbd8(uint32_t a, uint32_t b);
extern void func_02092878(const uint8_t *text);
extern void func_ov001_02185478(uint32_t a, uint32_t b);

extern uint8_t data_ov000_0217022c[];
extern uint8_t data_ov000_0217022d[];
extern uint8_t data_ov000_0217022e[];
extern uint8_t data_ov000_02170230[];
extern uint8_t data_ov000_02170234[];

uint32_t func_ov000_0215c000(uint32_t id, const uint8_t *text, uint32_t arg)
{
    uint32_t h = id;
    uint32_t off;
    uint32_t idx;
    uint32_t r;

    if (text == 0 || arg == 0) {
        return 0;
    }
    if (h >= 100) {
        off = (h - 100) * 12;
        if (data_ov000_0217022c[off] != 0) {
            if (*(uint32_t *)(data_ov000_02170230 + off) != 0 && func_02092948() != 0) {
                return 0;
            }
            goto setup;
        }
    }
    h = func_ov000_0216181c();
    if (h == 0) {
        return 0;
    }
setup:
    idx = h - 100;
    off = 12 * idx;
    data_ov000_0217022c[off] = (uint8_t)h;
    data_ov000_0217022d[off] = 0;
    *(uint16_t *)(data_ov000_0217022e + off) = 0;
    if (*(uint32_t *)(data_ov000_02170230 + off) != 0) {
        func_ov000_021591a8(4);
    }
    r = func_ov000_0215917c(4, func_02092864(text) + 1);
    *(uint32_t *)(data_ov000_02170230 + off) = r;
    if (r == 0) {
        func_ov000_0215dbd8(9, 0xfffec77f);
        return 0;
    }
    func_02092878(text);
    *(uint32_t *)(data_ov000_02170234 + off) = arg;
    func_ov001_02185478(h, *(uint32_t *)(data_ov000_02170230 + off));
    return h;
}
