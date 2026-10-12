#include "ffc/types.h"

extern int32_t func_ov006_0219e220(void *a, void *b);
extern int32_t func_ov006_0219f078(uint16_t x);
extern int32_t func_ov006_0219f050(uint32_t x);
extern void func_ov006_0219daa0(int32_t x);

int32_t func_ov006_0219e044(int32_t a, uint8_t *p, int32_t *cnt, uint8_t *q) {
    if (a != 2) {
        (*cnt)++;
        return a;
    }
    {
        uint8_t *r4 = p + 0x24;
        if (func_ov006_0219e220(q + 0x10, p + 0x1c) < 0) {
            (*cnt)++;
            return a;
        }
        if (*r4 != 7) {
            (*cnt)++;
            return a;
        }
        if (func_ov006_0219f078(*(uint16_t *)(r4 + 2)) == 0) {
            (*cnt)++;
            return a;
        }
        if (func_ov006_0219f050(*(uint32_t *)(r4 + 4)) == 0) {
            return 100;
        }
        if (func_ov006_0219f050(*(uint32_t *)(r4 + 4)) == -2) {
            func_ov006_0219daa0(0x14);
            return -1;
        }
        if (func_ov006_0219f050(*(uint32_t *)(r4 + 4)) == -3) {
            func_ov006_0219daa0(0x15);
            return -1;
        }
        func_ov006_0219daa0(0x18);
        return -1;
    }
}
