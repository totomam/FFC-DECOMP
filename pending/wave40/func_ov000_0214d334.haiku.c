#include "ffc/types.h"

extern uint32_t data_ov000_02169a34;
extern uint32_t data_ov000_0216e078[];
extern void *func_ov000_0214d40c(void);
extern int32_t func_ov000_0214d1d8(void *fn, void *p, int32_t x);
extern void func_ov000_0214d2c4(void *p, int32_t v);
extern int32_t func_ov000_0214d3b0(void);

void *func_ov000_0214d334(void)
{
    void *r5;
    int32_t r1;

    if (data_ov000_02169a34 == 0) {
        return (void *)-39;
    }
    r5 = func_ov000_0214d40c();
    if (r5 == 0) {
        return (void *)-49;
    }
    r1 = func_ov000_0214d1d8((void *)func_ov000_0214d3b0, r5, 1);
    func_ov000_0214d2c4(r5, r1);
    r1 = 0;
    if (r5 != 0 && (*(int16_t *)((uint8_t *)r5 + 0xac) & 1)) {
        r1 = 1;
    }
    if (r1) {
        int8_t t = *(int8_t *)((uint8_t *)r5 + 0xaf);
        r1 = 1;
        if (t != 0 && t != 4) {
            r1 = 0;
        }
        if (r1) {
            data_ov000_0216e078[0]++;
        } else {
            data_ov000_0216e078[1]++;
        }
    }
    return r5;
}
