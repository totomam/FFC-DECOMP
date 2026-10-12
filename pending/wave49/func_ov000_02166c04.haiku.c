#include "ffc/types.h"

extern uint32_t *func_ov000_02166414(uint32_t a);
extern void func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, const void *d);
extern uint32_t func_ov000_0216888c(uint32_t obj, const void *key, void (*cmp)(void), uint32_t z1, uint32_t z2);
extern uint32_t *func_ov000_0216876c(uint32_t obj, uint32_t idx);
extern uint32_t func_ov001_021807fc(uint32_t x);
extern void func_ov000_02168784(uint32_t x, const void *y);
extern void func_ov001_021821ac(uint32_t a, uint32_t b, void *c);
extern void func_ov001_02180638(uint32_t a, void *b, void *c, const uint8_t *d, uint32_t e, uint32_t f, void *g, uint32_t h);
extern uint32_t func_ov000_02168768(uint32_t obj);
extern void func_ov000_02166444(void);
extern void func_ov000_02166428(void);
extern void func_ov000_021664c4(void);
extern void func_ov000_021665c8(void);
extern void func_ov000_02166768(void);
extern void func_ov000_02166828(void);
extern const char data_ov000_0216b7fc[];
extern const char data_ov000_0216b824[];
extern const char data_ov000_0216b858[];

int func_ov000_02166c04(uint32_t a, uint32_t b, const uint8_t *c, uint32_t d)
{
    struct {
        uint32_t a;
        uint16_t b;
    } key;
    uint8_t buf28[16];
    void (*tbl[4])(void);
    uint32_t v6c;
    uint8_t buf70[24];
    uint32_t *r4;
    uint32_t *tmp;
    uint32_t idx;
    uint32_t t;
    uint8_t *q;
    int n;

    r4 = func_ov000_02166414(a);
    if (r4[3] == 0) {
        func_ov000_021652a8(12, 0, 15, data_ov000_0216b7fc);
        return 3;
    }
    if (a == 0 || b == 0) {
        func_ov000_021652a8(12, 0, 15, data_ov000_0216b824);
        return 10;
    }
    key.a = a;
    key.b = (uint16_t)b;
    idx = func_ov000_0216888c(r4[1], &key, func_ov000_02166444, 0, 0);
    if (idx != (uint32_t)-1) {
        a = (uint32_t)func_ov000_0216876c(r4[1], idx);
        t = func_ov001_021807fc(((uint32_t *)a)[2]);
        if (t == 1) {
            func_ov000_021652a8(12, 0, 15, data_ov000_0216b858);
            return 5;
        }
        if (t == 0) {
            q = buf28;
            n = 16;
            do {
                *q++ = *c++;
            } while (--n);
            idx = func_ov000_0216888c(r4[2], buf28, func_ov000_02166428, 0, 0);
            if (idx != (uint32_t)-1) {
                func_ov000_02168784(func_ov000_0216876c(r4[2], idx)[8], (void *)a);
            }
        }
        return 0;
    } else {
        func_ov001_021821ac(a, b, buf70);
        tbl[2] = func_ov000_021664c4;
        tbl[0] = func_ov000_021665c8;
        tbl[3] = func_ov000_02166768;
        tbl[1] = func_ov000_02166828;
        func_ov001_02180638(r4[0], &v6c, buf70, c, 16, d, tbl, 0);
        func_ov000_02168784(r4[1], &key);
        q = buf28;
        n = 16;
        do {
            *q++ = *c++;
        } while (--n);
        idx = func_ov000_0216888c(r4[2], buf28, func_ov000_02166428, 0, 0);
        if (idx == (uint32_t)-1) {
            r4[12]++;
        } else {
            tmp = func_ov000_0216876c(r4[1], func_ov000_02168768(r4[1]) - 1);
            func_ov000_02168784(func_ov000_0216876c(r4[2], idx)[8], &tmp);
        }
        return 0;
    }
}
