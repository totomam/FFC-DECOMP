#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t h);
extern uint8_t *func_ov000_0214fa54(uint32_t h);
extern void func_02084ca4(const void *src, void *dst, uint32_t n);
extern void func_02084b2c(void *dst, int val, uint32_t n);
extern void func_ov000_0214f988(uint32_t c);
extern int func_ov000_02150748(void);
extern int func_02087460(void);
extern int func_021daecc(void);

int func_ov000_0214f6e0(uint8_t *a, uint8_t *b, uint32_t c)
{
    uint32_t h = func_02088978();
    uint8_t *base = func_ov000_0214fa54(h);
    uint8_t st;
    uint8_t s;
    int ret;

    if (base == 0) {
        func_0208898c(h);
        return 1;
    }
    st = base[0x12de];
    switch (st) {
    case 3:
        if (a == 0) {
            func_0208898c(h);
            return 1;
        }
        if (*(uint16_t *)(a + 0x3c) != 0) {
            func_0208898c(h);
            return 1;
        }
        if (b != 0) {
            uint8_t t0 = b[0];
            if ((t0 <= 3 && b[1] >= 4) || base[0x1291] > 0x40) {
                func_0208898c(h);
                return 1;
            }
            base[0x1290] = t0;
            if (b[0] == 0) {
                func_02084b2c(base + 0x1240, 0, 0x50);
            } else if (b[0] <= 3) {
                base[0x1291] = b[1];
                func_02084ca4(b + 2, base + 0x1240, 0x50);
            } else {
                base[0x1291] = b[1];
                func_02084ca4(b + 2, base + 0x1240, base[0x1291]);
            }
        } else {
            func_02084b2c(base + 0x1240, 0, 0x54);
        }
        func_02084ca4(a, base + 0x12e0, 0xc0);
        func_ov000_0214f988(c);
        break;
    case 8:
        func_0208898c(h);
        return 2;
    case 9:
        func_0208898c(h);
        return 0;
    default:
        func_0208898c(h);
        return 1;
    }

    s = base[0x12df];
    switch (s) {
    case 1:
        ret = func_ov000_02150748();
        break;
    case 2:
        if (func_02087460() != 0) {
            ret = func_021daecc();
            break;
        }
    default:
        ret = 7;
        break;
    }
    func_0208898c(h);
    return ret;
}
