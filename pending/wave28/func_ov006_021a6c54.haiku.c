#include "ffc/types.h"

extern void func_ov006_021a6cac(void);
extern void func_ov006_021a3e78(uint32_t);
extern void func_ov006_021a3aa0(uint32_t, uint32_t, uint32_t);
extern void func_ov006_021b0cdc(uint32_t);
extern void func_ov006_021a3d68(uint16_t, uint16_t, uint16_t, uint16_t);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021a6d44(void);
extern uint8_t data_ov006_021bc73c;
extern uint8_t data_ov006_021b84dc[];
extern uint8_t data_ov006_021b84da[];
extern uint8_t data_ov006_021b84de[];
extern uint8_t data_ov006_021b84d8[];

void func_ov006_021a6d44(void);

void func_ov006_021a6c54(void)
{
    uint32_t off;

    func_ov006_021a6cac();
    func_ov006_021a3e78(0);
    func_ov006_021a3aa0(0x2e, (uint32_t)-1, 0);
    func_ov006_021b0cdc(4);
    off = data_ov006_021bc73c << 3;
    {
        uint16_t b = *(uint16_t *)(data_ov006_021b84dc + off);
        uint16_t a = *(uint16_t *)(data_ov006_021b84d8 + off);
        uint16_t c = *(uint16_t *)(data_ov006_021b84da + off);
        uint16_t d = *(uint16_t *)(data_ov006_021b84de + off);
        func_ov006_021a3d68(a, b, c, d);
    }
    func_ov006_021a64c8(func_ov006_021a6d44);
}
