#include "ffc/types.h"

extern uint32_t data_ov006_021bc778[];
extern int func_ov006_021b5404(uint8_t *p, int n);
extern void func_02084b2c(void *d, int c, int n);
extern void func_ov006_021b453c(void *c, int a, int off, int b, int d, uint16_t *buf, int e);

typedef struct Ctx {
    uint8_t *base;
    uint32_t p1;
    uint32_t p2;
    void *c;
    uint8_t pad[0x41];
    uint8_t count;
} Ctx;

#define CTX ((Ctx *)data_ov006_021bc778[1])

void func_ov006_021a9a34(int a, int b)
{
    int k = a * 42;
    int n = func_ov006_021b5404(CTX->base + k, 0x20);
    int off = b * 28;
    uint16_t buf[17];
    int i;

    if (a < CTX->count) {
        if (n <= 16) {
            off += 6;
        }
        func_02084b2c(buf, 0, 0x22);
        int m = (n > 16) ? 16 : n;
        for (i = 0; i < m; i++) {
            buf[i] = CTX->base[k + i];
        }
        func_ov006_021b453c(CTX->c, 10, off, 2, 10, buf, 1);
        if (n > 16) {
            func_02084b2c(buf, 0, 0x22);
            n -= 16;
            for (i = 0; i < n; i++) {
                buf[i] = CTX->base[k + 16 + i];
            }
            off += 12;
            func_ov006_021b453c(CTX->c, 10, off, 2, 10, buf, 1);
        }
    }
}
