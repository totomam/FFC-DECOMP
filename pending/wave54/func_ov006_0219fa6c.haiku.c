#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w4;
    void *w8;
    void *wc;
    void *w10;
    void *w14;
    uint32_t w18;
} Ctx;

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_02084b2c(void *, int, int);
extern int func_ov000_0214f600(void *, void *, uint32_t);
extern int func_ov006_0219f9c0(void);

#define CTX (*(volatile Ctx *)0x021bb120)
#define BUF148 ((uint8_t *)0x021bb148)
#define BUF150 ((uint8_t *)0x021bb150)

int func_ov006_0219fa6c(uint8_t *a0, uint8_t *a1, int a2, uint32_t a3)
{
    uint32_t s = func_02088978();
    int i;
    uint8_t *d;

    CTX.w4 = a3;
    if (a0 != 0) {
        d = BUF148;
        for (i = 0; i < 6; i++) {
            *d = *a0;
            a0++;
            d++;
        }
        CTX.w10 = BUF148;
    } else {
        func_02084b2c(BUF148, 0xff, 6);
        CTX.w10 = (void *)0x02169604;
    }

    if (a1 != 0 && a2 > 0 && a2 <= 0x20) {
        d = BUF150;
        for (i = 0; i < a2; i++) {
            *d = *a1;
            a1++;
            d++;
        }
        for (; i < 0x20; i++) {
            *d = 0;
            d++;
        }
        CTX.w14 = BUF150;
    } else {
        func_02084b2c(BUF150, 0xff, 0x20);
        CTX.w14 = (void *)0x0216960c;
    }

    if (CTX.w18 == 3) {
        if (func_ov000_0214f600(CTX.w10, CTX.w14, CTX.w4) == 3) {
            CTX.w18 = 6;
            func_0208898c(s);
            return 1;
        }
    } else {
        if (func_ov006_0219f9c0() == 1) {
            CTX.w18 = 6;
            func_0208898c(s);
            return 1;
        }
    }

    func_0208898c(s);
    return 0;
}
