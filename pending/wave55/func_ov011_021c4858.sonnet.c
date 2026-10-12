#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t flag;
    uint32_t a;
    uint32_t b;
} Str;

extern uint32_t func_0203608c(void *object);
extern void *func_020363bc(void *object);
extern uint32_t func_02017e14(void *object, uint32_t v);
extern uint32_t func_02005f1c(void *object, uint32_t third);
extern void *func_020159c8(void *object, uint32_t v);
extern uint32_t func_02005efc(void *object, uint32_t first, ...);
extern uint32_t func_0201a3a0(void *object, const void *third);
extern void *func_0205681c(uint32_t size);
extern void func_020095b8(void *a, void *b);
extern void *func_02032d24(void *obj, Pair v, void *c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *data_020b8e44;

void func_ov011_021c4858(void *param)
{
    uint8_t *p = (uint8_t *)param;
    Str s48;
    Str s3c;
    Str s30;
    Str s24;
    Pair pr;
    uint32_t v18;
    uint32_t v14;
    uint16_t count;
    uint32_t last;
    uint16_t i;
    uint8_t *o;
    uint32_t off = 0x108;
    uint32_t k;
    uint16_t t;
    uint32_t res;
    void *r5;
    int r7;

    v18 = func_0203608c(p + off);
    v14 = func_0203608c(p + (off + 0x60));
    if (v14 <= v18) {
        return;
    }
    o = func_020363bc(p + off);
    i = 0;
    count = (uint16_t)*(uint32_t *)(o + 0x94);
    if (count == 0) {
        return;
    }
    last = count - 1;
    do {
        t = ((uint16_t *)(o + *(uint32_t *)(o + 0xa0)))[i];
        if (v14 < t) {
            return;
        }
        if (v18 < t) {
            for (k = 0; k < 3; k++) {
                ((uint32_t *)&s48)[k] = 0;
            }
            res = func_02017e14(data_020b8e44, ((uint16_t *)(o + *(uint32_t *)(o + 0x98)))[i]);
            func_02005f1c(&s48, res);
            for (k = 0; k < 3; k++) {
                ((uint32_t *)&s3c)[k] = 0;
            }
            for (k = 0; k < 3; k++) {
                ((uint32_t *)&s30)[k] = 0;
            }
            if (s48.flag & 1) {
                r5 = (void *)s48.b;
            } else {
                r5 = (uint8_t *)&s48 + 1;
            }
            res = func_020159c8(data_020b8e44, 0x100);
            func_02005efc(&s30, res, r5);
            if (s30.flag & 1) {
                res = s30.b;
            } else {
                res = (uint32_t)((uint8_t *)&s30 + 1);
            }
            func_0201a3a0(&s3c, (const void *)res);
            if (i == last) {
                res = (uint32_t)func_020159c8(data_020b8e44, 0x101);
                func_0201a3a0(&s3c, (const void *)res);
            }
            r7 = 0;
            r5 = func_0205681c(0xb0);
            if (r5 != 0) {
                func_020095b8(&s24, &s3c);
                pr.a = 0x80;
                pr.b = 0x60;
                r5 = func_02032d24(r5, pr, &s24, 4, 0);
                r7 = 1;
            }
            func_02056bc0(p + 0x14, r5);
            if (r7 != 0) {
                func_020059cc(&s24);
            }
            func_020059cc(&s30);
            func_020059cc(&s3c);
            func_020059cc(&s48);
        }
        i = (uint16_t)(i + 1);
    } while (i < count);
}
