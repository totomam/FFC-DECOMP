#include "ffc/types.h"

extern int func_ov006_0219e220(void *a, void *b, void *c);
extern uint16_t func_ov006_0219f078(uint16_t x);
extern int func_ov006_0219f050(uint32_t x);
extern void func_ov006_0219daa0(int x);
extern void func_ov006_0219ef6c(void *d, int v, uint32_t n);
extern int func_ov006_0219e588(int a, void *b, uint16_t c, void *d, void *e);
extern uint8_t data_ov006_021ba89c[];
extern uint8_t data_ov006_021ba21c[];
extern uint32_t data_ov006_021ba1dc[];

typedef struct {
    uint8_t a;
    uint8_t pad;
    uint16_t b;
    uint32_t c;
} Entry;

int func_ov006_0219df6c(int a0, uint8_t *s, int *cnt, uint8_t *p)
{
    uint8_t *q;
    Entry *e;

    if (a0 != 1) {
        (*cnt)++;
        return a0;
    }
    q = s + 0xc;
    e = (Entry *)(q + 0x18);
    if (func_ov006_0219e220(p + 8, q + 0x10, cnt) < 0) {
        (*cnt)++;
        return a0;
    }
    if (func_ov006_0219f078(e->b) == 0) {
        (*cnt)++;
        return a0;
    }
    if (e->a == 7) {
        if (func_ov006_0219f050(e->c) == (uint32_t)-2) {
            func_ov006_0219daa0(0x14);
        } else if (func_ov006_0219f050(e->c) == (uint32_t)-3) {
            func_ov006_0219daa0(0x15);
        } else {
            func_ov006_0219daa0(0x18);
        }
        return -1;
    }
    func_ov006_0219ef6c(data_ov006_021ba89c, 0, 0x6a0);
    if (func_ov006_0219e588(0, e, func_ov006_0219f078(*(uint16_t *)(q + 0xa)),
                            data_ov006_021ba89c, data_ov006_021ba21c) < 0) {
        (*cnt)++;
        return a0;
    }
    if ((data_ov006_021ba1dc[0x2c / 4] & data_ov006_021ba1dc[0x30 / 4]) != 0) {
        *cnt = 0;
        return 2;
    }
    return a0;
}
