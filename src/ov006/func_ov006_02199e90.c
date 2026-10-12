#include "ffc/types.h"

extern void func_02084b2c(void *dst, int c, uint32_t n);
extern uint32_t func_ov006_0219cd40(void *cmd, uint8_t *base);
extern void func_02084ca4(void *dst, void *src, uint32_t n);
extern int func_ov006_0219adec(int code, uint32_t mask, uint8_t *base);
extern uint8_t *data_ov006_021ba160;
extern uint8_t data_ov006_021b8ae0;

uint32_t func_ov006_02199e90(void)
{
    struct {
        uint8_t t;
        uint8_t pad;
        int16_t v;
        uint16_t pad2;
        uint8_t buf[16];
    } s;
    int found = -1;
    uint32_t mask = 0;
    uint16_t i;
    uint8_t idx;
    uint8_t j;
    uint32_t r;
    uint8_t *buf;
    uint8_t *base;

    buf = s.buf;
    func_02084b2c(buf, 0, 16);


    base = data_ov006_021ba160;
    for (i = 1; i <= 15; i++) {
        if (*(int32_t *)(base + 0x14E4 + 4 * i) == 5) {
            buf[(int8_t)base[0x1525 + i]]++;
        }
    }

    idx = data_ov006_021b8ae0;
    j = 0;
    buf = s.buf;
    for (; j < 16; j++) {
        idx = (idx + 1) % 16;
        if (base[idx * 0x5d4 + 0x1d52] != 0 && buf[idx] != 0) {
            found = (int8_t)idx;
            break;
        }
    }

    if (found == -1) {
        return 0x15;
    }

    data_ov006_021b8ae0 = (uint8_t)found;

    for (i = 1; i <= 15; i++) {
        if (*(int32_t *)(base + 0x14E4 + 4 * i) == 5 && (int8_t)base[0x1525 + i] == found) {
            mask |= (uint16_t)(1 << i);
        }
    }

    s.t = 3;
    s.v = found;
    r = func_ov006_0219cd40(&s, base);
    if (r != 0) {
        func_02084ca4(data_ov006_021ba160 + 0x1788 + 0x5d4 * found, (void *)r, 0xE4);
    }

    return func_ov006_0219adec(0xEA, mask, data_ov006_021ba160);
}
