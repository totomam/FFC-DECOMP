#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint8_t *w2;
} Str;

extern void *data_020b8e44;
extern uint8_t data_ov011_021cb3ec[];
extern uint8_t data_ov011_021cb3f4[];
extern uint8_t data_ov011_021cb3f8[];
extern uint8_t data_ov011_021cb400[];

extern void *func_020159c8(void *object, uint32_t id);
extern void func_02005988(void *dst, void *src);
extern int32_t func_02030f04(void *a, void *b, uint32_t c);
extern void *func_020059cc(void *object);
extern void func_02009698(void *a, void *b, uint32_t len, void *c);
extern uint32_t func_02005efc(void *object, void *first, uint32_t third);
extern uint32_t func_02005f1c(void *object, void *third);
extern void func_02009678(void *a, void *b);

void func_ov011_021c44c4(void *self, uint32_t id, int32_t count)
{
    Str a48, a3c, a30, a24, a18, t1, t2;
    uint32_t r6;
    uint8_t *p;
    uint32_t n;
    int32_t k;
    int32_t res;
    int i;

    if (count > 0) {
        r6 = 0x103;
    } else {
        r6 = 0x104;
    }

    func_02005988(&a48, func_020159c8(data_020b8e44, id));
    func_02005988(&a3c, data_ov011_021cb3ec);
    func_02005988(&a30, data_ov011_021cb3f4);
    func_02005988(&a24, data_ov011_021cb3f8);
    func_02005988(&a18, data_ov011_021cb400);

    k = 0;
    res = func_02030f04(&a48, &a3c, 0);
    if (res == k - 1) {
        func_020059cc(&a18);
        func_020059cc(&a24);
        func_020059cc(&a30);
        func_020059cc(&a3c);
        func_020059cc(&a48);
        return;
    }

    if (a3c.w0 & 1) {
        n = a3c.w1;
    } else {
        n = (((uint32_t)((uint8_t *)&a3c)[0]) << 24) >> 25;
    }
    func_02009698(&a48, &a3c, n, &a30);

    for (i = 0; i < 3; i++) {
        ((uint32_t *)&t1)[i] = i;
    }

    if (a48.w0 & 1) {
        p = a48.w2;
    } else {
        p = (uint8_t *)&a48 + 1;
    }
    func_02005efc(&t1, p, func_020159c8(data_020b8e44, r6));

    if (t1.w0 & 1) {
        p = t1.w2;
    } else {
        p = (uint8_t *)&t1 + 1;
    }
    func_02005f1c(&a48, p);
    func_020059cc(&t1);

    k = 0;
    res = func_02030f04(&a48, &a24, 0);
    if (res == k - 1) {
        func_020059cc(&a18);
        func_020059cc(&a24);
        func_020059cc(&a30);
        func_020059cc(&a3c);
        func_020059cc(&a48);
        return;
    }

    if (a24.w0 & 1) {
        n = a24.w1;
    } else {
        n = (((uint32_t)((uint8_t *)&a24)[0]) << 24) >> 25;
    }
    func_02009698(&a48, &a24, n, &a18);

    for (i = 0; i < 3; i++) {
        ((uint32_t *)&t2)[i] = i;
    }

    if (count < 0) {
        count = -count;
    }

    if (a48.w0 & 1) {
        p = a48.w2;
    } else {
        p = (uint8_t *)&a48 + 1;
    }
    func_02005efc(&t2, p, count);

    if (t2.w0 & 1) {
        p = t2.w2;
    } else {
        p = (uint8_t *)&t2 + 1;
    }
    func_02005f1c(&a48, p);
    func_020059cc(&t2);

    func_02009678(self, &a48);

    func_020059cc(&a18);
    func_020059cc(&a24);
    func_020059cc(&a30);
    func_020059cc(&a3c);
    func_020059cc(&a48);
}
