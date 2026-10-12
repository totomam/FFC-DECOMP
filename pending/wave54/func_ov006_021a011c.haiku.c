#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t h);
extern void func_02084b2c(void *p, int c, int n);
extern int func_ov000_0214f600(void *a, uint32_t b, uint32_t c);
extern int func_ov006_021a0070(void);
extern uint32_t data_ov006_021bb170[];
extern uint8_t data_ov006_021bb628[];
extern uint8_t data_ov006_021bb660[];

int func_ov006_021a011c(uint8_t *p0, uint8_t *p1, int p2, uint32_t p3)
{
    uint32_t h = func_02088978();
    uint8_t *d;
    int n;

    {
        uint32_t *g = data_ov006_021bb170;
        g[0x60 / 4] = p3;
        g[0x44 / 4] = (uint32_t)data_ov006_021bb628;
    }
    if (p0 != 0) {
        d = data_ov006_021bb628;
        n = 0;
        do {
            uint8_t c = *p0;
            n++;
            p0++;
            *d = c;
            d++;
        } while (n < 6);
    } else {
        func_02084b2c(data_ov006_021bb628, 0xff, 6);
        data_ov006_021bb170[0x44 / 4] = 0x02169604;
    }

    {
        uint32_t *g = data_ov006_021bb170;
        g[0x48 / 4] = (uint32_t)data_ov006_021bb660;
    }
    if (p1 != 0 && p2 > 0 && p2 < 0x20) {
        d = data_ov006_021bb660;
        n = 0;
        do {
            uint8_t c = *p1;
            n++;
            p1++;
            *d = c;
            d++;
        } while (n < p2);
        if (n < 0x20) {
            d = data_ov006_021bb660 + n;
            do {
                *d = 0;
                n++;
                d++;
            } while (n < 0x20);
        }
    } else {
        func_02084b2c(data_ov006_021bb660, 0xff, 0x20);
        data_ov006_021bb170[0x48 / 4] = 0x0216960c;
    }

    if (data_ov006_021bb170[0x2c / 4] == 3) {
        if (func_ov000_0214f600(data_ov006_021bb628, data_ov006_021bb170[0x48 / 4], data_ov006_021bb170[0x60 / 4]) == 3) {
            data_ov006_021bb170[0x2c / 4] = 6;
            func_0208898c(h);
            return 1;
        }
    } else {
        if (func_ov006_021a0070() == 1) {
            data_ov006_021bb170[0x2c / 4] = 6;
            func_0208898c(h);
            return 1;
        }
    }

    func_0208898c(h);
    return 0;
}
