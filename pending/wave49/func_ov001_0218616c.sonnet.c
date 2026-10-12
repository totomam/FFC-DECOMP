#include "ffc/types.h"

extern int func_ov001_02186e30(const char *text, int len);
extern uint32_t func_02092864(const void *text);
extern int func_02097044(const void *obj, const char *text, uint32_t n);
extern int func_ov000_021652a8(int a, int b, int c, const void *fmt, ...);
extern int func_ov001_02185448(const char *name);
extern void func_ov001_02185df4(void *obj, const char *a, const char *b);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern char data_ov001_02194248[];
extern char data_ov001_02194254[];
extern char data_ov001_02194240[];
extern char data_ov001_02194288[];

void func_ov001_0218616c(uint8_t *obj, const char *s, int len)
{
    int flag = 0;
    const char *start;
    int code;
    const char *q;
    int n;
    const char *saved;
    int r6;
    uint8_t c;
    uint8_t buf[0x80];

    if (s[flag] == 0) {
        return;
    }
    n = func_ov001_02186e30(s, len);
    if (n < 0) {
        return;
    }
    start = s;
    s += n;
    len -= n;
    if (func_02097044(data_ov001_02194248, start, func_02092864(data_ov001_02194248)) != 0) {
        return;
    }
    if (len < 1) {
        return;
    }
    c = *s;
    s++;
    len--;
    if ((c & 0x80) == 0x80) {
        flag = 1;
        c ^= 0x80;
    }
    if (c > 7) {
        return;
    }
    if (flag == 1) {
        obj[0x28] = obj[0x28] | (uint8_t)(int8_t)(0xff << c);
    } else {
        obj[0x28] = obj[0x28] | (uint8_t)(1 << c);
    }
    if (len < 1) {
        return;
    }
    while (len > 0) {
        code = *s;
        s++;
        len--;
        if (code < 0 || code > 2) {
            func_ov000_021652a8(4, 0, 2, data_ov001_02194254, code);
            return;
        }
        if (*s != 0) {
            do {
                n = func_ov001_02186e30(s, len);
                if (n < 0) {
                    return;
                }
                saved = s;
                s += n;
                len -= n;
                if (code == 0) {
                    n = func_ov001_02186e30(s, len);
                    if (n < 0) {
                        return;
                    }
                    q = s;
                    s += n;
                    len -= n;
                    if (func_ov001_02185448(saved) == 0) {
                        func_ov001_02185df4(obj, saved, q);
                    }
                } else {
                    if (len < 1) {
                        return;
                    }
                    r6 = *s;
                    s++;
                    len--;
                    while (*s != 0) {
                        n = func_ov001_02186e30(s, len);
                        if (n < 0) {
                            return;
                        }
                        start = s;
                        s += n;
                        len -= n;
                        func_02086ad4(buf, (uint32_t)data_ov001_02194240, saved, r6);
                        func_ov001_02185df4(obj, (const char *)buf, start);
                        r6++;
                    }
                    if (len > 0) {
                        s++;
                        len--;
                    }
                }
            } while (*s != 0);
        }
        if (len > 0) {
            if (*s != 0) {
                func_ov000_021652a8(4, 0, 2, data_ov001_02194288);
                return;
            }
            s++;
            len--;
        }
    }
}
