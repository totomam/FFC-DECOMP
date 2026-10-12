#include "ffc/types.h"

typedef struct Sub {
    uint8_t pad[0x40];
    int32_t state;
    int32_t mode;
} Sub;

typedef struct G {
    void (*cb)(uint32_t, void *);
    Sub *sub;
} G;

extern void func_ov006_021b20f0(uint32_t x);
extern void func_ov006_021b2b74(void);
extern int32_t func_ov006_021b256c(void);
extern int32_t func_ov006_021b25a4(void);
extern int32_t func_ov006_021b24b8(void);
extern int32_t func_ov006_021b24dc(void);
extern G data_ov006_021bc800;
extern uint8_t data_ov006_021b9fdc[];
extern uint8_t data_ov006_021ba000[];

void func_ov006_021b2b88(void)
{
    if (data_ov006_021bc800.sub->state == 1) {
        if (data_ov006_021bc800.cb != 0) {
            data_ov006_021bc800.cb(0x08000000, data_ov006_021b9fdc);
        }
        return;
    }
    if (data_ov006_021bc800.cb != 0) {
        data_ov006_021bc800.cb(0x08000000, data_ov006_021ba000);
    }
    {
        int32_t st = data_ov006_021bc800.sub->state;
        if (st != 6 && st != 5 && st != 4) {
            func_ov006_021b20f0(3);
            func_ov006_021b2b74();
            return;
        }
    }
    func_ov006_021b20f0(3);
    switch (data_ov006_021bc800.sub->mode) {
    case 0:
        if (func_ov006_021b256c() == 0) {
            func_ov006_021b2b74();
        }
        break;
    case 1:
        if (func_ov006_021b25a4() == 0) {
            func_ov006_021b2b74();
        }
        break;
    case 2:
        if (func_ov006_021b24b8() == 0) {
            func_ov006_021b2b74();
        }
        break;
    case 3:
        if (func_ov006_021b24dc() == 0) {
            func_ov006_021b2b74();
        }
        break;
    default:
        break;
    }
}
