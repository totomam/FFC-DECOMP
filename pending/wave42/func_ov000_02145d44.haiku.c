#include "ffc/types.h"

extern int32_t func_ov000_021456e4(uint8_t *p, uint32_t n, uint32_t c, uint32_t d);
extern void func_ov000_02145ca4(uint8_t *p, uint32_t q, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint32_t func_ov000_021457a4(uint32_t e);
extern void func_02084e04(uint8_t *dst, uint8_t *src, uint32_t n);
extern uint32_t func_02088978(void);
extern void func_ov000_0214586c(uint8_t *a, uint8_t *b, uint8_t *c, uint32_t d, uint32_t e, uint32_t f);
extern void func_0208898c(uint32_t p);
extern uint8_t data_ov000_0216bc60[];
extern uint8_t data_ov000_021697e8[];
extern uint8_t data_ov000_0216bcc8[];

void func_ov000_02145d44(uint8_t *p, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f)
{
    uint32_t lb = 0x7f000001;
    uint32_t y;
    int32_t x;
    uint32_t sum = b + 0x14 + d;

    *(uint16_t *)(p - 0x12) = (uint16_t)(((uint16_t)sum >> 8) | ((uint16_t)sum << 8));
    *(uint16_t *)(p - 0xe) = (uint16_t)(((uint16_t)f >> 8) | ((uint16_t)f << 8));
    *(uint16_t *)(p - 0xa) = 0;
    x = func_ov000_021456e4(p - 0x14, 0x14, c, d);
    *(uint16_t *)(p - 0xa) = (uint16_t)((x >> 8) | (x << 8));

    if (e != lb && e != *(uint32_t *)(data_ov000_0216bc60 + 0x50)) {
        func_ov000_02145ca4(p - 0x14, b + 0x14, c, d, e, lb << 11);
    }

    if (e == lb || e == *(uint32_t *)(data_ov000_0216bc60 + 0x50) || func_ov000_021457a4(e) != 0) {
        func_02084e04(data_ov000_021697e8, p - 0x1c, 8);
        y = func_02088978();
        func_ov000_0214586c(data_ov000_0216bcc8, data_ov000_0216bcc8, p - 0x1c, b + 0x1c, c, d);
        func_0208898c(y);
    }
}
