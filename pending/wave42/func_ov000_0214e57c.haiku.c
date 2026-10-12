#include "ffc/types.h"

extern void func_02086fbc(void *p);
extern void func_ov000_0214795c(void);
extern void func_ov000_02147984(void);
extern void func_ov000_02147844(void);
extern void func_ov000_021477a4(void);
extern void func_ov000_0214d224(uint32_t a, uint32_t b);
extern uint32_t func_02088978(void);
extern void func_ov000_0214ec50(void *p);
extern void func_ov000_0214ec40(void *p);
extern void func_0208898c(uint32_t x);

int func_ov000_0214e57c(uint8_t *p0)
{
    uint8_t *r4 = *(uint8_t **)(p0 + 4);
    int32_t r1 = 1;
    int32_t st = *(int8_t *)(r4 + 0xaf);
    uint32_t v;
    uint32_t r5;

    if (st == 0) {
    } else if (st == 4) {
    } else {
        r1 = 0;
    }

    if (r1 != 0) {
        func_02086fbc((uint8_t *)(*(uint32_t *)(r4 + 0xa4)) + 0x20);
        func_ov000_0214795c();
        func_ov000_02147984();
        func_ov000_02147844();
    }
    func_ov000_021477a4();

    v = *(int16_t *)(r4 + 0xac);
    v &= ~6u;
    *(int16_t *)(r4 + 0xac) = (int16_t)v;

    if (*(int8_t *)(r4 + 0xaf) == 2) {
        func_ov000_0214d224(*(uint32_t *)(r4 + 0xa4), 0);
    } else {
        func_ov000_0214d224(*(uint32_t *)(r4 + 0xa0), 0);
    }
    r5 = func_02088978();
    func_ov000_0214ec50(r4);
    func_ov000_0214ec40(r4);
    func_0208898c(r5);

    v = *(int16_t *)(r4 + 0xac);
    v |= 0x20;
    *(int16_t *)(r4 + 0xac) = (int16_t)v;
    return 0;
}
