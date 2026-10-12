#include "ffc/types.h"

extern void func_02084b2c(void *dst, int c, uint32_t n);
extern void func_020870a0(void *object);
extern void func_ov000_0214ba1c(void);
extern uint32_t data_ov000_0216bc60[];
extern uint8_t data_ov000_0216bd78[];
extern uint32_t data_02141510[];
extern uint8_t data_ov000_0216c458[];

void func_ov000_0214530c(uint32_t p0)
{
    uint32_t *A = data_ov000_0216bc60;
    int r3;
    int i;
    uint8_t *n;
    void (*fn)(uint32_t);

    r3 = (A[20] != 0);
    A[19] = p0;
    A[20] = 0;
    A[4] = 0;
    A[11] = 0;
    A[28] = 0;
    A[29] = 0;
    A[7] = 0;

    if (r3) {
        func_02084b2c(data_ov000_0216bd78, 0, 0x60);
        n = (uint8_t *)data_02141510[2];
        if (n) {
            do {
                uint8_t *q = *(uint8_t **)(n + 0xa4);
                if (q && *(uint32_t *)q) {
                    if (q[8] != 10 && q[8] != 11) {
                        q[8] = 0;
                    }
                    if (*(uint32_t *)(q + 4)) {
                        *(uint32_t *)(q + 4) = 0;
                        func_020870a0(*(void **)q);
                    }
                }
                n = *(uint8_t **)(n + 0x68);
            } while (n != 0);
        }

        for (i = 0; i < 8; i++) {
            uint8_t *e = data_ov000_0216c458 + i * 0x38;
            if (*(uint16_t *)(e + 4)) {
                fn = (void (*)(uint32_t))A[17];
                fn(*(uint32_t *)(e + 0x34));
                *(uint16_t *)(e + 4) = 0;
            }
        }
        func_ov000_0214ba1c();
    }
}
