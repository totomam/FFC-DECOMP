#include "ffc/types.h"

extern uint8_t *func_ov006_021afd28(uint32_t idx, uint32_t b);
extern void func_ov006_021abfa8(uint8_t *p, uint32_t b);
extern void func_02084b2c(void *p, int c, uint32_t n);
extern void func_020903cc(void *o, uint32_t a, int32_t b);
extern void func_ov006_021ac078(uint8_t *p, uint32_t b);

typedef struct {
    uint8_t lo : 2;
    uint8_t hi : 6;
} Flags;

void func_ov006_021abcc0(uint32_t idx, uint32_t b)
{
    uint8_t *o = func_ov006_021afd28(idx, b);

    switch (idx) {
    case 0:
        func_ov006_021abfa8(o + 0x40, b);
        break;
    case 1: {
        int32_t r5;
        uint8_t buf[0x21];

        switch (((Flags *)(o + 0xe6))->lo) {
        case 0:
            return;
        case 1:
            r5 = 10;
            break;
        case 2:
            r5 = 0x1a;
            break;
        case 3:
            r5 = 0x20;
            break;
        default:
            break;
        }
        if (((Flags *)(o + 0xe6))->hi == 1) {
            r5 = r5 / 2;
        }
        func_02084b2c(buf, 0, 0x21);
        func_020903cc(buf, 0x2a, r5);
        func_ov006_021abfa8(buf, b);
        break;
    }
    case 3:
        if (o[0xf5] == 0) {
            func_ov006_021ac078(o + 0xc0, b);
        }
        break;
    case 4:
        if (o[0xf5] == 0) {
            func_ov006_021ac078(o + 0xf0, b);
        }
        break;
    case 5:
        if (o[0xf5] == 0) {
            func_ov006_021ac078(o + 0xc4, b);
        }
        break;
    case 7:
        if (o[0xf6] == 0) {
            func_ov006_021ac078(o + 0xc8, b);
        }
        break;
    case 8:
        if (o[0xf6] == 0) {
            func_ov006_021ac078(o + 0xcc, b);
        }
        break;
    default:
        break;
    }
}
