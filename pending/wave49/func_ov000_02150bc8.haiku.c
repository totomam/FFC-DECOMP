#include "ffc/types.h"

extern uint8_t *func_ov000_0214fa54(void *p);
extern void func_ov000_0214fbe4(int a);
extern void func_ov000_0214fb84(int a, int b, int c, int d);
extern void func_02087874(uint32_t a, uint32_t b);
extern void func_ov000_0214fdc8(uint32_t a, uint32_t b);
extern void func_ov000_0214fbb4(int a, int b, uint32_t c, void *d, int e);
extern uint32_t func_02083728(uint32_t a);
extern uint64_t func_0209a978(uint32_t a);
extern uint32_t func_02083720(uint32_t a);
extern uint32_t func_ov000_0214fb34(uint32_t a);
extern void func_02087890(uint32_t a, uint32_t b);
extern int func_0208da6c(void *fn, void *arg);
extern int func_0208db58(void *fn);
extern void func_ov000_02150958(void);
extern void func_ov000_02150d78(void);
extern void func_ov000_02150bc8(void *p);

void func_ov000_02150bc8(void *arg)
{
    uint8_t *b;
    int r5 = 0x14;

    b = func_ov000_0214fa54(arg);

    switch (*(uint16_t *)((uint8_t *)arg + 2)) {
    case 0:
        if (b[0x12de] == 5) {
            func_ov000_0214fbe4(6);
            func_ov000_0214fb84(0, 0, 0, 0x346);
        }
        switch (b[0x12de]) {
        case 6:
            *(uint16_t *)(b + 0x12da) = 7;
            if (*(uint16_t *)((uint8_t *)arg + 8) == 5) {
                func_02087874(*(uint32_t *)(b + 0x22a0), *(uint16_t *)(b + 0x22a4));
                for (r5 = 0; r5 < *(uint16_t *)((uint8_t *)arg + 0xe); r5++) {
                    uint32_t *e = (uint32_t *)((uint8_t *)arg + 4 * r5);
                    func_ov000_0214fdc8(e[4], *(uint16_t *)((uint8_t *)arg + 0x50 + 2 * r5));
                    func_ov000_0214fbb4(7, 0, e[4], arg, 0x35c);
                }
            }
            if ((*(uint32_t *)(b + 0x12d4) & (3u << 22)) == (3u << 22)) {
                uint32_t t = func_02083728(*(uint32_t *)(b + 0x12d4) & 0x3ffe);
                if (t) {
                    r5 = *(uint32_t *)(b + 0x22e4);
                    if ((uint32_t)(func_0209a978(r5) >> 32) == 0) {
                        func_ov000_0214fbb4(8, 0, r5, 0, 0x36a);
                    }
                }
            }
            *(uint16_t *)(b + 0x22a6) = (uint16_t)((1 << func_ov000_0214fb34((uint16_t)(0x20 - func_02083720(*(uint16_t *)((uint8_t *)arg + 0xa))))) >> 1);
            func_02087890(*(uint32_t *)(b + 0x22a0), *(uint16_t *)(b + 0x22a4));
            *(uint32_t *)(b + 0x22e4) = *(uint32_t *)(b + 0x22e4) + 1;
            r5 = func_0208da6c((void *)&func_ov000_02150bc8, b + 0x22a0);
            break;
        case 7:
            r5 = func_0208db58((void *)func_ov000_02150d78);
            break;
        case 0xd:
            func_ov000_02150958();
            return;
        default:
            break;
        }
        if (r5 == 2) {
            return;
        }
        if (r5 == 3) {
            goto L14e;
        }
        if (r5 == 8) {
            func_ov000_0214fbe4(0xc);
            func_ov000_0214fb84(1, 0, 0, 0x395);
            return;
        }
        goto L14e;
    case 1:
        goto L1;
    case 2:
    case 3:
    case 4:
    default:
        goto err;
    }
L14e:
    func_ov000_0214fbe4(0xb);
    func_ov000_0214fb84(7, 0, 0, 0x39e);
    return;
L1:
    func_ov000_02150958();
    return;
err:
    func_ov000_0214fbe4(0xb);
    func_ov000_0214fb84(7, 0, 0, 0x3af);
}
