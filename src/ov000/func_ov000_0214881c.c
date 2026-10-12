#include "ffc/types.h"

extern void func_ov000_02147810(void);
extern void func_ov000_021477b4(void);
extern void func_ov000_021477d0(uint32_t a, uint32_t b, uint32_t c);
extern uint8_t *func_ov000_021482f8(uint8_t *base, uint32_t n);
extern uint8_t *func_ov000_021483e0(uint32_t a, uint32_t b, uint8_t *p, uint32_t off);
extern void func_ov000_02147e28(uint8_t *base, uint32_t len);
extern void func_ov000_02147844(void);
extern volatile uint32_t data_ov000_0216bc60[];
extern uint8_t data_ov000_0216c182[];

void func_ov000_0214881c(void) {
    uint8_t *p;
    uint8_t *end;

    func_ov000_02147810();
    func_ov000_021477b4();
    func_ov000_021477d0(0x44, 0x43, data_ov000_0216bc60[7]);
    p = func_ov000_021482f8(data_ov000_0216c182, 7);
    p[0] = 0x36;
    p[1] = 4;
    p[2] = (uint16_t)(data_ov000_0216bc60[7] >> 16) >> 8;
    p[3] = (uint8_t)(data_ov000_0216bc60[7] >> 16);
    p[4] = (uint16_t)data_ov000_0216bc60[7] >> 8;
    p[5] = (uint8_t)data_ov000_0216bc60[7];
    p[6] = 0xff;
    p += 7;
    end = func_ov000_021483e0(0, 0xff + 0x2d, p, (uint32_t)(p - data_ov000_0216c182));
    func_ov000_02147e28(data_ov000_0216c182, (uint32_t)(end - data_ov000_0216c182));
    func_ov000_02147844();
}
