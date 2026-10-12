#include "ffc/types.h"

extern void func_02056c4c(void *object);
extern uint32_t func_02035ff4(void *object);
extern uint32_t func_02036350(void *object);
extern void func_02005988(void *dst, const void *src);
extern void func_02068ddc(void *object, void *arg);
extern void *func_020059cc(void *object);
extern void *func_020363bc(const void *object);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern uint32_t func_0205681c(uint32_t arg);
extern void *func_02005858(uint32_t a, void *b, void *c, uint32_t d, uint32_t e);
extern void func_0205f518(void *object, uint32_t a, uint32_t b);
extern void func_0205f3e0(void *object, uint32_t a);
extern void func_0205f498(void *object);
extern void func_02056bc0(void *object, void *node);
extern int16_t func_0203c410(const int16_t *values, uint32_t index);

extern uint8_t data_ov009_021aff5c[];
extern uint8_t data_ov009_021aff60[];
extern uint32_t data_0213df18;
extern uint8_t data_ov009_021aff7c[];
extern uint8_t data_ov009_021aff84[];
extern uint8_t data_ov009_021aff8c[];
extern uint8_t data_ov009_021aff94[];

void func_ov009_0219ccc0(uint8_t *self, uint8_t *param)
{
    uint8_t b24[12];
    uint8_t b18[12];
    uint8_t b0c[12];
    uint8_t b30[8];
    uint8_t b40[0x40];
    uint8_t *pp;
    uint32_t off;
    uint32_t i;
    void *o;
    uint32_t kind;
    uint32_t t;
    uint8_t *q;
    void *res;
    void *x;
    uint32_t r;

    pp = param;
    func_02056c4c(*(void **)(self + 0x208));
    if (func_02035ff4(self + 0x18C) == 0) {
        return;
    }
    if (func_02036350(self + 0x18C) != 0) {
        for (i = 0; i < 4; i++) {
            func_02005988(b24, data_ov009_021aff5c);
            func_02068ddc(*(void **)(self + 0xfc + i * 4), b24);
            func_020059cc(b24);
        }
        return;
    }

    o = func_020363bc(self + 0x18C);
    t = *(uint32_t *)((uint8_t *)o + 0xa4);
    q = t ? (uint8_t *)o + t : 0;
    if (q) {
        kind = 0;
    } else {
        t = *(uint32_t *)((uint8_t *)o + 0xa8);
        q = t ? (uint8_t *)o + t : 0;
        if (q) {
            kind = 1;
        } else {
            kind = 3;
        }
    }

    if (kind == 3) {
        for (i = 0; i < 4; i++) {
            func_02005988(b0c, data_ov009_021aff94);
            func_02068ddc(*(void **)(self + 0xfc + i * 4), b0c);
            func_020059cc(b0c);
        }
        return;
    }

    pp += 0x14;
    off = kind << 3;
    func_02091b10(b40, (uint32_t)data_ov009_021aff60);

    r = func_0205681c(0x54);
    res = 0;
    if (r != 0) {
        if (self[0x204] == 0) {
            res = func_02005858(r, *(void **)(*(uint8_t **)&data_0213df18 + 0x20), b40, 1, 0);
        } else {
            res = func_02005858(r, *(void **)(*(uint8_t **)&data_0213df18 + 0x24), b40, 1, 0);
        }
    }
    *(void **)(self + 0x20c) = res;

    x = *(void **)(*(uint8_t **)((uint8_t *)res + 0x50) + 0x94);
    func_0205f518(x, 0xc0, 0x3c);
    x = *(void **)(*(uint8_t **)((uint8_t *)*(void **)(self + 0x20c)) + 0x50);
    x = *(void **)((uint8_t *)x + 0x94);
    func_0205f3e0(x, 3);
    x = *(void **)(*(uint8_t **)((uint8_t *)*(void **)(self + 0x20c)) + 0x50);
    x = *(void **)((uint8_t *)x + 0x94);
    func_0205f498(x);

    func_02056bc0(*(void **)(self + 0x208), *(void **)(self + 0x20c));

    for (i = 0; i < 4; i++) {
        int32_t v;
        int32_t a;
        int8_t add;
        v = func_0203c410((const int16_t *)(pp + off), i);
        a = 0;
        if (v > 0) {
            a = 0x40;
        } else if (v < 0) {
            a = 0x20;
            v = -v;
        }
        add = (int8_t)a;
        if (v == 0) {
            b30[0] = data_ov009_021aff8c[0];
            b30[1] = data_ov009_021aff8c[1];
            b30[2] = data_ov009_021aff8c[2];
            b30[3] = data_ov009_021aff8c[3];
            b30[4] = data_ov009_021aff8c[4];
        } else if (v < 10) {
            func_02091b10(b30, (uint32_t)data_ov009_021aff7c);
            ((int8_t *)b30)[0] = (int8_t)(((int8_t *)b30)[0] + add);
            ((int8_t *)b30)[2] = (int8_t)(((int8_t *)b30)[2] + add);
            ((int8_t *)b30)[3] = (int8_t)(((int8_t *)b30)[3] + add);
        } else {
            func_02091b10(b30, (uint32_t)data_ov009_021aff84);
            ((int8_t *)b30)[0] = (int8_t)(((int8_t *)b30)[0] + add);
            ((int8_t *)b30)[1] = (int8_t)(((int8_t *)b30)[1] + add);
        }
        func_02005988(b18, b30);
        func_02068ddc(*(void **)(self + 0xfc + i * 4), b18);
        func_020059cc(b18);
    }
}
