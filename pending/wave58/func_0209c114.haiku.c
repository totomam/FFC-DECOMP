#include "ffc/types.h"

extern uint32_t func_0209d11c(void *a, void *b);
extern void func_0209c070(uint32_t x, void *b);
extern void func_0209d160(void *a, void *b);
extern uint8_t *func_0209bf7c(uint8_t *p, uint32_t *out);
extern uint8_t *func_0209bfdc(uint8_t *p, uint32_t *out);

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint8_t *f8;
} Ctx;

uint8_t func_0209c114(Ctx *s) {
    uint8_t *p;
    uint32_t t[40];
    uint8_t *sub = (uint8_t *)s + 0x18;
    uint8_t op;

    for (;;) {
        p = s->f8;
        if (p != 0 && (*p & 0x80) == 0) {

            op = *p & 0x1f;
            if (op > 0x13) {
                return 0xff;
            }
            switch (op) {
            case 2:
                p = func_0209bf7c(p + 1, &t[39]) + 4;
                break;
            case 3:
                p = func_0209bf7c(p + 1, &t[37]);
                p = func_0209bf7c(p, &t[38]) + 4;
                break;
            case 4:
                p = func_0209bf7c(p + 1, &t[36]) + 4;
                break;
            case 5:
                p = func_0209bf7c(p + 1, &t[33]);
                p = func_0209bfdc(p, &t[34]);
                p = func_0209bfdc(p, &t[35]) + 4;
                break;
            case 6:
                p = func_0209bf7c(p + 1, &t[31]);
                p = func_0209bf7c(p, &t[32]) + 4;
                break;
            case 7:
                p = func_0209bf7c(p + 1, &t[29]);
                p = func_0209bf7c(p, &t[30]) + 4;
                break;
            case 8:
                p = func_0209bf7c(p + 1, &t[26]);
                p = func_0209bf7c(p, &t[27]);
                p = func_0209bf7c(p, &t[28]) + 4;
                break;
            case 9:
                p = func_0209bf7c(p + 1, &t[22]);
                p = func_0209bf7c(p, &t[23]);
                p = func_0209bfdc(p, &t[24]);
                p = func_0209bfdc(p, &t[25]) + 4;
                break;
            case 10:
                p = func_0209bf7c(p + 1, &t[21]) + 4;
                break;
            case 11:
                p = func_0209bf7c(p + 1, &t[19]);
                p = func_0209bf7c(p, &t[20]) + 4;
                break;
            case 12:
                p = func_0209bfdc(p + 5, &t[17]);
                p = func_0209bf7c(p, &t[18]);
                break;
            case 13:
                p = func_0209bf7c(p + 1, &t[16]);
                break;
            case 15:
                p = func_0209bfdc(p + 1, &t[13]);
                p = func_0209bfdc(p, &t[14]);
                p = func_0209bf7c(p, &t[15]);
                p = p + (t[13] << 2);
                break;
            case 16:
                p = func_0209bf7c(p + 1, &t[9]);
                p = func_0209bf7c(p, &t[10]) + 4;
                p = func_0209bf7c(p, &t[11]) + 4;
                break;
            case 17:
                p = func_0209bf7c(p + 1, &t[5]);
                p = func_0209bf7c(p, &t[7]);
                p = p + 1;
                p = func_0209bf7c(p, &t[6]);
                p = func_0209bf7c(p, &t[8]) + 4;
                break;
            case 18:
                p = func_0209bf7c(p + 1, &t[2]);
                p = p + 1;
                p = func_0209bf7c(p, &t[3]);
                p = func_0209bfdc(p, &t[4]) + 4;
                break;
            case 19:
                p = func_0209bf7c(p + 1, &t[1]);
                break;
            default:
                return 0xff;
            }
            s->f8 = p;
            break;
        }
        func_0209c070(func_0209d11c(sub, s), s);
        if (s->f4 == 0) {
            return 0xff;
        }
        func_0209d160(sub, s);
        if (s->f8 != 0) {
            break;
        }
    }

    p = s->f8;
    if ((*p & 0x1f) == 1) {
        do {
            func_0209bf7c(p + 1, &t[0]);
            p = p + t[0];
            s->f8 = p;
        } while ((*p & 0x1f) == 1);
    }
    return (uint8_t)(*p & 0x1f);
}
