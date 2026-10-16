/* cflags: -nothumb -noO4,p -O4 */
#include "ffc/types.h"
extern uint32_t data_ov015_021d7984[];
typedef int (*F1)(uint32_t);
typedef int (*F2)(uint32_t *);
int func_ov015_021d57c4(uint32_t *st, uint8_t *in, uint8_t *out, uint32_t len)
{
    uint32_t i;
    uint32_t prev = 0;
    F1 f1;
    F2 f2;
    if (len & 3) return -1;
    f1 = (F1)(data_ov015_021d7984[0] - 0x3200);
    f2 = (F2)(data_ov015_021d7984[3] - 0x3200);
    for (i = 0; i < len; i += 4) {
        uint8_t *p;
        uint8_t *o;
        uint32_t v;
        int r;
        p = in + i;
        o = out + i;
        r = f1(*(uint32_t *)(in + i));
        if (r == 1 || r == 2) {
            if (r == 1) p[3] ^= 1;
            v = *(uint32_t *)p;
            *(uint32_t *)o = (v & 0xff000000) ^ 0x1000000 | (((v & 0xffffff) + 0xc82) & 0xffffff);
        } else {
            if (r == 3) *(uint32_t *)p ^= 0x1000000;
            *st = (uint32_t)f2(st) ^ p[0]; o[0] = *st;
            *st = (uint32_t)f2(st) ^ p[1]; o[1] = *st;
            *st = (uint32_t)f2(st) ^ p[2]; o[2] = *st;
        }
        prev = (prev ^ p[3]) ;
        o[3] = prev;
        prev &= 0xff;
        *st -= prev;
    }
    return 0;
}
