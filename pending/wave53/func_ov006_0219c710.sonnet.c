#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x10];
    uint8_t *buf;
} FfcData;

extern FfcData data_ov006_021ba150;
extern void func_ov006_0219b5a8(void);
extern void func_0208dc18(void (*f)(void), int a);
extern void func_02084b2c(void *p, int c, uint32_t n);
extern void func_ov006_0219cd14(int a);

void func_ov006_0219c710(int a)
{
    int i;
    FfcData *d;
    uint32_t mask;
    uint32_t off;
    uint32_t o2;
    uint32_t o4;
    int n;
    int8_t v;

    func_0208dc18(func_ov006_0219b5a8, a);
    if (a != 0 && (uint32_t)a < 16) {
        i = a - 1;
        o2 = i * 2;
        o4 = i * 4;
        *(uint16_t *)(data_ov006_021ba150.buf + 0x148a + o2) = 0;
        func_02084b2c(data_ov006_021ba150.buf + 0x148a + 0x1e + o4, 0, 4);
        n = 0x16;
        func_02084b2c(data_ov006_021ba150.buf + 0x1340 + i * n, 0, n);
        func_ov006_0219cd14(a);
        *(uint16_t *)(data_ov006_021ba150.buf + 0x1754 + o2) = 0;
        v = (int8_t)(data_ov006_021ba150.buf + i)[0x148a + 0x9c];
        n -= 0x17;
        if (v != n) {
            off = (uint8_t)v * 0x5d4;
            uint32_t one = 1; uint32_t m = one << a;
            *(uint16_t *)(data_ov006_021ba150.buf + off + 0x1d4e) &= (uint16_t)~m;
            *(uint16_t *)(data_ov006_021ba150.buf + off + 0x1d50) |= (uint16_t)m;
            (data_ov006_021ba150.buf + (a - 1))[0x148a + 0x9c] = one - 2;
            *(uint16_t *)(data_ov006_021ba150.buf + off + 0x1d4c) &= (uint16_t)~m;
        }
        mask = 1u << a;
        if (*(uint16_t *)(data_ov006_021ba150.buf + 0x1536) & mask) {
            data_ov006_021ba150.buf[0x1535] = data_ov006_021ba150.buf[0x1535] - 1;
            *(uint16_t *)(data_ov006_021ba150.buf + 0x1536) &= (uint16_t)~mask;
        }
        *(uint32_t *)(data_ov006_021ba150.buf + 0x14e8 + o4) = 0;
    }
}
