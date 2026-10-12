#include "ffc/types.h"

extern uint8_t *data_ov000_02170004;
extern int32_t data_02144c00;
extern uint8_t data_ov000_0216a080[];
extern uint8_t data_ov000_0216a088[];
extern uint8_t data_ov000_0216a094[];
extern uint8_t data_ov000_0216a0a0[];
extern uint8_t data_ov000_0216a0a8[];
extern uint8_t data_ov000_0216a0b8[];

extern int32_t func_ov000_02156f0c(void *p, int32_t z);
extern void func_ov000_02159014(int32_t code, int32_t err);
extern int32_t func_ov000_021570d4(void *p, void *q);
extern void func_ov000_02164af4(void);
extern int32_t func_02093b18();
extern int32_t func_ov000_0215710c(void *p, void *q, void *out, int32_t n);

int32_t func_ov000_0215842c(void)
{
    int32_t ret = 0;
    uint8_t *p = data_ov000_02170004 + 8;
    uint8_t buf[4];
    int32_t r2;

    if (func_ov000_02156f0c(p, ret) == 0) {
        func_ov000_02159014(0xf, 0xffff9df3);
        return ret;
    }
    if (func_ov000_021570d4(p, data_ov000_0216a080) != 0) {
        func_ov000_02164af4();
    }
    if (func_ov000_021570d4(p, data_ov000_0216a088) == 0) {
        func_ov000_02159014(0xf, 0xffff9df3);
        return 0;
    }
    r2 = func_02093b18();
    if (data_02144c00 == 0x22) {
        func_ov000_02159014(0xf, 0xffff9df3);
        return 0;
    }
    if (r2 != 200) {
        func_ov000_02159014(0xf, 0xffff9e58 - r2);
        return 0;
    }
    if (func_ov000_0215710c(p, data_ov000_0216a094, buf, 4) <= 0) {
        func_ov000_02159014(0xf, 0xffff9df3);
        return 0;
    }
    r2 = func_02093b18(buf);
    if (data_02144c00 == 0x22) {
        func_ov000_02159014(0xf, 0xffff9df3);
        return 0;
    }
    if (r2 >= 100) {
        func_ov000_02159014(0xf, 0xffffa240 - r2);
        return 0;
    }
    int32_t n = 0x40;
    if (func_ov000_0215710c(p, data_ov000_0216a0a0,
            *(uint8_t **)(data_ov000_02170004 + 0x1c58) + 4, n) < 0
        || func_ov000_0215710c(p, data_ov000_0216a0a8,
            *(uint8_t **)(data_ov000_02170004 + 0x1c58) + 0x45, n += 0xec) < 0
        || func_ov000_0215710c(p, data_ov000_0216a0b8, buf, n = 1) < 0) {
        func_ov000_02159014(0xf, 0xffff9df3);
        return 0;
    }
    if ((int8_t)buf[0] != 0x59) {
        n = 0;
    }
    *(int32_t *)(*(uint8_t **)(data_ov000_02170004 + 0x1c58)) = n;
    return 1;
}
