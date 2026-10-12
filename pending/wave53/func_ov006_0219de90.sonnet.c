#include "ffc/types.h"

extern int32_t func_ov006_0219e220(void *a, uint8_t *b, int32_t *c);
extern int32_t func_ov006_0219f078(uint16_t x);
extern int32_t func_ov006_0219f050(int32_t x);
extern void func_ov006_0219daa0(int32_t x);
extern int32_t func_ov006_0219e26c(uint8_t *a, uint8_t *b);
extern int32_t func_ov006_0219e698(void);
extern uint8_t data_ov006_021ba21c[];
extern int32_t data_ov006_021ba1dc;

int32_t func_ov006_0219de90(int32_t p, uint8_t *base, int32_t *cnt, void *q)
{
    uint8_t *e; uint8_t *s;
    int32_t r;

    if (p != 0) {
        (*cnt)++;
        return p;
    }

    e = base + 0x24;
    s = base + 0xc;
    if (func_ov006_0219e220(q, s + 0x10, cnt) < 0) {
        (*cnt)++;
        return p;
    }
    if (func_ov006_0219f078(*(uint16_t *)(e + 2)) == 0) {
        (*cnt)++;
        return p;
    }
    if (*e == 7) {
        if (func_ov006_0219f050(*(int32_t *)(e + 4)) == -2) {
            func_ov006_0219daa0(0x14);
            goto f;
        } else if (func_ov006_0219f050(*(int32_t *)(e + 4)) + 3 == 0) {
            func_ov006_0219daa0(0x15);
            goto f;
        } else {
            func_ov006_0219daa0(0x18);
        }
f:
        return -1;
    }
    if (*e != 1) {
        (*cnt)++;
        return p;
    }
    r = func_ov006_0219e26c(e + 4, data_ov006_021ba21c);
    if (r < 0) {
        if (r == -2) {
            func_ov006_0219daa0(0x16);
            return -1;
        }
        (*cnt)++;
        return p;
    }
    func_ov006_0219f078(*(uint16_t *)(s + 0xc));
    data_ov006_021ba1dc = func_ov006_0219e698();
    *cnt = 0;
    return 1;
}
