#include "ffc/types.h"

extern void func_020849c4(uint32_t a, uint32_t b, uint32_t c);
extern void func_020849f4(uint32_t a, uint32_t b, uint32_t c);
extern void func_02084a58(uint32_t a, uint32_t b, uint32_t c);
extern void func_020878ac(uint32_t a, uint32_t b);
extern void func_020845a8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_020844ec(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern uint32_t func_0204f804(uint32_t a, uint32_t b, uint32_t c);
extern void func_02084774(uint32_t a);
extern void func_02056858(uint32_t a);
extern uint8_t data_020b055c;
extern uint8_t data_0213e018;
extern uint32_t data_0213df18;

static inline void disp(uint32_t a18,uint32_t a1c,uint32_t a20,int post)
{
    if (data_020b055c == 0 || ((uint8_t *)&data_0213e018)[3] != 0 || (a20 & 0x1f) != 0) {
        if (((a18 | a1c) | a20) & 3) {
            func_020849c4(a18, a1c, a20);
        } else if ((a20 & 0x1f) != 0) {
            func_020849f4(a18, a1c, a20);
        } else {
            func_02084a58(a18, a1c, a20);
        }
    } else {
        func_020878ac(a18, a20);
        func_020878ac(a1c, a20);
        if (((a18 | a1c) | a20) & 3) {
            func_020845a8(3, a18, a1c, a20, 1);
        } else {
            func_020844ec(3, a18, a1c, a20, 1);
        }
        if (post) func_02084774(3);
    }
}

void func_02058d14(void *self)
{
    uint8_t *b = (uint8_t *)self;
    uint32_t *w = (uint32_t *)self;
    uint32_t buf[5];
    uint8_t flag;
    uint32_t a14, a18, a20, a1c;

    flag = b[0x24];
    a14 = w[5];
    a20 = w[8];
    a1c = w[7];
    a18 = w[6];

    if (a14 == 0) {
        disp(a18, a1c, a20, 0);
    } else {
        ((uint8_t *)buf)[0x10] = 0;
        buf[4] = (buf[4] & ~0x1fu) | 0x80u;
        buf[1] = a14;
        buf[2] = func_0204f804(data_0213df18, buf[1], buf[4]);
        disp(a18, a1c, a20, 1);
        func_0204f804(data_0213df18, buf[1], buf[2]);
    }
    if (flag != 0) {
        func_02056858(a18);
    }
}
