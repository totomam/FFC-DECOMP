#include "ffc/types.h"

extern void func_ov000_021652a8(int a, int b, int c, void *d);
extern uint8_t data_ov001_02193934[];
extern void func_ov000_021663e8(void *dst, void *src, int n);
extern void func_ov001_021831c0(void *a, uint32_t key, int b, void *c, void *d, void *e);
extern uint8_t data_ov001_0218f0f8[];
extern void func_ov001_02184424(void);
extern void func_ov001_02184420(void);

typedef struct { uint8_t b[6]; } M;
typedef void (*cb_key_t)(uint32_t, uint32_t);
typedef void (*cb_d_t)(void *, int, uint32_t);

void func_ov001_02184aa0(uint8_t *p, uint8_t *d, int x)
{
    struct { uint32_t w; uint8_t buf[6]; } L;
    uint8_t *m = L.buf;
    int ok = 1;

    int i;
    uint32_t w;
    uint8_t *kb;
    uint32_t key;

    *(M *)(L.buf) = *(M *)data_ov001_0218f0f8;

    func_ov000_021652a8(3, 4, 8, data_ov001_02193934);

    if (x >= 10) {
        for (i = 0; i < 6; i++) {
            if (m[i] != d[i]) {
                ok = 0;
                break;
            }
        }
    } else {
        ok = 0;
    }

    if (ok) {
        kb = (uint8_t *)&L.w;
        kb[0] = d[6];
        kb[1] = d[7];
        kb[2] = d[8];
        kb[3] = d[9];
        w = L.w;
        key = (uint8_t)(w >> 24) | ((w >> 8) & 0x0000ff00) | ((w << 8) & 0x00ff0000) | ((w << 24) & 0xff000000);

        if (*(void **)(p + 0xac) != 0) {
            if (*(uint32_t *)0x0217098c != 1) {
                *(uint32_t *)0x0217098c = 1;
                func_ov000_021663e8((void *)((uint32_t)0x02170990 + (uint32_t)(x & 0)), p + 4, 0x40);
            }
            func_ov001_021831c0(*(void **)p, key, 1,
                                (void *)func_ov001_02184420,
                                (void *)func_ov001_02184424, p);
        } else {
            cb_key_t f = *(cb_key_t *)(p + 0xa0);
            if (f != 0) {
                f(key, *(uint32_t *)(p + 0x114));
            }
        }
    } else {
        cb_d_t g = *(cb_d_t *)(p + 0xa4);
        if (g != 0) {
            g((void*)d, x, *(uint32_t *)(p + 0x114));
        }
    }
}
