#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_ov000_02156b84(void *a, const uint8_t *b, const uint8_t *c, uint32_t d);
extern uint32_t func_ov000_02156050(uint8_t *a, const uint8_t *b);
extern uint32_t func_ov000_02156210(void *a, uint8_t *b, uint32_t c);
extern uint32_t func_02093bb4(const uint16_t *text);
extern uint32_t data_ov000_0216e294[];
extern uint8_t data_ov000_02169bf4[];
extern uint8_t data_ov000_02169c00[];
extern uint8_t data_ov000_02169c08[];
extern uint8_t data_ov000_02169c10[];
extern uint8_t data_ov000_0216e2a0[];
extern uint32_t data_ov000_0216ff80;
extern uint8_t data_ov000_02169c18[];
extern uint8_t data_ov000_02169c1c[];
extern uint8_t data_ov000_02169c24[];

uint32_t func_ov000_02155d1c(void *a, uint8_t *b, const uint16_t *c)
{
    uint8_t buf[0x94];
    uint8_t *p;
    uint8_t *q;

    if ((data_ov000_0216e294[3] | data_ov000_0216e294[4]) == 0) {
        p = data_ov000_02169bf4;
        if (func_ov000_02156b84(a, data_ov000_02169c00, p, func_02092864(p)) != 0) {
            return 8;
        }
    } else {
        q = data_ov000_02169c08;
        if (func_ov000_02156b84(a, data_ov000_02169c00, q, func_02092864(q)) != 0) {
            return 8;
        }
        p = data_ov000_02169bf4;
        if (func_ov000_02156b84(a, data_ov000_02169c10, p, func_02092864(p)) != 0) {
            return 8;
        }
    }

    if (func_ov000_02156050(buf, data_ov000_0216e2a0) == 0) {
        return 5;
    }
    if (func_ov000_02156210(a, buf, data_ov000_0216ff80) == 0) {
        return 8;
    }

    if (data_ov000_0216e294[0] == 1) {
        if (func_ov000_02156b84(a, data_ov000_02169c1c, data_ov000_02169c18,
                                func_02092864(data_ov000_02169c18)) != 0) {
            return 8;
        }
    }

    if (func_02093bb4(c) != 0) {
        if (func_ov000_02156b84(a, data_ov000_02169c24, (const uint8_t *)c,
                                func_02093bb4(c) << 1) != 0) {
            return 8;
        }
    }

    return 0;
}
