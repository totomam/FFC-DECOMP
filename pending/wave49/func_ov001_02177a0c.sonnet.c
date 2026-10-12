#include "ffc/types.h"

typedef struct Entry {
    uint32_t id;
    uint32_t zero;
    uint8_t *data;
} Entry;

extern int32_t func_ov001_0217ec8c(void *a, void *b, int32_t c);
extern int32_t func_ov001_0217ed1c(void *a, const void *b, int32_t *c, void *d, uint32_t e);
extern void func_ov001_0217ef50(void *a, int32_t b, const void *c);
extern void func_ov001_021788f0(void *a, int32_t b, int32_t c);
extern int32_t func_02093b18(void *p);
extern int32_t func_02092b00(void *a, const void *b);
extern Entry *func_ov001_0217c87c(void *a, int32_t b);
extern void func_ov001_0217ef6c(void *a, const void *b);
extern void *func_ov000_021653d4(uint32_t n);
extern void func_ov001_0217823c(void *a, int32_t b);
extern const char data_ov001_0219052c[];
extern const char data_ov001_0219035c[];
extern const char data_ov001_02190534[];
extern const char data_ov001_0219053c[];
extern const char data_ov001_02190398[];

int32_t func_ov001_02177a0c(void *a, void *b) {
    int32_t count = 0;
    int8_t buf[0x200];
    int32_t n;
    int32_t k;
    int32_t i;
    int32_t m;
    int32_t j;
    uint32_t *ctx;
    Entry *e;
    uint8_t *rec;
    int8_t c;
    uint32_t old;
    int8_t *s;
    int8_t *p;

    ctx = *(uint32_t **)a;
    if (func_ov001_0217ec8c(a, b, 1) != 0) {
        return 4;
    }
    if (func_ov001_0217ed1c(b, data_ov001_0219052c, &count, buf, 0x200) == 0) {
        func_ov001_0217ef50(a, 1, data_ov001_0219035c);
        func_ov001_021788f0(a, 3, 1);
        return 3;
    }
    p = buf;
    n = func_02093b18(buf);
    s = (int8_t *)func_02092b00(b, data_ov001_02190534);
    if (s == 0) {
        func_ov001_0217ef50(a, 1, data_ov001_0219035c);
        func_ov001_021788f0(a, 3, 1);
        return 3;
    }
    count += 6;
    for (k = 0; k < n; k++) {
        if (k == 0) {
            for (i = 0; i < 0x200; i++) {
                c = s[i + 6];
                if (c == 0 || c == ',') {
                    break;
                }
                p[i] = c;
            }
            buf[i] = 0;
            count += i;
        } else {
            if (func_ov001_0217ed1c(b, data_ov001_0219053c, &count, p, 0x200) == 0) {
                func_ov001_0217ef50(a, 1, data_ov001_0219035c);
                func_ov001_021788f0(a, 3, 1);
                return 3;
            }
        }
        m = func_02093b18(buf);
        e = func_ov001_0217c87c(a, m);
        if (e == 0) {
            func_ov001_0217ef6c(a, data_ov001_02190398);
            return 1;
        }
        e->data = func_ov000_021653d4(0x1c);
        if (e->data == 0) {
            func_ov001_0217ef6c(a, data_ov001_02190398);
            return 1;
        }
        rec = e->data;
        for (j = 0x1c; j != 0; j--) {
            *rec++ = 0;
        }
        old = ctx[0x174];
        ctx[0x174] = old + 1;
        ((uint32_t *)e->data)[0] = old;
        ((uint32_t *)e->data)[1] = 0;
        func_ov001_0217823c(a, m);
    }
    return 0;
}
