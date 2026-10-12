#include "ffc/types.h"

struct Obj {
    int32_t f0;
    uint16_t f4;
    uint16_t f6;
    uint8_t pad8[8];
    uint8_t b10;
    uint8_t b11;
    uint8_t pad12[2];
    int32_t state;
    uint8_t pad18[0x40];
    int32_t w58;
    uint16_t h5c;
};

struct Holder {
    int32_t f0;
    struct Obj *p;
};

extern struct Holder data_ov000_0216e280;
extern int32_t func_ov000_02153a0c(void);
extern void func_ov000_02153c04(void);
extern void func_ov000_02152f20(uint8_t *a, uint8_t *b, int32_t c, uint32_t d, uint8_t *e, int32_t f);
extern void func_ov000_021529ac(void);
extern int32_t func_ov000_02152730(void);
extern int32_t func_ov000_0214f964(void);

void func_ov000_02152f94(void) {
    struct Obj *p = data_ov000_0216e280.p;
    if (p == 0) {
        return;
    }
    switch (p->state) {
    case 1:
        p->f0 = 0;
        data_ov000_0216e280.p->state = func_ov000_02153a0c();
        return;
    case 2:
        func_ov000_02153c04();
        p = data_ov000_0216e280.p;
        func_ov000_02152f20((uint8_t *)p + 0x18, (uint8_t *)p + 0x38, p->w58, p->h5c, (uint8_t *)p + 0x5e, 8);
        func_ov000_021529ac();
        data_ov000_0216e280.p->state = 0;
        return;
    case 3:
        func_ov000_02153c04();
        p = data_ov000_0216e280.p;
        p->f0 = -1;
        data_ov000_0216e280.p->b11 = 1;
        return;
    case 4:
    case 5:
        return;
    default:
        break;
    }
    if (p->f4 == 2) {
        int32_t r = func_ov000_02152730();
        data_ov000_0216e280.p->f0 = r;
        return;
    }
    if (p->f4 == 4) {
        if (p->f6 != 0) {
            if (func_ov000_0214f964() != 9) {
                data_ov000_0216e280.p->f6 = 0;
                data_ov000_0216e280.p->f4 = 6;
            }
        }
    }
}
