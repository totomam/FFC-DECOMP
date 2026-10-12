#include "ffc/types.h"

extern uint8_t *data_ov006_021bc808;
extern void func_ov006_021b18f4(uint8_t *p);
extern void func_ov006_021b34a8(void);
extern void func_020882cc(void);
extern void func_ov000_02158738(uint8_t *p);
extern uint32_t func_ov006_021b0378(void);

typedef struct {
    uint32_t w[6];
    uint8_t c;
} Params;

void func_ov006_021b2c74(uint8_t *p, Params *q)
{
    data_ov006_021bc808 = p;
    func_ov006_021b18f4(p + 0xb00);
    *(uint16_t *)(data_ov006_021bc808 + 0x648) = 0;
    *(uint16_t *)(data_ov006_021bc808 + 0x64a) = 0;
    data_ov006_021bc808[0xa90] = 1;
    data_ov006_021bc808[0xa91] = 1;
    *(uint32_t *)(data_ov006_021bc808 + 0xa9c) = 0;
    func_ov006_021b34a8();
    *(uint32_t *)(data_ov006_021bc808 + 0xab4) = q->w[0];
    *(uint32_t *)(data_ov006_021bc808 + 0xab8) = q->w[1];
    *(uint32_t *)(data_ov006_021bc808 + 0xabc) = q->w[2];
    *(uint32_t *)(data_ov006_021bc808 + 0xac0) = q->w[3];
    *(uint32_t *)(data_ov006_021bc808 + 0xac4) = q->w[4];
    *(uint32_t *)(data_ov006_021bc808 + 0xac8) = q->w[5];
    data_ov006_021bc808[0xa92] = q->c;
    data_ov006_021bc808[0xacc] = 2;
    func_020882cc();
    func_ov000_02158738(data_ov006_021bc808 + 0x64c);
    func_020882cc();
    *(uint32_t *)(data_ov006_021bc808 + 0xaa4) = func_ov006_021b0378();
}
