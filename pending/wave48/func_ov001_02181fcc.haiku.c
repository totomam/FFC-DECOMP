#include "ffc/types.h"

extern void func_ov001_021822f8(int32_t *c, int32_t *e);
extern int32_t func_ov000_02165724(int32_t h);
extern int32_t func_ov000_0216552c(int32_t h, int32_t c, int32_t e, int32_t z, uint32_t *m, int32_t len);
extern int32_t func_ov000_021655a0(int32_t h);
extern int32_t func_ov001_021813cc(int32_t *p, int32_t a, int32_t b);
extern int32_t func_ov001_0218145c(int32_t *p, int32_t a, int32_t b, int32_t f);
extern void func_ov001_02182188(int32_t *p);
extern int32_t func_ov001_02181c3c(int32_t *p, int32_t a, int32_t b);
extern int32_t func_ov001_021801a4(int32_t *p, int32_t r, int32_t a, int32_t b, int32_t z, int32_t c, int32_t e, int32_t one);

int32_t func_ov001_02181fcc(int32_t *p, int32_t a, int32_t b, int32_t c, int32_t e)
{
    uint32_t msg[2];

    func_ov001_021822f8(&c, &e);
    if (p[0x40 / 4] != 3) {
        if (func_ov000_02165724(p[0]) == 0) {
            return 1;
        }
    }
    msg[1] = a;
    msg[0] = 0;
    ((uint8_t *)msg)[1] = 2;
    msg[1] = a;
    ((uint8_t *)msg)[2] = (uint8_t)(b >> 8);
    ((uint8_t *)msg)[3] = (uint8_t)b;
    if (func_ov000_0216552c(p[0], c, e, 0, msg, 8) == -1) {
        int32_t st = func_ov000_021655a0(p[0]);
        if (st == -15) {
            return func_ov001_021813cc(p, a, b) != 0;
        }
        if (st == -23) {
            return func_ov001_0218145c(p, a, b, 1) != 0;
        }
        if (st == -42 || st == -6 || st == -35) {
            return 1;
        }
        func_ov001_02182188(p);
        return 0;
    }
    if (p[0x28 / 4] == 0) {
        return 1;
    }
    return func_ov001_021801a4(p, func_ov001_02181c3c(p, a, b), a, b, 0, c, e, 1) != 0;
}
