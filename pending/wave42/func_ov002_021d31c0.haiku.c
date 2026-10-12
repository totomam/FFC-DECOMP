#include "ffc/types.h"

extern uint32_t func_ov002_02198688(uint32_t a, uint32_t b);
extern int32_t func_ov002_021a4b18(void);
extern int32_t func_ov002_021a16fc(int32_t x);
extern uint32_t func_ov002_021d313c(uint32_t x);

uint8_t func_ov002_021d31c0(uint8_t *p, int32_t flag) {
    int32_t r4;
    int32_t r6;
    uint8_t count = 0;
    int32_t i;
    uint32_t v;
    uint8_t a;
    uint8_t b;

    r4 = func_ov002_02198688(*(uint32_t *)(p + 0xbc), *(uint32_t *)(p + 0xb8));
    r6 = func_ov002_021a4b18();
    r4 = func_ov002_021a16fc(r4);
    v = *(uint32_t *)(p + 0xc8);
    func_ov002_021d313c(v);
    for (i = 0; i < 6; i++) {
        a = (uint8_t)func_ov002_021d313c(v);
        if (flag == 0) {
            v++;
        } else {
            v--;
        }
        b = (uint8_t)func_ov002_021d313c(v);
        if (a > b) {
            r4 += r6;
        } else {
            r4 -= r6;
        }
        if (r4 < 0) {
            break;
        }
        count++;
    }
    return count;
}
