#include "ffc/types.h"

extern void *func_ov000_0214fa54(void *p);
extern void func_ov000_0214fbe4(uint32_t n);
extern void func_ov000_0214fb84(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern int func_0208db80(void *fn, void *p, uint32_t a, uint32_t b, uint32_t c);
extern int func_0208d850(void *fn);
extern void func_ov000_02150dcc(void);
extern void func_ov000_021509e8(void);

void func_ov000_0215114c(void *a)
{
    uint8_t *base;
    uint32_t r6;
    uint32_t idx;
    uint32_t r7;
    uint32_t r3;
    uint32_t r2;
    int ret;

    base = (uint8_t *)func_ov000_0214fa54(a);
    if (*(uint16_t *)((uint8_t *)a + 2) == 0) {
        idx = 0x12dd;
        r6 = 0;
        base[idx] = r6;
        *(uint16_t *)(base + 0x22e8) = r6;

        switch (base[idx + 1]) {
        case 5:
        case 6:
            func_ov000_0214fbe4(3);
            func_ov000_0214fb84(1, r6, r6, 0x53c);
            return;
        case 7:
            func_ov000_0214fbe4(3);
            func_ov000_0214fb84(r6, r6, r6, 0x542);
            return;
        case 8:
            r7 = *(uint16_t *)(base + 0x22ea);
            *(uint16_t *)(base + 0x22ea) = r6;
            if (r7 == 0x12 && (*(volatile uint16_t *)(base + idx + 0x33) & 0x24) != 0x24) {
                *(uint16_t *)(base + idx + 0x33) = *(volatile uint16_t *)(base + idx + 0x33) | 0x24;
                idx -= 9;
                r2 = *(uint32_t *)(base + idx);
                if ((r2 & 0xC0000) == 0xC0000) {
                    r6 = 1;
                }
                r3 = (r2 & 0x30000) != 0x30000;
                idx = 0x12e0;
                ret = func_0208db80(func_ov000_02150dcc, base + idx, 0, r3, (uint16_t)r6);
                if (ret == 2) {
                    return;
                }
                if (ret != 3 && ret == 8) {
                    func_ov000_0214fbe4(0xc);
                    func_ov000_0214fb84(1, (uint32_t)(base + idx), r7, 0x563);
                    return;
                }
                func_ov000_0214fbe4(0xb);
                func_ov000_0214fb84(7, (uint32_t)(base + idx), r7, 0x56c);
                return;
            }
            func_ov000_0214fbe4(3);
            func_ov000_0214fb84(1, (uint32_t)(base + 0x12e0), r7, 0x574);
            return;
        case 9:
        case 12:
            func_ov000_0214fbe4(3);
            func_ov000_0214fb84(r6, (uint32_t)base + (idx + 3), 1, 0x57c);
            return;
        case 10:
            func_ov000_0214fbe4(3);
            func_ov000_0214fb84(r6, (uint32_t)base + (idx + 3), r6, 0x583);
            return;
        case 13:
            ret = func_0208d850(func_ov000_021509e8);
            if (ret == 2) {
                return;
            }
            if (ret != 3 && ret == 8) {
                func_ov000_0214fbe4(0xc);
                func_ov000_0214fb84(1, r6, r6, 0x591);
                return;
            }
            func_ov000_0214fbe4(0xb);
            func_ov000_0214fb84(7, 0, 0, 0x59a);
            return;
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 11:
        default:
            func_ov000_0214fbe4(0xb);
            func_ov000_0214fb84(7, 0, base[idx + 1], 0x5a0);
            return;
        }
    }
    func_ov000_0214fbe4(0xb);
    func_ov000_0214fb84(7, 0, 0, 0x5a7);
}
