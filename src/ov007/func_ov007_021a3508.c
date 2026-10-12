#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_020559d4(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, int id);
extern void func_02005988(void *dst, void *src);
extern void *func_02032d24(void *p, Pair cfg, void *c, uint32_t d, uint32_t e);
extern void func_020059cc(void *object);
extern void func_ov007_021a3d24(void *x);
extern void *func_02056aec(void *object);
extern void func_02056bc0(void *object, void *node);
extern void func_ov007_021a36cc(void *a, void *b);
extern void *data_020b8e44;

void func_ov007_021a3508(void *param)
{
    uint8_t *s = (uint8_t *)param;
    uint8_t *d;
    uint8_t *t;
    uint8_t buf[12];
    void *r6;
    void *n;
    void *v;
    int flag;
    int zero;

    func_020559d4((uint8_t *)(*(void **)(s + 0xc8)) + 0xb8);
    func_020559d4(s + 0x80);

    d = *(uint8_t **)(s + 0xd0);
    if (*(uint32_t *)(d + 0xb8) != 2) {
        zero = 0;
        flag = 0;
        r6 = func_0205681c(0xb0);
        if (r6 != 0) {
            Pair pair;
            v = func_020159c8(data_020b8e44, 0x2d);
            func_02005988(buf, v);
            pair.a = 0x80;
            pair.b = 0x60;
            flag = 1;
            r6 = func_02032d24(r6, pair, buf, 4, zero);
        }
        if (flag) {
            func_020059cc(buf);
        }
        func_ov007_021a3d24(*(void **)(s + 0xc8));
        n = func_02056aec(s);
        t = s + 0x14;
        func_02056bc0(t, r6);
        func_02056bc0(t, n);
    } else {
        func_ov007_021a36cc(*(void **)(s + 0xc8), *(void **)(d + 0xa4));
        n = func_02056aec(s);
        s += 0x14;
        func_02056bc0(s, n);
    }
}
