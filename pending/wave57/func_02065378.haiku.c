#include "ffc/types.h"

extern uint32_t *func_020635a0(char *a, uint32_t b, char *c);
extern void func_0205f210(uint32_t *a, uint32_t b);
extern void func_0205fa1c(uint32_t a, uint32_t *b, uint32_t c, uint32_t d, uint32_t e);
extern uint32_t data_020b11b4[];
extern uint32_t data_020b11b8[];

void func_02065378(char *p, uint32_t idx, uint32_t value)
{
    uint32_t off = idx * 28;
    char *e = *(char **)(p + 0x60) + off;
    uint32_t *A = (uint32_t *)(*(char **)(p + 0x24) + *(uint32_t *)(e + 0xc) * 40);
    char *q = 0;
    uint32_t *r7;
    int32_t s;
    uint32_t *B;
    uint32_t r3, r5, r6, r0v;
    uint32_t idx2;

    if (*(char **)(p + 0x7c) != 0) {
        q = *(char **)(*(char **)(p + 0x7c)) + idx * 12;
    }
    r7 = func_020635a0(p + 0x18, value, q);
    *(uint32_t *)(e + 4) = value;
    A[0] = (A[0] & 0xffffdfff) | ((r7[0] >> 3) & 0x2000);

    if (*(uint32_t *)(p + 0x38) & 2) {
        func_0205f210(A, ((uint32_t *)*(char **)(p + 0x70))[idx]);
        s = (int8_t)r7[0];
        A[0] = (A[0] & 0x3fff3fff) | ((s & 3) << 14) | (((s >> 2) & 3) << 30);
        if (((A[0] << 22) >> 30) != 3) {
            A[6] = data_020b11b4[s * 2];
            A[7] = data_020b11b8[s * 2];
        } else {
            A[6] = data_020b11b4[s * 2] << 1;
            A[7] = data_020b11b8[s * 2] << 1;
        }
        func_0205fa1c(((uint32_t *)*(char **)(p + 0x70))[idx], r7 + 1, 0, (r7[0] >> 8) & 0xff, 0);
    } else {
        func_0205f210(A, ((uint32_t *)*(char **)(p + 0x70))[value]);
        s = (int8_t)r7[0];
        A[0] = (A[0] & 0x3fff3fff) | ((s & 3) << 14) | (((s >> 2) & 3) << 30);
        if (((A[0] << 22) >> 30) != 3) {
            A[6] = data_020b11b4[s * 2];
            A[7] = data_020b11b8[s * 2];
        } else {
            A[6] = data_020b11b4[s * 2] << 1;
            A[7] = data_020b11b8[s * 2] << 1;
        }
    }

    B = (uint32_t *)(*(char **)(p + 0x24) + *(uint32_t *)(e + 0xc) * 40);
    r5 = *(uint32_t *)(e + 0x18);
    r3 = *(uint32_t *)(e + 0x14);
    if (*(uint8_t *)(p + 0x2f) != 0 || *(uint8_t *)(p + 0x30) != 0) {
        r6 = B[0];
        idx2 = ((r6 << 16) >> 30) | ((r6 >> 30) << 2);
        r6 = data_020b11b4[idx2 * 2];
        r0v = data_020b11b8[idx2 * 2];
        if (*(uint32_t *)(e + 8) == 3) {
            r6 <<= 1;
            r0v <<= 1;
        }
        if (*(uint8_t *)(p + 0x2f) != 0) {
            r3 = r6 - r3;
        }
        if (*(uint8_t *)(p + 0x30) != 0) {
            r5 = r0v - r5;
        }
    }
    B[2] = r3;
    B[3] = r5 + *(uint32_t *)(p + 0x54);
}
