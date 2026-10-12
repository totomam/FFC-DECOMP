#include "ffc/types.h"

extern uint32_t func_0204f7ec(const void *object);
extern uint32_t func_0201c218(void *a, uint32_t b);
extern uint32_t func_0201bf6c(void *a, uint32_t b);
extern void func_0203919c(void *out, uint32_t arg);
extern void func_02050ea4(void *out, void *src, uint32_t n);
typedef struct { uint8_t b; } FB;
extern void *func_020059cc(void *object);
extern void func_020095b8(void *dst, const void *src);
extern void func_0200b34c(void *dst, uint32_t idx, void *src);
extern void func_0200b618(void *vec, void *src, FB flag);
extern void *func_0205681c(uint32_t size);
extern void *func_02031624(void *obj, void *ctx, uint32_t a, uint32_t b, void *vec, uint32_t c, uint32_t d);
extern void func_020424e0(uint32_t x);
extern uint32_t func_ov003_021464ac(void);
extern void *func_0203be48(uint32_t obj, void *tmp, uint32_t a, uint32_t b);
extern void func_0200ac64(void *obj, void *ctx, uint32_t a, uint32_t b, void *vec, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern void func_0200958c(void *v);
extern void func_0200b630(void *v);
extern void func_0201c210(uint32_t a, uint32_t b, uint32_t c);
extern void func_0201bf5c(uint32_t a, uint32_t b, uint32_t c);

extern void *data_0213df18;
extern uint32_t data_0213df20;
extern uint32_t data_020b93b8;
extern uint32_t data_020a7c3c[2];
extern uint32_t data_020a7c44[2];

typedef struct {
    void *base;
    uint32_t n;
    uint32_t cap;
} Vec;

void func_ov003_021661b0(uint8_t *p)
{
    uint32_t state;
    uint32_t old;
    uint32_t r;
    uint32_t i;
    uint8_t obj40[12];
    Vec v4c;
    Vec v58;
    uint8_t t24[12];
    uint8_t t34[12];
    uint8_t t18[12];
    void *obj;
    FB flag;
    volatile uint8_t padv[8];
    uint32_t pad[2];

    state = *(uint32_t *)(p + 0x90);
    *(uint32_t *)(p + 0x90) = *(uint32_t *)(p + 0x90) + 1;

    switch (state) {
    case 0:
        break;
    case 1: {
        r = func_0204f7ec(data_0213df18);
        old = data_0213df20;
        data_0213df20 = r;

        if (*(uint8_t *)(p + 0x9c)) {
            r = func_0201c218(data_020b93b8, *(uint32_t *)(p + 0x84));
        } else {
            r = func_0201bf6c(data_020b93b8, *(uint32_t *)(p + 0x84));
        }
        *(uint32_t *)(p + 0x94) = r;

        v58.base = 0;
        v58.n = 0;
        v58.cap = 0;

        func_0203919c(obj40, *(uint32_t *)(p + 0x88));
        func_02050ea4(&v4c, obj40, 10);
        func_020059cc(obj40);

        for (i = 0; i < v4c.n; i++) {
            func_020095b8(t34, (uint8_t *)v4c.base + i * 12);
            func_0200b34c(t24, i, t34);
            if (v58.n < v58.cap) {
                uint8_t *dst = (uint8_t *)v58.base + v58.n * 16;
                if (dst != 0) {
                    *(uint32_t *)dst = *(uint32_t *)t24;
                    func_020095b8(dst + 4, t24 + 4);
                }
                v58.n++;
            } else {
                flag.b = 0; padv[0]=0;
                func_0200b618(&v58, t24, flag);
            }
            func_020059cc(t24 + 4);
            func_020059cc(t34);
        }

        if (*(uint32_t *)(p + 0x8c) == 0) {
            obj = func_0205681c(0x118);
            if (obj != 0) {
                obj = func_02031624(obj, p + 0x94, data_020a7c3c[0], data_020a7c3c[1], &v58, 1, 0);
            }
            func_02056bc0(p + 0x14, obj);
        } else {
            func_0203919c(t18, *(uint32_t *)(p + 0x8c));
            func_020424e0(*(uint32_t *)(p + 0x80));
            r = func_ov003_021464ac();
            obj = func_0203be48(data_0213df20, t18, r, 0);
            func_020059cc(t18);
            func_0200ac64(obj, p + 0x94, data_020a7c44[0], data_020a7c44[1], &v58, 3);
            func_02056bc0(p + 0x14, obj);
        }

        func_0200958c(&v4c);
        func_0200b630(&v58);
        data_0213df20 = old;
        break;
    }
    case 2: {
        if (*(uint8_t *)(p + 0x9c)) {
            func_0201c210(data_020b93b8, *(uint32_t *)(p + 0x84), *(uint32_t *)(p + 0x94));
        } else {
            r = (*(uint32_t *)(p + 0x94) == 1);
            func_0201bf5c(data_020b93b8, *(uint32_t *)(p + 0x84), r);
        }
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
        break;
    }
    }
}
