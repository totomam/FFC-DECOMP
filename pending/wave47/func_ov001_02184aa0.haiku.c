#include "ffc/types.h"

extern void func_ov000_021652a8(int a, int b, int c);
extern void func_ov000_021663e8(void *dst, void *src, int n);
extern void func_ov001_021831c0(void *a, uint32_t key, int b, void *c, void *d, void *e);
extern uint8_t data_ov001_0218f0f8[];
extern void func_ov001_02184424(void);
extern void func_ov001_02184420(void);

typedef void (*cb_key_t)(void *, uint32_t, uint32_t);
typedef void (*cb_d_t)(void *, int, uint32_t);

void func_ov001_02184aa0(uint8_t *p, uint8_t *d, int x)
{
    struct { int x; uint8_t buf[10]; } L;
    uint8_t *buf = L.buf;
    int ok = 1;
    L.x = x;

    int i;
    uint32_t w;
    uint32_t key;

    buf[4] = data_ov001_0218f0f8[0];
    buf[5] = data_ov001_0218f0f8[1];
    buf[6] = data_ov001_0218f0f8[2];
    buf[7] = data_ov001_0218f0f8[3];
    buf[8] = data_ov001_0218f0f8[4];
    buf[9] = data_ov001_0218f0f8[5];

    func_ov000_021652a8(3, 4, 8);

    if (L.x < 10) {
        ok = 0;
    } else {
        for (i = 0; i < 6; i++) {
            if (buf[4 + i] != d[i]) {
                ok = 0;
                break;
            }
        }
    }

    if (ok) {
        buf[0] = d[6];
        buf[1] = d[7];
        buf[2] = d[8];
        buf[3] = d[9];
        w = *(uint32_t *)buf;
        key = (w >> 24) | ((w >> 8) & 0xff00) | ((w << 8) & 0xff0000) | (w << 24);

        if (*(void **)(p + 0xac) != 0) {
            if (*(uint32_t *)0x0217098c != 1) {
                *(uint32_t *)0x0217098c = 1;
                func_ov000_021663e8((void *)0x02170990, p + 4, 0x40);
            }
            func_ov001_021831c0(*(void **)p, key, 1,
                                (void *)func_ov001_02184420,
                                (void *)func_ov001_02184424, p);
        } else {
            cb_key_t f = *(cb_key_t *)(p + 0xa0);
            if (f != 0) {
                f(d, 0, 0);
            }
        }
    } else {
        cb_d_t g = *(cb_d_t *)(p + 0xa4);
        if (g != 0) {
            g(d, L.x, *(uint32_t *)(p + 0x114));
        }
    }
}
