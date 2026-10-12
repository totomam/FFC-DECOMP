#include "ffc/types.h"

extern void *func_ov006_021b49e4(uint32_t size, uint32_t align);
extern uint32_t func_ov006_021a6614(uint32_t v, uint32_t idx);
extern uint8_t func_ov006_021a6564(void);
extern void func_ov006_021b2c74(void *p, void *blk);
extern int func_ov006_021b2e24(void);
extern void func_02088f30(void);
extern uint32_t func_ov006_021b570c(uint32_t a, void *fn, uint32_t b, uint32_t c);
extern void func_ov006_021a6760(void);

extern uint8_t *data_ov006_021bc730;
extern uint32_t data_ov006_021b911c[7];
extern uint32_t data_ov006_021bc738;

typedef struct {
    uint32_t w[7];
} Blk;

void func_ov006_021a6640(uint32_t param)
{
    Blk loc;

    data_ov006_021bc730 = (uint8_t *)func_ov006_021b49e4(0x1e2a4, 0x20);
    *(uint32_t *)(data_ov006_021bc730 + 0x1e298) = param;
    data_ov006_021bc730[0x1e2a0] = 0;
    data_ov006_021bc730[0x1e2a1] = 0;

    loc = *(Blk *)data_ov006_021b911c;
    loc.w[1] = func_ov006_021a6614(data_ov006_021bc738, 0);
    loc.w[2] = func_ov006_021a6614(data_ov006_021bc738, 1);
    ((uint8_t *)&loc)[0x18] = func_ov006_021a6564();

    func_ov006_021b2c74(data_ov006_021bc730, &loc);
    if (func_ov006_021b2e24() == 0) {
        func_02088f30();
    }
    *(uint32_t *)(data_ov006_021bc730 + 0x1e29c) =
        func_ov006_021b570c(0, (void *)func_ov006_021a6760, 0, 0x78);
}
