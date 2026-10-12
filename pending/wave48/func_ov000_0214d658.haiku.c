#include "ffc/types.h"

extern int32_t func_ov000_0214ecc8(void *p, uint16_t a, uint32_t b);
extern int32_t func_ov000_0214d75c(void *p);
extern uint32_t data_ov000_0216bcb0;
extern uint32_t data_ov000_0216bc70;
extern uint32_t data_ov000_02169a3c;

typedef struct {
    uint8_t pad0[0xa8];
    uint32_t ptr_a8;
    uint16_t flags_ac;
    int8_t b_ae;
    int8_t b_af;
    uint16_t f_b2;
    uint32_t f_b4;
} Obj;

int32_t func_ov000_0214d658(Obj *p, uint16_t a1, uint32_t a2)
{
    int32_t r;
    int32_t c;

    if (func_ov000_0214ecc8(p, a1, a2) != 0 || (p->flags_ac & 8)) {
        return -28;
    }
    if (p == 0 || !(p->flags_ac & 1)) {
        return -39;
    }
    if (p->b_af == 0 || p->b_af == 4) {
        if ((a2 & 0xf0000000u) == 0xe0000000u) {
            return -28;
        }
        if (((data_ov000_0216bcb0 ^ a2) & data_ov000_0216bc70) != 0) {
            c = (a2 == 0xffffffffu);
        } else {
            c = ((a2 & ~data_ov000_0216bc70) == ~data_ov000_0216bc70);
        }
        if (c) {
            return -28;
        }
        if (p->flags_ac & 4) {
            if (p->b_ae == 1) {
                return -30;
            }
            return 0;
        }
        if (p->flags_ac & 2) {
            if (p->flags_ac & 0x40) {
                return p->ptr_a8;
            }
            return data_ov000_02169a3c;
        }
        p->f_b2 = a1;
        p->f_b4 = a2;
        r = func_ov000_0214d75c(p);
        if (p->b_ae == 1) {
            return r;
        }
        if (r < 0) {
            return r;
        }
        return -26;
    } else {
        p->f_b2 = a1;
        p->f_b4 = a2;
        return 0;
    }
}
