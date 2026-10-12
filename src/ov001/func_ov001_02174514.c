#include "ffc/types.h"

extern int func_02092a04(char *s, const char *prefix, int n);
extern int func_02092a84(char *s, const char *set);
extern void *func_ov000_021658c0(char *s);
extern uint16_t func_02093b18(char *s);
extern char *func_02092a2c(char *s, int c);
extern const char data_ov001_0218fd70[];
extern const char data_ov001_0218fd78[];
extern const char data_ov001_0218fd84[];
extern const char data_ov001_0218fd88[];

typedef struct {
    uint8_t pad[0x14];
    char *text;
    void *a18;
    uint8_t pad3[4];
    uint16_t a20;
    uint8_t pad2[2];
    char *a24;
    int kind;
} Rec;

int func_ov001_02174514(Rec *r) {
    char *s;
    char saved;
    char *p;
    int m;
    int sp;
    int ret;
    char pl;

    if (!r) {
        return 0;
    }
    s = r->text;
    if (!s) {
        return 0;
    }
    if (func_02092a04(s, data_ov001_0218fd70, 7) == 0) {
        r->kind = 0;
        s += 7;
    } else if (func_02092a04(s, data_ov001_0218fd78, 8) == 0) {
        r->kind = 1;
        s += 8;
    } else {
        return 0;
    }

    m = func_02092a84(s, data_ov001_0218fd84);
    saved = s[m];
    s[m] = 0;
    r->a18 = func_ov000_021658c0(s);
    if (!r->a18) {
        return 0;
    }
    s[m] = saved;
    s += m;

    if (*s == ':') {
        s++;
        r->a20 = func_02093b18(s);
        if (!r->a20) {
            return 0;
        }
        do {
            s++;
        } while (*s != 0 && *s != '/');
    } else {
        if (r->kind == 1) {
            r->a20 = 0x1bb;
        } else {
            r->a20 = 0x50;
        }
    }

    if (*s == 0) {
        s = (char *)data_ov001_0218fd88;
    }
    s = func_ov000_021658c0(s);
    r->a24 = s;
    p = func_02092a2c(s, 0x20);
    if (p != 0) {
        sp = 0x20;
        pl = '+';
        do {
            *p = pl;
            s = r->a24;
            p = func_02092a2c(s, sp);
        } while (p != 0);
    }
    ret = 0;
    if (s != 0) {
        ret = 1;
    }
    return ret;
}
