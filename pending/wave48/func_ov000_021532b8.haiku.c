#include "ffc/types.h"

extern void func_02084b2c(void *p, int v, int n);
extern int func_ov000_02153050(void);
extern int func_ov000_02152818(void);
extern uint32_t func_02088978(void);
extern void *func_ov000_02150234(void);
extern void func_02087874(void *p, int n);
extern void func_0208898c(uint32_t h);
extern void func_02084ca4(void *dst, void *src, int n);
extern int func_02087460(void);
extern void *func_ov000_02150268(void *out);
extern int func_ov000_02152838(void *p);
extern void func_ov000_02153290(void *src, void *dst);
extern int func_ov000_0215286c(void);

uint32_t func_ov000_021532b8(int32_t *p) {
    uint32_t r7 = 0;
    uint32_t h;
    void *q;
    uint16_t buf[6];
    int32_t st;

    func_02084b2c(p, 0, 0x40);
    p[1] = 0xff;
    if (func_ov000_02153050() != 4) {
        return r7;
    }
    st = func_ov000_02152818();
    p[0] = st;
    if (st == 0xff || st > 0x63) {
        p[0] = 0x63;
        return 0;
    }
    h = func_02088978();
    q = func_ov000_02150234();
    func_02087874(q, 6);
    if (q == 0) {
        func_0208898c(h);
        return r7;
    }
    func_02084ca4(q, (uint8_t *)p + 0x37, 6);

    if (p[0] == 0 || p[0] == 1 || p[0] == 2 ||
        (func_02087460() != 0 && (uint32_t)(p[0] - 10) <= 2)) {
        q = func_ov000_02150268(buf);
        func_02087874(q, 0x20);
        if (q == 0) {
            func_0208898c(h);
            return 0;
        }
        func_02084ca4(q, (uint8_t *)p + 0x16, buf[0]);
    }
    func_0208898c(h);

    if (func_ov000_02152838(&buf[1]) != 0) {
        func_ov000_02153290(&buf[1], p);
    } else {
        p[1] = 0xff;
    }
    p[2] = func_ov000_0215286c();
    return 1;
}
