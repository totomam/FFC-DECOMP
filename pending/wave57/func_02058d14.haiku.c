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

void func_02058d14(void *self)
{
    uint8_t *b = (uint8_t *)self;
    uint32_t *w = (uint32_t *)self;
    uint8_t r7 = b[0x24];
    uint32_t a14 = w[5];
    uint32_t a20 = w[8];
    uint32_t a1c = w[7];
    uint32_t a18 = w[6];
    uint32_t ret;
    uint32_t tmp;

    if (a14 == 0) {
        if (data_020b055c != 0 && ((uint8_t *)&data_0213e018)[3] == 0 && (a20 & 0x1f) == 0) {
            func_020878ac(a18, a20);
            func_020878ac(a1c, a20);
            if ((a20 | a18 | a1c) & 3) {
                func_020845a8(3, a18, a1c, a20, 1);
            } else {
                func_020844ec(3, a18, a1c, a20, 1);
            }
        } else {
            if ((a20 | a18 | a1c) & 3) {
                func_020849c4(a18, a1c, a20);
            } else if ((a20 & 0x1f) != 0) {
                func_020849f4(a18, a1c, a20);
            } else {
                func_02084a58(a18, a1c, a20);
            }
        }
    } else {
        tmp = 0;
        *(uint8_t *)&tmp = 0;
        tmp = (tmp & ~0x1fu) | 0x80u;
        ret = func_0204f804(data_0213df18, a14, tmp);
        if (data_020b055c != 0 && ((uint8_t *)&data_0213e018)[3] == 0 && (a20 & 0x1f) == 0) {
            func_020878ac(a18, a20);
            func_020878ac(a1c, a20);
            if ((a20 | a18 | a1c) & 3) {
                func_020845a8(3, a18, a1c, a20, 1);
            } else {
                func_020844ec(3, a18, a1c, a20, 1);
            }
            func_02084774(3);
        } else {
            if ((a20 | a18 | a1c) & 3) {
                func_020849c4(a18, a1c, a20);
            } else if ((a20 & 0x1f) != 0) {
                func_020849f4(a18, a1c, a20);
            } else {
                func_02084a58(a18, a1c, a20);
            }
        }
        func_0204f804(data_0213df18, a14, ret);
    }
    if (r7 != 0) {
        func_02056858(a18);
    }
}
