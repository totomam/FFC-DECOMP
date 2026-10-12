#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    void *f4;
    uint32_t f8;
    uint8_t f0c;
} Obj;

extern void func_02016f8c(Obj *obj, void *src, uint32_t a);
extern uint8_t *func_02052d90(void *mar, uint32_t index);
extern void func_0201afbc(void *g, void *out);
extern uint32_t func_02068b30(void *p);
extern void *func_0200a678(void *object);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void func_02037370(Obj *obj, void *a, void *b, uint32_t c);
extern void func_02005988(void *dst, void *src);
extern void func_020511e8(void *dst, void *src);
extern void func_0200a7b0(void *dst, void *src);
extern void func_020059cc(void *object);
extern void func_02068b70(void *p, uint32_t c);
extern void *data_020b8e44;
extern void *data_020b93b8;

void func_020371dc(void *p0, void *p1, uint32_t p2) {
    Obj obj;
    uint32_t s[3];
    uint8_t buf[0x2c];
    uint32_t tA[3];
    uint32_t tB[3];
    uint32_t tC[3];
    uint32_t tDx[7];
    uint32_t *tD = tDx + 4;
    uint32_t cnt, c, i, j;
    uint8_t *X, *Z;
    uint16_t *ptr, *end;
    uint32_t len;

    func_02016f8c(&obj, data_020b8e44, p2);
    X = func_02052d90(obj.f4, obj.f8);
    cnt = *(uint32_t *)(X + 8);
    i = 0;
    for (j = 0; j < 3; j++) {
        s[j] = i;
    }
    func_0201afbc(data_020b93b8, buf);
    c = func_02068b30(p0);

    if (c < '0' || c > '9') {
        func_0200a678(s);
        if (obj.f4 != 0) {
            if (obj.f0c) {
                func_02052d3c(obj.f4, (void *)obj.f8);
            }
            func_02052c04(obj.f4);
        }
        func_02053290(&obj);
        return;
    }
    if (cnt != 0) {
        c -= '0';
        do {
            X = func_02052d90(obj.f4, obj.f8);
            uint32_t off = *(uint32_t *)(X + 0xc);
            uint32_t e = *(uint32_t *)(X + off + i * 4);
            int16_t v = *(int16_t *)(X + e);
            if (c == (uint32_t)(int32_t)v) {
                if (p1 != 0) {
                    func_02037370(&obj, p0, p1, p2);
                }
                if ((*(uint32_t *)(buf + 0x14)) & 1) {
                    X = func_02052d90(obj.f4, obj.f8);
                    off = *(uint32_t *)(X + 0xc);
                    e = *(uint32_t *)(X + off + i * 4);
                    Z = X + e;
                    func_02005988(tC, Z + *(uint32_t *)(Z + 8));
                    func_020511e8(tD, tC);
                    func_0200a7b0(s, tD);
                    func_0200a678(tD);
                    func_020059cc(tC);
                } else {
                    X = func_02052d90(obj.f4, obj.f8);
                    off = *(uint32_t *)(X + 0xc);
                    e = *(uint32_t *)(X + off + i * 4);
                    Z = X + e;
                    func_02005988(tA, Z + *(uint32_t *)(Z + 4));
                    func_020511e8(tB, tA);
                    func_0200a7b0(s, tB);
                    func_0200a678(tB);
                    func_020059cc(tA);
                }
            }
            i++;
        } while (i < cnt);
    }

    if (s[0] & 1) {
        len = s[1];
        ptr = (uint16_t *)s[2];
    } else {
        len = (*(uint8_t *)s >> 1) & 0x7f;
        ptr = (uint16_t *)((uint8_t *)s + 2);
    }
    end = ptr + len;
    while (end != ptr) {
        end--;
        func_02068b70(p0, *end);
    }
    func_0200a678(s);
    if (obj.f4 != 0) {
        if (obj.f0c) {
            func_02052d3c(obj.f4, (void *)obj.f8);
        }
        func_02052c04(obj.f4);
    }
    func_02053290(&obj);
}
