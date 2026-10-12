#include "ffc/types.h"

extern void func_02088f30(void);
extern uint32_t func_ov000_02159028(const void *a, uint32_t b, void (*c)(void), void (*d)(void));
extern void func_020928f0(void *dst, const void *src, uint32_t n);
extern void func_02071c50(void);
extern void func_02071cc0(void);

extern uint8_t data_020b2550[];
extern uint8_t data_0213e1bc[];

typedef struct {
    uint8_t p0;
    uint8_t p1;
    uint16_t p2;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
    uint32_t w10;
    uint32_t w14;
} G;

extern G data_0213e188;

void func_02071d1c(uint32_t a, const void *b, uint32_t c) {
    const void *r5 = b;
    uint32_t r4 = c;

    data_0213e188.w10 = a;
    if (r5 == 0) {
        r5 = data_020b2550;
    }
    if (r4 == 0) {
        r4 = 0x4e54524a;
    }
    if (a == 0) {
        func_02088f30();
    } else {
        data_0213e188.w4 = func_ov000_02159028(r5, r4, func_02071c50, func_02071cc0);
    }
    data_0213e188.p1 = 1;
    func_020928f0(data_0213e1bc, r5, 0x10);
    data_0213e188.w14 = r4;
}
