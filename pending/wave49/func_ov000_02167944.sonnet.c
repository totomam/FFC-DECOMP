#include "ffc/types.h"

extern int func_02092a04(const void *a, const void *b, uint32_t n);
extern int8_t *func_02092a2c(int8_t *text, uint32_t character);
extern void func_0208bf10(int8_t *p, const void *fmt, uint32_t *out);
extern uint32_t func_02093b18(int8_t *p);
extern void func_02090398(int8_t *dst, int8_t *src, int n);
extern void *func_020903cc(int8_t *obj, int c, int n);

extern int8_t data_ov000_0216bb7c[];
extern int8_t data_ov000_0216bb84[];
extern int8_t data_ov000_0216bb8c[];
extern int8_t data_ov000_0216bb94[];
extern int8_t data_ov000_0216bb9c[];
extern int8_t data_ov000_0216bba4[];
extern int8_t data_ov000_0216bba8[];
extern int8_t data_ov000_0216bbb0[];

int func_ov000_02167944(int8_t *text, int *plen)
{
    int i = 0;
    int removed = 0;
    int len7 = 0;

    while (i < *plen) {
        if (text[i] != '&') {
            i++;
        } else {
            removed = 5;
            if (func_02092a04(text + i, data_ov000_0216bb7c, removed) == 0) {
                text[i] = '&';
                i++;
                removed = 4;
            } else {
                len7 = 6;
                if (func_02092a04(text + i, data_ov000_0216bb84, len7) == 0) {
                    text[i] = '"';
                    i++;
                } else if (func_02092a04(text + i, data_ov000_0216bb8c, len7) == 0) {
                    text[i] = '\'';
                    i++;
                } else {
                    removed = 4;
                    if (func_02092a04(text + i, data_ov000_0216bb94, removed) == 0) {
                        text[i] = '<';
                        i++;
                        removed = 3;
                    } else if (func_02092a04(text + i, data_ov000_0216bb9c, removed) == 0) {
                        text[i] = '>';
                        i++;
                        removed = 3;
                    } else if (func_02092a04(text + i, data_ov000_0216bba4, 3) == 0) {
                        int8_t *semi;
                        uint32_t val = 0;
                        uint32_t mask = 0xff000000u;
                        int base = i + 3;
                        int8_t *bp;
                        int j;
                        int wrote = 0;

                        semi = func_02092a2c(text + base, ';');
                        if (semi == 0) {
                            return 0;
                        }
                        if ((semi - (text + base)) > 8) {
                            return 0;
                        }
                        func_0208bf10(text + base, data_ov000_0216bba8, &val);
                        for (j = 0; j < 4; j++) {
                            int8_t b = (int8_t)((val & mask) >> ((3 - j) * 8));
                            if (wrote || b != 0) {
                                text[i] = b;
                                i++;
                                wrote = 1;
                            }
                            mask >>= 8;
                        }
                        removed = (int)(semi - (text + i)) + 1;
                    } else if (func_02092a04(text + i, data_ov000_0216bbb0, 2) == 0) {
                        int8_t *semi;
                        uint32_t val;
                        uint32_t mask = 0xff000000u;
                        int base = i + 2;
                        int8_t *bp;
                        int j;
                        int wrote = 0;

                        semi = func_02092a2c(text + base, ';');
                        if (semi == 0) {
                            return 0;
                        }
                        val = func_02093b18(text + base);
                        for (j = 0; j < 4; j++) {
                            int8_t b = (int8_t)((val & mask) >> ((3 - j) * 8));
                            if (wrote || b != 0) {
                                text[i] = b;
                                i++;
                                wrote = 1;
                            }
                            mask >>= 8;
                        }
                        removed = (int)(semi - (text + i)) + 1;
                    } else {
                        return 0;
                    }
                }
            }

            int e = i + removed;
            func_02090398(text + i, text + e, *plen - e);
            func_020903cc(text + (*plen - removed), 0x20, removed);
            *plen = *plen - removed;
        }
    }
    return 1;
}
