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
        d = &data_ov006_021ba150;
        i = a - 1;
        o2 = i * 2;
        o4 = i * 4;
        *(uint16_t *)(d->buf + 0x148a + o2) = 0;
        func_02084b2c(d->buf + 0x148a + 0x1e + o4, 0, 4);
        n = 0x16;
        func_02084b2c(d->buf + 0x1340 + i * n, 0, n);
        func_ov006_0219cd14(a);
        *(uint16_t *)(d->buf + 0x1754 + o2) = 0;
        v = (int8_t)d->buf[0x148a + 0x9c + i];
        if (v != -1) {
            off = (uint8_t)v * 0x5d4;
            mask = 1u << a;
            *(uint16_t *)(d->buf + off + 0x1d4e) &= (uint16_t)~mask;
            *(uint16_t *)(d->buf + off + 0x1d50) |= (uint16_t)mask;
            d->buf[0x148a + 0x9c + i] = -1;
            *(uint16_t *)(d->buf + off + 0x1d4c) &= (uint16_t)~mask;
        }
        mask = 1u << a;
        if (*(uint16_t *)(d->buf + 0x1536) & mask) {
            d->buf[0x1535] = d->buf[0x1535] - 1;
            *(uint16_t *)(d->buf + 0x1536) &= (uint16_t)~mask;
        }
        *(uint32_t *)(d->buf + 0x14e8 + o4) = 0;
    }
}
