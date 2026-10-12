#include "ffc/types.h"

extern void func_02088f30(void);

typedef struct {
    uint8_t flag;
    uint8_t pad[3];
    uint16_t p1;
    uint32_t type;
    uint8_t data[48];
} FfcBuf;

void func_0206fd1c(uint8_t *base, uint16_t p1, uint32_t type, uint8_t *src)
{
    FfcBuf b;
    uint8_t *e;
    uint32_t idx;
    uint32_t i;
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;

    b.p1 = p1;
    b.type = type;
    switch (type) {
    case 1:
        *(uint16_t *)(b.data + 0) = *(uint16_t *)(src + 0);
        *(uint16_t *)(b.data + 2) = *(uint16_t *)(src + 2);
        *(uint16_t *)(b.data + 4) = *(uint16_t *)(src + 4);
        *(uint16_t *)(b.data + 6) = *(uint16_t *)(src + 6);
        break;
    case 2:
    case 3:
        {
            *(uint16_t *)(b.data + 0) = *(uint16_t *)(src + 0);
            *(uint16_t *)(b.data + 2) = *(uint16_t *)(src + 2);
            *(uint16_t *)(b.data + 4) = *(uint16_t *)(src + 4);
            *(uint16_t *)(b.data + 6) = *(uint16_t *)(src + 6);
            *(uint16_t *)(b.data + 8) = *(uint16_t *)(src + 8);
            b.data[10] = src[10];
            b.data[11] = src[11];
            b.data[12] = src[12];
            b.data[13] = src[13];
            b.data[14] = src[14];
            b.data[15] = src[15];
            *(uint16_t *)(b.data + 0x10) = *(uint16_t *)(src + 0x10);
            *(uint16_t *)(b.data + 0x12) = *(uint16_t *)(src + 0x12);
            {
                uint8_t *d = b.data + 0x14;
                const uint8_t *q = src + 0x14;
                for (i = 24; i != 0; i--) {
                    *d = *q;
                    d++;
                    q++;
                }
            }
            *(uint16_t *)(b.data + 0x2c) = *(uint16_t *)(src + 0x2c);
            *(uint16_t *)(b.data + 0x2e) = *(uint16_t *)(src + 0x2e);
        }
        break;
    case 10:
        b.data[0] = src[0];
        b.data[1] = src[1];
        {
            const uint8_t *q = src + 2;
            uint16_t *d = (uint16_t *)(b.data + 2);
            for (i = 10; i != 0; i--) {
                *d = *(uint16_t *)q;
                d++;
                q += 2;
            }
        }
        break;
    case 13:
        *(uint16_t *)(b.data + 0) = *(uint16_t *)(src + 0);
        break;
    default:
        break;
    }

    {
        uint16_t old = *ime;
        *ime = 0;
        b.flag = (old != 0) ? 1 : 0;
    }

    idx = *(uint32_t *)(base + 0x76c);
    e = base + 0x68 + idx * 0x38;
    *(uint16_t *)e = b.p1;
    *(uint32_t *)(e + 4) = b.type;
    {
        uint16_t *dp = (uint16_t *)(e + 8);
        uint16_t *sp16 = (uint16_t *)b.data;
        for (i = 0; i < 24; i++) {
            *dp = *sp16;
            dp++;
            sp16++;
        }
    }
    idx = (idx + 1) & 0x1f;
    *(uint32_t *)(base + 0x76c) = idx;
    if (idx == *(uint32_t *)(base + 0x768)) {
        func_02088f30();
    }
    (void)*ime;
    *ime = b.flag;
}
