#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t h);
extern void func_02084b2c(void *p, int c, int n);
extern int func_ov000_0214f600(void *a, uint32_t b, uint32_t c);
extern int func_ov006_021a0070(void);
typedef struct { uint32_t pad0[11]; uint32_t st; uint32_t pad1[5]; uint8_t *a; uint8_t *b; uint32_t pad2[5]; uint32_t h; } G;
extern G data_ov006_021bb170;
extern uint8_t data_ov006_021bb628[];
extern uint8_t data_ov006_021bb660[];

int func_ov006_021a011c(uint8_t *p0, uint8_t *p1, int p2, uint32_t p3)
{
    uint32_t h = func_02088978();
    uint8_t *d;
    int n;

    data_ov006_021bb170.a = data_ov006_021bb628;
    data_ov006_021bb170.h = p3;
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
        data_ov006_021bb170.a = (uint8_t*)0x02169604;
    }

    data_ov006_021bb170.b = data_ov006_021bb660;
    if (p1 != 0 && p2 > 0 && p2 < 0x20) {
        d = data_ov006_021bb660;
        for (n = 0; n < p2; n++) {
            *d = *p1;
            p1++;
            d++;
        }
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
        data_ov006_021bb170.b = (uint8_t*)0x0216960c;
    }

    if (data_ov006_021bb170.st == 3) {
        if (func_ov000_0214f600(data_ov006_021bb628, data_ov006_021bb170.b, data_ov006_021bb170.h) == 3) {
            data_ov006_021bb170.st = 6;
            func_0208898c(h);
            return 1;
        }
    } else {
        if (func_ov006_021a0070() == 1) {
            data_ov006_021bb170.st = 6;
            func_0208898c(h);
            return 1;
        }
    }

    func_0208898c(h);
    return 0;
}
